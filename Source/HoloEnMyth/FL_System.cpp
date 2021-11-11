// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_System.h"
#include "SlateBasics.h"

bool UFL_System::IsGamePadConnected()
{
    auto genericApplication = FSlateApplication::Get().GetPlatformApplication();
    if (genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached())
    {
        return true;
    }
    return false;
}