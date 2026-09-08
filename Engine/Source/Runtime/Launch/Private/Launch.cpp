#include "LaunchPrivatePCH.h"

#include "Launch.h"
#include "EngineLoop.h"

int GuardedMain()
{
	FEngineLoop EngineLoop;

	if (!EngineLoop.PreInit())
	{
		return -1;
	}

	if (!EngineLoop.Init())
	{
		return -1;
	}

	while (!EngineLoop.ShouldExit())
	{
		EngineLoop.Tick();
	}

	EngineLoop.Exit();

	return 0;
}