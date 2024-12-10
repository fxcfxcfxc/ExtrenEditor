// Fill out your copyright notice in the Description page of Project Settings.


#include "SlateWidget/AdvanceDeletionWidget.h"

#include "SlateOptMacros.h"
#include <DebugHeader.h>

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

		//设置资产列表显示
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
	
	const FString  DisplayAssetName = AssetDataToDisplay->AssetName.ToString();
	const FString  DisplayASssetClass = AssetDataToDisplay->GetClass()->GetName();

	FSlateFontInfo AssetClassNameFont =  FCoreStyle::Get().GetFontStyle(FName("EmbossedText"));
	AssetClassNameFont.Size = 10;
	FSlateFontInfo AssetNameFont = FCoreStyle::Get().GetFontStyle(FName("EmbossedText"));
	AssetNameFont.Size = 15;
	//设置每行de 
	TSharedRef< STableRow <  TSharedPtr<FAssetData> > > ListviewRowWiget =
		SNew(STableRow < TSharedPtr<FAssetData> >, OwnerTable)
		[

			SNew(SHorizontalBox)

				//checkbox
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Left)
				.VAlign(VAlign_Center)
				.FillWidth(0.05f)
				[

					SNew(SCheckBox)
						.Type(ESlateCheckBoxType::CheckBox)
						.OnCheckStateChanged(this, &SAdvanceDeletionWidget::OnCheckBoxStateChanged, AssetDataToDisplay)
						.Visibility(EVisibility::Visible)
				]

				//资产类型
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Fill)
				.FillWidth(.2f)
				[
					SNew(STextBlock)
						.Text(FText::FromString(DisplayASssetClass))
						.ColorAndOpacity(FColor::Green)
						.Font(AssetClassNameFont)
				]

				//资产名称
				+ SHorizontalBox::Slot()
				[
					SNew(STextBlock)
						.Text(FText::FromString(DisplayAssetName))
						.Font(AssetNameFont)
				]

				+ SHorizontalBox::Slot()
				[
					SNew(SButton)
						.Text(FText::FromString(TEXT("删除") ) )
						.OnClicked(this, &SAdvanceDeletionWidget::OnDeleteButtonClicked, AssetDataToDisplay)

				]



		];

	//
	return ListviewRowWiget;
	/*return
	SNew( STableRow< TSharedPtr<FAssetData> >, OwnerTable)*/
}

void SAdvanceDeletionWidget::OnCheckBoxStateChanged(ECheckBoxState NewState, TSharedPtr<FAssetData> AssetDataToDisplay)
{
	switch (NewState)
	{
	case ECheckBoxState::Unchecked:
	DebugHeader::Print(AssetDataToDisplay->AssetName.ToString() + TEXT("is uncheck"), FColor::Green);
		break;
	case ECheckBoxState::Checked:
	DebugHeader::Print(AssetDataToDisplay->AssetName.ToString() + TEXT("is check"), FColor::Red);
		break;
	case ECheckBoxState::Undetermined:
		break;
	default:
		break;
	}


}

FReply SAdvanceDeletionWidget::OnDeleteButtonClicked(TSharedPtr<FAssetData> ClickedAssetData)
{
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
