#pragma once
#include<Vector2.h>

class Player {
public:

	void Initialize();

	void Update();

	void Draw();

	void MoveRight();

	void MoveLeft();

private:

	Vector2 pos;

	float spd = 1.0f;
};