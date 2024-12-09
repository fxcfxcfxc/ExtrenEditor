// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperManager.h"

#include "ContentBrowserModule.h"
#include "SlateWidget/AdvanceDeletionWidget.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "EditorAssetLibrary.h"
#define LOCTEXT_NAMESPACE "FSuperManagerModule"

void FSuperManagerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	InitCBMenuExtention();

	//注册自定义tab窗口
	RegisterAdvanceDeletionTab();
}

void FSuperManagerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FSuperManagerModule::InitCBMenuExtention()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

	//入口
	TArray<FContentBrowserMenuExtender_SelectedPaths>& ContentBrowserModuleMenuExtenders = ContentBrowserModule.GetAllPathViewContextMenuExtenders();

	//右击文件夹时进行广播
	FContentBrowserMenuExtender_SelectedPaths CustomCBMenuDelegate;
	CustomCBMenuDelegate.BindRaw(this,&FSuperManagerModule::CustomCBMenuExtender);
	ContentBrowserModuleMenuExtenders.Add(CustomCBMenuDelegate);
	
	//增加自定义委托
	//ContentBrowserModuleMenuExtenders.Add(FContentBrowserMenuExtender_SelectedPaths::CreateRaw(this,&FSuperManagerModule::))
	
}

TSharedRef<FExtender> FSuperManagerModule::CustomCBMenuExtender(const TArray<FString>& SelectedPaths)
{
	TSharedRef<FExtender> MenuExtender (new FExtender());

	if(SelectedPaths.Num()>0)
	{

		//插入位置
		MenuExtender->AddMenuExtension(FName("Delete"),
			EExtensionHook::After,
			TSharedPtr<FUICommandList>(),
			FMenuExtensionDelegate::CreateRaw(this, &FSuperManagerModule::AddCBMenuEntry));
		//将当前目录保存下来
		FolderPathsSelected = SelectedPaths;
		
	}
	return  MenuExtender;
}

void FSuperManagerModule::OnAdvanceDeleteUnsuedAssetButtonClicked()
{
	TSharedRef<FGlobalTabmanager> TabManager =  FGlobalTabmanager::Get();
	TabManager->TryInvokeTab(FName("AdvanceDeletion"));
}

void FSuperManagerModule::AddCBMenuEntry(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry
	(
		FText::FromString( TEXT("DeleteUnusedAssets") ),
		FText::FromString( TEXT("Safely Delete all unused assets under folder") ),
		FSlateIcon(),
		FExecuteAction::CreateRaw(this,&FSuperManagerModule::OnDeleteUnsuedAssetButtonClicked)
	);

	MenuBuilder.AddMenuEntry
	(
		FText::FromString(TEXT("Advance Deletion Window")),
		FText::FromString(TEXT("Safely Delete all unused assets under folder")),
		FSlateIcon(),
		FExecuteAction::CreateRaw(this, &FSuperManagerModule::OnAdvanceDeleteUnsuedAssetButtonClicked)
	);
	
}

void FSuperManagerModule::OnDeleteUnsuedAssetButtonClicked()
{
}

void FSuperManagerModule::RegisterAdvanceDeletionTab()
{
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FName("AdvanceDeletion"),
		FOnSpawnTab::CreateRaw(this, &FSuperManagerModule::OnSpawnAdvanceDeletionTab) )
	.SetDisplayName(FText::FromString(TEXT("高级删除面板")));
}

TSharedRef<SDockTab> FSuperManagerModule::OnSpawnAdvanceDeletionTab(const FSpawnTabArgs& SpawnArgs)
{
	return
		SNew(SDockTab).TabRole(NomadTab)
		[

			SNew(SAdvanceDeletionWidget)
				.AssetsDataArray( GetAllAssetDataUnderSelectedFolder() )
		];
}

TArray<TSharedPtr<FAssetData>> FSuperManagerModule::GetAllAssetDataUnderSelectedFolder()
{

	TArray<TSharedPtr<FAssetData>> AvaiableAssetsData;

	TArray<FString> AssetsPathNames = UEditorAssetLibrary::ListAssets(FolderPathsSelected[0]);

	for (const FString& AssetPathName : AssetsPathNames)
	{
		if(AssetPathName.Contains(TEXT("Developers"))|| //Don't touch root folder
				AssetPathName.Contains(TEXT("Collections")) ||
				AssetPathName.Contains(TEXT("__ExternalActors__")) ||
				AssetPathName.Contains(TEXT("__ExternalObjects__")))
			{
				continue;
			}

		if (!UEditorAssetLibrary::DoesAssetExist(AssetPathName))
			continue;
		
		const FAssetData Data = UEditorAssetLibrary::FindAssetData(AssetPathName);

		AvaiableAssetsData.Add(MakeShared<FAssetData>(Data) );

	}

	return AvaiableAssetsData;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSuperManagerModule, SuperManager)