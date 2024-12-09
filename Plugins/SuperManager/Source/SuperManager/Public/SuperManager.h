// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FSuperManagerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:

	TArray<FString> FolderPathsSelected;

	void InitCBMenuExtention();

	TSharedRef<FExtender> CustomCBMenuExtender(const TArray<FString>& SelectedPaths);

	void OnAdvanceDeleteUnsuedAssetButtonClicked();
	void AddCBMenuEntry(FMenuBuilder& MenuBuilder);
	
	void OnDeleteUnsuedAssetButtonClicked();

	void RegisterAdvanceDeletionTab();

	TSharedRef<SDockTab> OnSpawnAdvanceDeletionTab( const FSpawnTabArgs& SpawnArgs);

	//��ȡѡ���ļ����µ��ʲ�
	TArray< TSharedPtr<FAssetData> > GetAllAssetDataUnderSelectedFolder();
};
