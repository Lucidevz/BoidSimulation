// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidSimulation/CameraRotator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRotator() {}
// Cross Module References
	BOIDSIMULATION_API UClass* Z_Construct_UClass_UCameraRotator();
	BOIDSIMULATION_API UClass* Z_Construct_UClass_UCameraRotator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BoidSimulation();
// End Cross Module References
	DEFINE_FUNCTION(UCameraRotator::execRotateVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateVertical(Z_Param_DeltaTime,Z_Param_multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraRotator::execRotateHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateHorizontal(Z_Param_DeltaTime,Z_Param_multiplier);
		P_NATIVE_END;
	}
	void UCameraRotator::StaticRegisterNativesUCameraRotator()
	{
		UClass* Class = UCameraRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateHorizontal", &UCameraRotator::execRotateHorizontal },
			{ "RotateVertical", &UCameraRotator::execRotateVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics
	{
		struct CameraRotator_eventRotateHorizontal_Parms
		{
			float DeltaTime;
			int32 multiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRotator_eventRotateHorizontal_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRotator_eventRotateHorizontal_Parms, multiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRotator, nullptr, "RotateHorizontal", nullptr, nullptr, Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::CameraRotator_eventRotateHorizontal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::CameraRotator_eventRotateHorizontal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraRotator_RotateHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRotator_RotateHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics
	{
		struct CameraRotator_eventRotateVertical_Parms
		{
			float DeltaTime;
			int32 multiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRotator_eventRotateVertical_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraRotator_eventRotateVertical_Parms, multiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraRotator, nullptr, "RotateVertical", nullptr, nullptr, Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::CameraRotator_eventRotateVertical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::CameraRotator_eventRotateVertical_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCameraRotator_RotateVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraRotator_RotateVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraRotator);
	UClass* Z_Construct_UClass_UCameraRotator_NoRegister()
	{
		return UCameraRotator::StaticClass();
	}
	struct Z_Construct_UClass_UCameraRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rotateSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidSimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraRotator_RotateHorizontal, "RotateHorizontal" }, // 993679706
		{ &Z_Construct_UFunction_UCameraRotator_RotateVertical, "RotateVertical" }, // 3488497119
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraRotator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CameraRotator.h" },
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraRotator_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraRotator_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRotator, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_UCameraRotator_Statics::NewProp_InputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraRotator_Statics::NewProp_MyTransform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraRotator_Statics::NewProp_MyTransform = { "MyTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRotator, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::NewProp_MyTransform_MetaData), Z_Construct_UClass_UCameraRotator_Statics::NewProp_MyTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraRotator_Statics::NewProp_rotateSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "CameraRotator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraRotator_Statics::NewProp_rotateSpeed = { "rotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraRotator, rotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::NewProp_rotateSpeed_MetaData), Z_Construct_UClass_UCameraRotator_Statics::NewProp_rotateSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRotator_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRotator_Statics::NewProp_MyTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraRotator_Statics::NewProp_rotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraRotator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraRotator_Statics::ClassParams = {
		&UCameraRotator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraRotator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraRotator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCameraRotator()
	{
		if (!Z_Registration_Info_UClass_UCameraRotator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraRotator.OuterSingleton, Z_Construct_UClass_UCameraRotator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraRotator.OuterSingleton;
	}
	template<> BOIDSIMULATION_API UClass* StaticClass<UCameraRotator>()
	{
		return UCameraRotator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraRotator);
	UCameraRotator::~UCameraRotator() {}
	struct Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_CameraRotator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_CameraRotator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraRotator, UCameraRotator::StaticClass, TEXT("UCameraRotator"), &Z_Registration_Info_UClass_UCameraRotator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraRotator), 910940104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_CameraRotator_h_3798919125(TEXT("/Script/BoidSimulation"),
		Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_CameraRotator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_LukeM_Documents_UOG_Level_5_assignment_2_s4203133_BoidSimulation_Source_BoidSimulation_CameraRotator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
