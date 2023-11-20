#include "InputHandle.h"
#include<Novice.h>

ICommand* InputHandle::HandleInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
}
void InputHandle::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandle::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyA_ = command;
}
