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
	bCanSupportFocus = true;

	//
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EmbossedText"));
	TitleTextFont.Size = 30;


	//layout
	ChildSlot
	[
			/*SNew(STextBlock)
			.Text(FText::FromString(InArgs._TestString) )*/

		//main 
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

	];

}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
