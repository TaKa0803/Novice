#include "TitleScene.h"
#include<Novice.h>

void TitleScene::Init() {}

void TitleScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	Novice::ScreenPrintf(0, 0, "TitleScene");

	Novice::ScreenPrintf(0, 20, "SceneChange : SPACE");


	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw() {}
