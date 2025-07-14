// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectNOA/ProjectNOAGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectNOAGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTNOA_API UClass* Z_Construct_UClass_AProjectNOAGameMode();
PROJECTNOA_API UClass* Z_Construct_UClass_AProjectNOAGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectNOA();
// End Cross Module References

// Begin Class AProjectNOAGameMode
void AProjectNOAGameMode::StaticRegisterNativesAProjectNOAGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectNOAGameMode);
UClass* Z_Construct_UClass_AProjectNOAGameMode_NoRegister()
{
	return AProjectNOAGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectNOAGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectNOAGameMode.h" },
		{ "ModuleRelativePath", "ProjectNOAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectNOAGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectNOAGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectNOA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectNOAGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectNOAGameMode_Statics::ClassParams = {
	&AProjectNOAGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectNOAGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectNOAGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectNOAGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectNOAGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectNOAGameMode.OuterSingleton, Z_Construct_UClass_AProjectNOAGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectNOAGameMode.OuterSingleton;
}
template<> PROJECTNOA_API UClass* StaticClass<AProjectNOAGameMode>()
{
	return AProjectNOAGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectNOAGameMode);
AProjectNOAGameMode::~AProjectNOAGameMode() {}
// End Class AProjectNOAGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_ProjectNOAGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectNOAGameMode, AProjectNOAGameMode::StaticClass, TEXT("AProjectNOAGameMode"), &Z_Registration_Info_UClass_AProjectNOAGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectNOAGameMode), 3114822586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_ProjectNOAGameMode_h_2474550991(TEXT("/Script/ProjectNOA"),
	Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_ProjectNOAGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Desktop_Desktop_ProjectNOA_ProjectNOA_Source_ProjectNOA_ProjectNOAGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
