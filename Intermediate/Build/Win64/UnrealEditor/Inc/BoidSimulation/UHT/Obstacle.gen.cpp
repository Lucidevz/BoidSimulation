// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidSimulation/Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}
// Cross Module References
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidManager_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_AObstacle();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoidSimulation();
// End Cross Module References
	void AObstacle::StaticRegisterNativesAObstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
	UClass* Z_Construct_UClass_AObstacle_NoRegister()
	{
		return AObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boidManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boidManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[];
#endif
		static void NewProp_IsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isActive_MetaData[];
#endif
		static void NewProp_isActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_boidManager_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_boidManager = { "boidManager", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, boidManager), Z_Construct_UClass_ABoidManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_boidManager_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_boidManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacle, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_speed_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	void Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected_SetBit(void* Obj)
	{
		((AObstacle*)Obj)->IsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AObstacle), &Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_isActive_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	void Z_Construct_UClass_AObstacle_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((AObstacle*)Obj)->isActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AObstacle), &Z_Construct_UClass_AObstacle_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_isActive_MetaData), Z_Construct_UClass_AObstacle_Statics::NewProp_isActive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_boidManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_IsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_isActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
		&AObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AObstacle()
	{
		if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
	}
	template<> BOIDSIMULATION_API UClass* StaticClass<AObstacle>()
	{
		return AObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
	AObstacle::~AObstacle() {}
	struct Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Obstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Obstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 1109575226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Obstacle_h_1152020490(TEXT("/Script/BoidSimulation"),
		Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Obstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
