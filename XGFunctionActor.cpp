


#include "XGFunctionActor.h"


// Sets default values
AXGFunctionActor::AXGFunctionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AXGFunctionActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXGFunctionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AXGFunctionActor::BlueprintPureFunction()
{
	return 0.0f;
}

float AXGFunctionActor::BlueprintCallableFunction()
{
	return 0.0f;
}

int32 AXGFunctionActor::BlueprintCallableConstFunction() const
{
	return int32();
}

int32 AXGFunctionActor::BlueprintPureFalseFunction() const
{
	return int32();
}

float AXGFunctionActor::CalculateDamage(float BaseDamage, float DefenseFactor)
{
	return 0.0f;
}

int32 AXGFunctionActor::PureGetCurrentMoney()
{
	return Money;
}

int32 AXGFunctionActor::CallableGetCurrentMoney()
{
	return Money;
}

int32 AXGFunctionActor::PureGetLastCurrentMoney()
{
	Money -= 1;
	return Money;
}

int32 AXGFunctionActor::CallableGetLastCurrentMoney()
{
	BPOnlyMustOverride(0.5f);

	Money -= 1;
	return Money;
}


int32 AXGFunctionActor::BPAndCPPMustOverride_Implementation(float InMyFloat)
{
	return InMyFloat + 10;
}



