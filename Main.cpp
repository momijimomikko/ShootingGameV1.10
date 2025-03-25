#include <DxLib.h>
#include "HomeWindow.cpp"


	int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
	{

		HomeWindow HW;

		ChangeWindowMode(TRUE);

		SetGraphMode(1200, 700, 16);

		if (DxLib_Init() == -1)
		{
			return -1;
		}

		HW.Loadimg();

		while (1) {

			HW.homewindow();

			if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) {

				break;

			}

		}

		DxLib_End();

		return 0;

	}