#pragma once

#include "Command.h"

/// ===== ���͊Ǘ��N���X ===== ///
class InputHandler {
private:

	// ����A
	ICommand* pressKeyA_;

	// ����D
	ICommand* pressKeyD_;

public:

	ICommand* HandleInput();

	/// �L�[A
	void AssignMoveLeftCommand2PressKeyA();

	/// �L�[D
	void AssignMoveLeftCommand2PressKeyD();
};