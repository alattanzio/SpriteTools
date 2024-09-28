#pragma once

#include "SpriteToolsFunctionLibrary.generated.h"

class UPaperSprite;

UCLASS()
class USpriteToolsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="SpriteTools")
	static void OffsetPivot(UPaperSprite* SourceSprite, FVector2D PivotOffset);
};

