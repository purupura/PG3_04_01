#pragma once

/// ===== �v���C���[ ===== ///
class Player;

/// ===== �R�}���h�C���^�t�F�[�X ===== ///
class ICommand {

	///-------------------------------------------/// 
	/// �����o�֐�
	///-------------------------------------------///
public:

	/// <summary>
	/// ���z�f�X�g���N�^
	/// </summary>
	virtual ~ICommand();

	/// <summary>
	/// ���s
	/// </summary>
	/// <param name="player">�v���C���[</param>
	virtual void Execute(Player& player) = 0;
};

class MoveRightCommand : public ICommand {

	///-------------------------------------------/// 
	/// �����o�֐�
	///-------------------------------------------///
public:

	/// <summary>
	/// ���s(�p��)
	/// </summary>
	/// <param name="player">�v���C���[</param>
	void Execute(Player& player) override;
};

class MoveLeftCommand : public ICommand {

	///-------------------------------------------/// 
	/// �����o�֐�
	///-------------------------------------------///
public:

	/// <summary>
	/// ���s(�p��)
	/// </summary>
	/// <param name="player">�v���C���[</param>
	void Execute(Player& player) override;
};