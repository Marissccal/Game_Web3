// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#include "ImprovedQuestSystem.h"
#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "FImprovedQuestSystemModule"

void FImprovedQuestSystemModule::StartupModule()
{
	FString MapPath = "/ImprovedQuestSystem/ImprovedQuestSystem/Maps/L_StartGame";

	if (GEngine && GEngine->GameViewport)
	{
		UGameplayStatics::OpenLevel(GEngine->GameViewport->GetWorld(), FName(*MapPath));
	}
}

void FImprovedQuestSystemModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FImprovedQuestSystemModule, ImprovedQuestSystem)