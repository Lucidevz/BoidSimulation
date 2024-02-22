// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidSimulation/Boid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoid() {}
// Cross Module References
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoid();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BoidSimulation();
// End Cross Module References
	void ABoid::StaticRegisterNativesABoid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoid);
	UClass* Z_Construct_UClass_ABoid_NoRegister()
	{
		return ABoid::StaticClass();
	}
	struct Z_Construct_UClass_ABoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boidMeshNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_boidMeshNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boid.h" },
		{ "ModuleRelativePath", "Boid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "Boid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoid, Manager), Z_Construct_UClass_ABoidManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_Manager_MetaData), Z_Construct_UClass_ABoid_Statics::NewProp_Manager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_boidMeshNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Boid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_boidMeshNumber = { "boidMeshNumber", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoid, boidMeshNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_boidMeshNumber_MetaData), Z_Construct_UClass_ABoid_Statics::NewProp_boidMeshNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_Manager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_boidMeshNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoid_Statics::ClassParams = {
		&ABoid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoid()
	{
		if (!Z_Registration_Info_UClass_ABoid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoid.OuterSingleton, Z_Construct_UClass_ABoid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoid.OuterSingleton;
	}
	template<> BOIDSIMULATION_API UClass* StaticClass<ABoid>()
	{
		return ABoid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoid);
	ABoid::~ABoid() {}
	struct Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Boid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Boid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoid, ABoid::StaticClass, TEXT("ABoid"), &Z_Registration_Info_UClass_ABoid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoid), 2873803052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Boid_h_2511487371(TEXT("/Script/BoidSimulation"),
		Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Boid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_Boid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
