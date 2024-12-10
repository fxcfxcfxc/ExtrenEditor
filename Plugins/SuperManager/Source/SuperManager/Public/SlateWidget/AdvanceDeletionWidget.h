// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class SUPERMANAGER_API SAdvanceDeletionWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAdvanceDeletionWidget)
		{
		}


	SLATE_ARGUMENT(TArray< TSharedPtr<FAssetData>>,AssetsDataArray)

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);


private:
	TArray< TSharedPtr<FAssetData> > StoredAssetData;

	TSharedRef<ITableRow> OnGenerateRowForList(TSharedPtr<FAssetData> AssetDataToDisplay, const TSharedRef<STableViewBase>& OwnerTable);

	void OnCheckBoxStateChanged(ECheckBoxState NewState, TSharedPtr<FAssetData> AssetDataToDisplay );

	FReply OnDeleteButtonClicked(TSharedPtr<FAssetData> ClickedAssetData);
};
