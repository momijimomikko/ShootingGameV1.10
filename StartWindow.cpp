#include "DxLib.h"


class StartWindow {

private:

	int imgstart;

public:

	int Loadimg(void) {

		imgstart = LoadGraph("imgstart1.png");

		return 0;

	}

	int start(void) {

		DrawGraph(0, 0, imgstart, TRUE);

		return 0;

	}
};