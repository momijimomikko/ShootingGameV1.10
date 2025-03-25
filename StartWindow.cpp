#include "DxLib.h"


class StartWindow {

private:

	int imgstart1;

public:

	int Loadimg(void) {

		imgstart1 = LoadGraph("imgstart.png");

		return 0;

	}

	int start(void) {

		DrawGraph(0, 0, imgstart1, TRUE);

		return 0;

	}
};