#include "ClearScene.h"
#include<Novice.h>


void ClearScene::Init() {}

void ClearScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	Novice::ScreenPrintf(0, 0, "ClearScene");

	Novice::ScreenPrintf(0, 20,  "SceneChange : SPACE");


	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {}
