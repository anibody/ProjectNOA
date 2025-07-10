// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectNOA/Functions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROJECTNOA_API UClass* Z_Construct_UClass_UFunctions();
PROJECTNOA_API UClass* Z_Construct_UClass_UFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectNOA();
// End Cross Module References

// Begin Class UFunctions
void UFunctions::StaticRegisterNativesUFunctions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctions);
UClass* Z_Construct_UClass_UFunctions_NoRegister()
{
	return UFunctions::StaticClass();
}
struct Z_Construct_UClass_UFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Functions.h" },
		{ "ModuleRelativePath", "Functions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectNOA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctions_Statics::ClassParams = {
	&UFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctions()
{
	if (!Z_Registration_Info_UClass_UFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctions.OuterSingleton, Z_Construct_UClass_UFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctions.OuterSingleton;
}
template<> PROJECTNOA_API UClass* StaticClass<UFunctions>()
{
	return UFunctions::StaticClass();
}
UFunctions::UFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctions);
UFunctions::~UFunctions() {}
// End Class UFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_Functions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctions, UFunctions::StaticClass, TEXT("UFunctions"), &Z_Registration_Info_UClass_UFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctions), 3324021662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_Functions_h_452215523(TEXT("/Script/ProjectNOA"),
	Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_Functions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
