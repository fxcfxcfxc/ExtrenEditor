// Fill out your copyright notice in the Description page of Project Settings.


#include "QuickAssetAction.h"
#include "DebugHeader.h"
#include "EditorAssetLibrary.h"
#include "EditorUtilityLibrary.h"

void UQuickAssetAction::TestFunc()
{
	
	DebugHeader::Print("Working",FColor::Cyan);
}

void UQuickAssetAction::DuplicateAssets(int32 NumOfDuplicates)
{
	if(NumOfDuplicates <= 0)
	{
		DebugHeader::Print( TEXT("请输入有效数量"),FColor::Red );
		return;
	}

	TArray<FAssetData> SelectedAssetData = UEditorUtilityLibrary::GetSelectedAssetData();
	uint32 Counter =  0;

	for(const FAssetData& AssetData: SelectedAssetData)
	{
		for(int32 i =0; i< NumOfDuplicates; i++)
		{
			//原始目标的路径名测试
			const FString SourceAssetPath = AssetData.ObjectPath.ToString();
			//复制资产名
			const FString NewDuplicatedAssetName = AssetData.AssetName.ToString() + TEXT("_")  + FString::FromInt(i+1);
			//新资产的路径名
			const FString NewPathName  = FPaths::Combine(AssetData.PackagePath.ToString(),NewDuplicatedAssetName);

			//复制资产
			if(UEditorAssetLibrary::DuplicateAsset(SourceAssetPath, NewPathName))
			{
				//保存
				UEditorAssetLibrary::SaveAsset(NewPathName,false);
				++Counter;
				
			}
		}
	}

	if(Counter> 0 )
	{
		DebugHeader::ShowNotifyInfo( TEXT("复制成功" + FString::FromInt(Counter) + "个文件"));
		
	}
 }
