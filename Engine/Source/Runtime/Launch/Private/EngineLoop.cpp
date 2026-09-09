#include "LaunchPrivatePCH.h"

#include "EngineLoop.h"

bool FEngineLoop::PreInit()
{
    return true;
}

bool FEngineLoop::Init()
{
    return true;
}

void FEngineLoop::Tick()
{
    // The future window message pump will replace this temporary single-tick exit.
    bShouldExit = true;
}

void FEngineLoop::Exit()
{
}

bool FEngineLoop::ShouldExit() const
{
    return bShouldExit;
}
