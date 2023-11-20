#include <Novice.h>
#include<Command.h>
#include"InputHandle.h"
#include"Player.h"

const char kWindowTitle[] = "学籍番号";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	
	


	

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
