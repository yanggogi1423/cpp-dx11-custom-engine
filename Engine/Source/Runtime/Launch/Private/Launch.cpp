#include "LaunchPrivatePCH.h"

#include "Launch/Launch.h"
#include "EngineLoop.h"


//	The main entry point for the engine. This function is called by the platform-specific entry point (e.g., WinMain on Windows).
//	추후 MiniDump을 통해서 Crash 발생 시 GuardedMain을 호출하도록 구현할 예정입니다.
namespace
{
	int GuardedMain(HINSTANCE hInstance, int nShowCmd)
	{
		//FEngineLoop EngineLoop;

		//if (!EngineLoop.PreInit())
		//{
		//	return -1;
		//}

		//if (!EngineLoop.Init())
		//{
		//	return -1;
		//}

		//while (!EngineLoop.ShouldExit())
		//{
		//	EngineLoop.Tick();
		//}

		//EngineLoop.Exit();

		return 0;
	}
}


int Launch(HINSTANCE hInstance, int nShowCmd)
{
	return GuardedMain(hInstance, nShowCmd);
}
