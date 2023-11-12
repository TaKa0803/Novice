#include "GameManager.h"
#include"Novice.h"
#include"TitleScene.h"
#include"PlayScene.h"
#include"ClearScene.h"


GameManager::GameManager(){ 
	currentSceneNo_ = TITLE;

	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<PlayScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();
}

GameManager::~GameManager() {}

int GameManager::Run() { 

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///
		
		//シーンチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
		
		//シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}
		
		sceneArr_[currentSceneNo_]->Update();
		///
		/// ↑更新処理ここまで
		///
		sceneArr_[currentSceneNo_]->Draw();
		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}


	return 0;
}

