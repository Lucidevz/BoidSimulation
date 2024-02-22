// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidSimulation/BoidOctTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidOctTree() {}
// Cross Module References
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidManager_NoRegister();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidOctTree();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_ABoidOctTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BoidSimulation();
// End Cross Module References
	void ABoidOctTree::StaticRegisterNativesABoidOctTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoidOctTree);
	UClass* Z_Construct_UClass_ABoidOctTree_NoRegister()
	{
		return ABoidOctTree::StaticClass();
	}
	struct Z_Construct_UClass_ABoidOctTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boidsInSection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boidsInSection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boidsInSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontTopLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontTopLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontTopRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontTopRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontBottomLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontBottomLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontBottomRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontBottomRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackTopLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackTopLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackTopRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackTopRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackBottomLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackBottomLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackBottomRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackBottomRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoidOctTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoidOctTree.h" },
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, Manager), Z_Construct_UClass_ABoidManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_Manager_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_Manager_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection_Inner = { "boidsInSection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABoid_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boids in this Oct Tree node\n" },
#endif
		{ "ModuleRelativePath", "BoidOctTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boids in this Oct Tree node" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection = { "boidsInSection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, boidsInSection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopLeft_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Child Oct Tree node\n// Font 4\n" },
#endif
		{ "ModuleRelativePath", "BoidOctTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child Oct Tree node\nFont 4" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopLeft = { "FrontTopLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, FrontTopLeft), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopLeft_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopRight_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopRight = { "FrontTopRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, FrontTopRight), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopRight_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomLeft_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomLeft = { "FrontBottomLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, FrontBottomLeft), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomLeft_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomRight_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomRight = { "FrontBottomRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, FrontBottomRight), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomRight_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopLeft_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Back 4\x09 \n" },
#endif
		{ "ModuleRelativePath", "BoidOctTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back 4" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopLeft = { "BackTopLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, BackTopLeft), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopLeft_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopRight_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopRight = { "BackTopRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, BackTopRight), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopRight_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomLeft_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomLeft = { "BackBottomLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, BackBottomLeft), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomLeft_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomRight_MetaData[] = {
		{ "ModuleRelativePath", "BoidOctTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomRight = { "BackBottomRight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidOctTree, BackBottomRight), Z_Construct_UClass_ABoidOctTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomRight_MetaData), Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomRight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoidOctTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_Manager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_boidsInSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontTopRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_FrontBottomRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackTopRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidOctTree_Statics::NewProp_BackBottomRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoidOctTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidOctTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoidOctTree_Statics::ClassParams = {
		&ABoidOctTree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoidOctTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoidOctTree_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidOctTree_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoidOctTree()
	{
		if (!Z_Registration_Info_UClass_ABoidOctTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoidOctTree.OuterSingleton, Z_Construct_UClass_ABoidOctTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoidOctTree.OuterSingleton;
	}
	template<> BOIDSIMULATION_API UClass* StaticClass<ABoidOctTree>()
	{
		return ABoidOctTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidOctTree);
	ABoidOctTree::~ABoidOctTree() {}
	struct Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidOctTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidOctTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoidOctTree, ABoidOctTree::StaticClass, TEXT("ABoidOctTree"), &Z_Registration_Info_UClass_ABoidOctTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoidOctTree), 3036437491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidOctTree_h_4231893956(TEXT("/Script/BoidSimulation"),
		Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidOctTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_BoidOctTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
