// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectPassionFruitGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPassionFruitGameMode() {}
// Cross Module References
	PROJECTPASSIONFRUIT_API UClass* Z_Construct_UClass_AProjectPassionFruitGameMode_NoRegister();
	PROJECTPASSIONFRUIT_API UClass* Z_Construct_UClass_AProjectPassionFruitGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectPassionFruit();
// End Cross Module References
	void AProjectPassionFruitGameMode::StaticRegisterNativesAProjectPassionFruitGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectPassionFruitGameMode_NoRegister()
	{
		return AProjectPassionFruitGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectPassionFruitGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_ProjectPassionFruit();
			OuterClass = AProjectPassionFruitGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectPassionFruitGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectPassionFruitGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ProjectPassionFruitGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPassionFruitGameMode, 3411281844);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPassionFruitGameMode(Z_Construct_UClass_AProjectPassionFruitGameMode, &AProjectPassionFruitGameMode::StaticClass, TEXT("/Script/ProjectPassionFruit"), TEXT("AProjectPassionFruitGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPassionFruitGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
