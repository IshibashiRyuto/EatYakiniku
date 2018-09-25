#include <DxLib.h>
#include "Application.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application& app = Application::GetInstance();

	app.Initialize();

	app.Run();

	app.Terminate();

	return 0;
}