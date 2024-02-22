// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidSimulation/BoidManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidManager() {}
// Cross Module References
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidManager();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidManager_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidOctTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoidSimulation();
// End Cross Module References
	DEFINE_FUNCTION(ABoidManager::execGenerateBoids)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateBoids();
		P_NATIVE_END;
	}
	void ABoidManager::StaticRegisterNativesABoidManager()
	{
		UClass* Class = ABoidManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBoids", &ABoidManager::execGenerateBoids },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoidManager, nullptr, "GenerateBoids", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABoidManager_GenerateBoids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoidManager_GenerateBoids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoidManager);
	UClass* Z_Construct_UClass_ABoidManager_NoRegister()
	{
		return ABoidManager::StaticClass();
	}
	struct Z_Construct_UClass_ABoidManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boidMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boidMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalBoidSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalBoidSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoidSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NeighbourRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeperationWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SeperationWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CohesionWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CohesionWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_containmentRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_containmentRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_containmentWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_containmentWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_team1Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_team1Mat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_team2Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_team2Mat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_team3Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_team3Mat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_team4Mat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_team4Mat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_myBoids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myBoids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_myBoids;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoidsTeam1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsTeam1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoidsTeam1;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoidsTeam2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsTeam2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoidsTeam2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoidsTeam3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsTeam3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoidsTeam3;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoidsTeam4_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsTeam4_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoidsTeam4;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obstacles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obstacles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_obstacles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RootSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OctTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OctTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSpawnRadius_MetaData[];
#endif
		static void NewProp_ShowSpawnRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowSpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowMapSize_MetaData[];
#endif
		static void NewProp_ShowMapSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowMapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Teams_MetaData[];
#endif
		static void NewProp_Teams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Teams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapBoids_MetaData[];
#endif
		static void NewProp_WrapBoids_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WrapBoids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainBoids_MetaData[];
#endif
		static void NewProp_ContainBoids_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ContainBoids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowBoidDirection_MetaData[];
#endif
		static void NewProp_ShowBoidDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBoidDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowBoidNeighbourRadius_MetaData[];
#endif
		static void NewProp_ShowBoidNeighbourRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowBoidNeighbourRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOctTree_MetaData[];
#endif
		static void NewProp_ShowOctTree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOctTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoidManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoidManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoidManager_GenerateBoids, "GenerateBoids" }, // 2773917177
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoidManager.h" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_boidMesh_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set up Variables\n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set up Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_boidMesh = { "boidMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, boidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_boidMesh_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_boidMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnCount_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnCount = { "spawnCount", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, spawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnCount_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnRadius_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnRadius = { "spawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, spawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnRadius_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_OriginalBoidSpeed_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_OriginalBoidSpeed = { "OriginalBoidSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, OriginalBoidSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_OriginalBoidSpeed_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_OriginalBoidSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidSpeed_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidSpeed = { "BoidSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, BoidSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidSpeed_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_NeighbourRadius_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_NeighbourRadius = { "NeighbourRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, NeighbourRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_NeighbourRadius_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_NeighbourRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_SeperationWeight_MetaData[] = {
		{ "Category", "Boid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flocking Behaviour Variables\n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flocking Behaviour Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_SeperationWeight = { "SeperationWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, SeperationWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_SeperationWeight_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_SeperationWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_CohesionWeight_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_CohesionWeight = { "CohesionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, CohesionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_CohesionWeight_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_CohesionWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_AlignmentWeight_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_AlignmentWeight = { "AlignmentWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, AlignmentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_AlignmentWeight_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_AlignmentWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentRadius_MetaData[] = {
		{ "Category", "Boid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Containment \n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Containment" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentRadius = { "containmentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, containmentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentRadius_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentWeight_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentWeight = { "containmentWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, containmentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentWeight_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_team1Mat_MetaData[] = {
		{ "Category", "Boid Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Materials of the boids\n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials of the boids" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_team1Mat = { "team1Mat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, team1Mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_team1Mat_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_team1Mat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_team2Mat_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_team2Mat = { "team2Mat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, team2Mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_team2Mat_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_team2Mat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_team3Mat_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_team3Mat = { "team3Mat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, team3Mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_team3Mat_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_team3Mat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_team4Mat_MetaData[] = {
		{ "Category", "Boid Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_team4Mat = { "team4Mat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, team4Mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_team4Mat_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_team4Mat_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids_Inner = { "myBoids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids_MetaData[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids = { "myBoids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, myBoids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1_Inner = { "BoidsTeam1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1_MetaData[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1 = { "BoidsTeam1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, BoidsTeam1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2_Inner = { "BoidsTeam2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2_MetaData[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2 = { "BoidsTeam2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, BoidsTeam2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3_Inner = { "BoidsTeam3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3_MetaData[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3 = { "BoidsTeam3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, BoidsTeam3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4_Inner = { "BoidsTeam4", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4_MetaData[] = {
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4 = { "BoidsTeam4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, BoidsTeam4), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles_Inner = { "obstacles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles = { "obstacles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, obstacles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_RootSize_MetaData[] = {
		{ "Category", "Oct Tree Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OctTree\n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OctTree" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_RootSize = { "RootSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, RootSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_RootSize_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_RootSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_OctTree_MetaData[] = {
		{ "Category", "Oct Tree Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_OctTree = { "OctTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidManager, OctTree), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_OctTree_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_OctTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius_MetaData[] = {
		{ "Category", "UI Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// User Interface Variables\n" },
#endif
		{ "ModuleRelativePath", "BoidManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User Interface Variables" },
#endif
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ShowSpawnRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius = { "ShowSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ShowMapSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize = { "ShowMapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->Teams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams = { "Teams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->WrapBoids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids = { "WrapBoids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ContainBoids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids = { "ContainBoids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ShowBoidDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection = { "ShowBoidDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ShowBoidNeighbourRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius = { "ShowBoidNeighbourRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree_MetaData[] = {
		{ "Category", "UI Settings" },
		{ "ModuleRelativePath", "BoidManager.h" },
	};
#endif
	void Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree_SetBit(void* Obj)
	{
		((ABoidManager*)Obj)->ShowOctTree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree = { "ShowOctTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoidManager), &Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree_MetaData), Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoidManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_boidMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_spawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_OriginalBoidSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_NeighbourRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_SeperationWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_CohesionWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_AlignmentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_containmentWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_team1Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_team2Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_team3Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_team4Mat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_myBoids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_BoidsTeam4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_obstacles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_RootSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_OctTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowSpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowMapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_Teams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_WrapBoids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ContainBoids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowBoidNeighbourRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidManager_Statics::NewProp_ShowOctTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoidManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoidManager_Statics::ClassParams = {
		&ABoidManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoidManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoidManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoidManager()
	{
		if (!Z_Registration_Info_UClass_ABoidManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoidManager.OuterSingleton, Z_Construct_UClass_ABoidManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoidManager.OuterSingleton;
	}
	template<> BOIDSIMULATION_API UClass* StaticClass<ABoidManager>()
	{
		return ABoidManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidManager);
	ABoidManager::~ABoidManager() {}
	struct Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoidManager, ABoidManager::StaticClass, TEXT("ABoidManager"), &Z_Registration_Info_UClass_ABoidManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoidManager), 1391459039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidManager_h_1577017062(TEXT("/Script/BoidSimulation"),
		Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
