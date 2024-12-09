// Fill out your copyright notice in the Description page of Project Settings.


#include "SlateWidget/AdvanceDeletionWidget.h"

#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SAdvanceDeletionWidget::Construct(const FArguments& InArgs)
{
	/*
	ChildSlot
	[
		// Populate the widget
	];
	*/
	//

	StoredAssetData = InArgs._AssetsDataArray;
	bCanSupportFocus = true;

	//
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EmbossedText"));
	TitleTextFont.Size = 30;



	//layout
	ChildSlot
	[
			/*SNew(STextBlock)
			.Text(FText::FromString(InArgs._TestString) )*/

		//main  layout
		SNew(SVerticalBox)
		
		//标题
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("高级删除设置") ) )
			.Font(TitleTextFont)
			.Justification(ETextJustify::Center)
			.ColorAndOpacity(FColor::White)
		]

		+SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
		]

		+SVerticalBox::Slot()
		.VAlign(VAlign_Fill)
		[
			SNew(SScrollBox)
			
			+SScrollBox::Slot()
			[
				SNew(SListView<TSharedPtr <FAssetData>>)
				.ItemHeight(35.f)
				.ListItemsSource(&StoredAssetData)
				.OnGenerateRow(this, &SAdvanceDeletionWidget::OnGenerateRowForList)
			]
		]


	];

}

TSharedRef<ITableRow> SAdvanceDeletionWidget::OnGenerateRowForList(TSharedPtr<FAssetData> AssetDataToDisplay, const TSharedRef<STableViewBase>& OwnerTable)
{
	//
	const FString  DisplayAssetName = AssetDataToDisplay->AssetName.ToString();

	//
	TSharedRef< STableRow <  TSharedPtr<FAssetData> > > ListviewRowWiget =
		SNew(STableRow < TSharedPtr<FAssetData> >, OwnerTable)
		[
			SNew(STextBlock)
			.Text(FText::FromString( DisplayAssetName))
		];

	//
	return ListviewRowWiget;
	/*return
	SNew( STableRow< TSharedPtr<FAssetData> >, OwnerTable)*/
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
