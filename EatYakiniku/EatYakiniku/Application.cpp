#include <DxLib.h>
#include "DebugLayer.h"
#include "Application.h"



Application::Application()
{
	DebugLayer::GetInstance().SetOutputDestination(OutputDestination::Window);
}


Application::~Application()
{
}

bool Application::Initialize()
{
	SetWindowText(WINDOW_TITLE.c_str());
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		DebugLayer::GetInstance().PrintDebugMessage("Failed DxLib Init.");
		return false;
	}

	// 終了イベントを無効化
	SetWindowUserCloseEnableFlag(false);


	return true;
}

void Application::Run()
{
	while (1)
	{
		if (ProcessMessage() != 0)
		{
			DebugLayer::GetInstance().PrintDebugMessage("Error by ProcessMessage().");
			break;
		}

		if (ScreenFlip() != 0)
		{
			DebugLayer::GetInstance().PrintDebugMessage("Error by ScreenFlip().");
			break;
		}

		if (ClearDrawScreen() != 0)
		{
			DebugLayer::GetInstance().PrintDebugMessage("Error by ClearDrawScreen().");
			break;
		}

		if (static_cast<bool>(GetWindowUserCloseFlag(false)) == true)
		{
			break;
		}
	}
}

void Application::Terminate()
{
	DxLib_End();
}
