// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5/placeHolderActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplaceHolderActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYPROJECT5_API UClass* Z_Construct_UClass_AplaceHolderActor();
MYPROJECT5_API UClass* Z_Construct_UClass_AplaceHolderActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References

// Begin Class AplaceHolderActor
void AplaceHolderActor::StaticRegisterNativesAplaceHolderActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AplaceHolderActor);
UClass* Z_Construct_UClass_AplaceHolderActor_NoRegister()
{
	return AplaceHolderActor::StaticClass();
}
struct Z_Construct_UClass_AplaceHolderActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "placeHolderActor.h" },
		{ "ModuleRelativePath", "placeHolderActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplaceHolderActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AplaceHolderActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AplaceHolderActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AplaceHolderActor_Statics::ClassParams = {
	&AplaceHolderActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AplaceHolderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AplaceHolderActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AplaceHolderActor()
{
	if (!Z_Registration_Info_UClass_AplaceHolderActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AplaceHolderActor.OuterSingleton, Z_Construct_UClass_AplaceHolderActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AplaceHolderActor.OuterSingleton;
}
template<> MYPROJECT5_API UClass* StaticClass<AplaceHolderActor>()
{
	return AplaceHolderActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AplaceHolderActor);
AplaceHolderActor::~AplaceHolderActor() {}
// End Class AplaceHolderActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NADIA_Documents_Unreal_Projects_UE_Master_File_MyProject5_Source_MyProject5_placeHolderActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AplaceHolderActor, AplaceHolderActor::StaticClass, TEXT("AplaceHolderActor"), &Z_Registration_Info_UClass_AplaceHolderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AplaceHolderActor), 3543034858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NADIA_Documents_Unreal_Projects_UE_Master_File_MyProject5_Source_MyProject5_placeHolderActor_h_2345333818(TEXT("/Script/MyProject5"),
	Z_CompiledInDeferFile_FID_Users_NADIA_Documents_Unreal_Projects_UE_Master_File_MyProject5_Source_MyProject5_placeHolderActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NADIA_Documents_Unreal_Projects_UE_Master_File_MyProject5_Source_MyProject5_placeHolderActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
