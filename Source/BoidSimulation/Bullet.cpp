// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Boid.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialise mesh and material components
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	Mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/EngineMeshes/Cube'")).Object;
	mat = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("'/Engine/Functions/Engine_MaterialFunctions02/ExampleContent/HueShift_Mat.HueShift_Mat'")).Object;
	// Apply material and set up scale of the static mesh
	MeshComponent->SetMaterial(0, mat);
	MeshComponent->SetRelativeScale3D(FVector(0.5f, 0.05f, 0.075f));
	//MeshComponent->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
	MeshComponent->SetStaticMesh(Mesh);
	MeshComponent->GetGenerateOverlapEvents();

	this->SetRootComponent(MeshComponent);

	// Enable physics so the projectile motion can work
	//MeshComponent->SetSimulatePhysics(true);
	//MeshComponent->SetEnableGravity(false);

	// Initialise variables on the projectile movement component
	/*projectileMotion = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	projectileMotion->InitialSpeed = 4250.0f;
	projectileMotion->MaxSpeed = 4250.0f;
	projectileMotion->bShouldBounce = false;
	projectileMotion->ProjectileGravityScale = 0.0f;*/

	// Set this to the path of a particle system in the engine
	explodeParticles = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("'/Game/StarterContent/Particles/P_Explosion.P_Explosion'")).Object;

	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	SetActorEnableCollision(true);
	MeshComponent->SetCollisionProfileName(FName("OverlapAll"));
	MeshComponent->MoveIgnoreActors.Add(this);
	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnActorBeginOverlap);
	//projectileMotion->Velocity = GetActorForwardVector() * projectileMotion->InitialSpeed;
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	//SetActorRotation(ForwardDirection.Rotation());
	SetActorLocation(GetActorLocation() + (GetActorForwardVector() * BulletSpeed));
}

void ABullet::SetForwardDirection(FVector& Direction)
{
	// Assign forward direction to the vector passed in, and set the velocity to this value as well
	ForwardDirection = Direction;
	SetActorRotation(Direction.Rotation());
}

void ABullet::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Cast the hit actor to type 'ABoid'
	ABoid* otherBoid = Cast<ABoid>(OtherActor);
	if (otherBoid != nullptr) {
		// If the cast was successful, get the other boids team
		int32 otherBoidTeam = otherBoid->GetBoidTeam();
		if (otherBoidTeam != teamShotFrom) {
			// If the hit boids team is a different team to the boid who shot the bullet, explode this boid
			// Intialise particle spawning varaibles
			FVector SpawnLocation = GetActorLocation();
			FRotator SpawnRotation = FRotator::ZeroRotator;
			FActorSpawnParameters SpawnParams;

			GetWorld()->DestroyActor(otherBoid);
			//otherBoid->Destroy();
			
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explodeParticles, SpawnLocation);

			//UParticleSystem* explosionParticles = GetWorld()->SpawnActor<UParticleSystem>(SpawnLocation, SpawnRotation, SpawnParams);
			GetWorld()->DestroyActor(this);
			//this->Destroy();
		}
	}
}

