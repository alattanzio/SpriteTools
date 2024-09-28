
#include "SpriteToolsFunctionLibrary.h"

#include "PaperSprite.h"


void USpriteToolsFunctionLibrary::OffsetPivot(UPaperSprite* SourceSprite, FVector2D PivotOffset)
{
	// reset to center
	SourceSprite->SetPivotMode(ESpritePivotMode::Center_Center, FVector2D(), true);
	
	// offset it
	const FVector2D PivotPosition = SourceSprite->GetPivotPosition();
	SourceSprite->SetPivotMode(ESpritePivotMode::Custom, PivotPosition + PivotOffset, true);
}
