// Copyright Qoobit Productions Inc. All Rights Reserved.
#include "QOO_RootBoneAdderBPLibrary.h"
#include "QOO_RootBoneAdder.h"

#if WITH_EDITOR
#include "EditorUtilityWidgetBlueprint.h"
#endif

#define LOCTEXT_NAMESPACE "QOO_RootBoneAdderBPLibrary"
DEFINE_LOG_CATEGORY_STATIC(LogSkeletalMeshModelingToolsMeshConverter, Log, All)

UQOO_RootBoneAdderBPLibrary::UQOO_RootBoneAdderBPLibrary(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}

UEditorUtilityWidgetBlueprint* UQOO_RootBoneAdderBPLibrary::CastToEditorUtilityWidgetBlueprintAsset(UObject *Object, EQOO_RootBoneAdderCastResultEnum& Branches)
{

	UEditorUtilityWidgetBlueprint* EditorUtilityWidgetBlueprint = Cast<UEditorUtilityWidgetBlueprint>(Object);
	if (EditorUtilityWidgetBlueprint)
	{
		Branches = EQOO_RootBoneAdderCastResultEnum::Then;
		return EditorUtilityWidgetBlueprint;
	}

	Branches = EQOO_RootBoneAdderCastResultEnum::CastFailed;
	return nullptr;
}
