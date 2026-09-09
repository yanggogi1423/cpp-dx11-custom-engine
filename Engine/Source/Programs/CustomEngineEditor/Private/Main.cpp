#include <Windows.h>

#include "Launch/Launch.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	return Launch(hInstance, nCmdShow);
}
