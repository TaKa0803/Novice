#include "PlayScene.h"
#include<Novice.h>

void PlayScene::Init() {}

void PlayScene::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);

	Novice::ScreenPrintf(0, 0, "StageScene");

	Novice::ScreenPrintf(0, 20, "SceneChange : SPACE");


	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void PlayScene::Draw() {}
