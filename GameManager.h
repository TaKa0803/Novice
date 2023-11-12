#pragma once
#include<memory>
#include"IScene.h"

class GameManager {
private:
	std::unique_ptr<IScene> sceneArr_[3];

	//呼び出すステージの管理
	int currentSceneNo_;
	int prevSceneNo_;


	public:

		GameManager();
	    ~GameManager();

		int Run();
};