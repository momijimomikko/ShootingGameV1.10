#include "DxLib.h"
#include "StartWindow.cpp"


class HomeWindow {

private:

	StartWindow SW;

public:

	int Loadimg(void) {

		SW.Loadimg();

		return 0;

	}

	int homewindow(void) {

		if (CheckHitKey(KEY_INPUT_RETURN) != 0) {

			SW.start();

		}

		return 0;

	}
};