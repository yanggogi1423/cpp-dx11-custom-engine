#pragma once


/*
	Interface for the engine loop. This is the main loop of the engine, responsible for initializing, ticking, and shutting down the engine.
*/
class IEngineLoop
{
protected:
	IEngineLoop() = default;
	virtual ~IEngineLoop() = default;
	
	virtual bool PreInit(HINSTANCE hInstance, int nShowCmd) = 0;

};
