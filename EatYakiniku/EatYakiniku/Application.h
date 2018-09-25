/*
*	@file	Application.h
*	@brief	�A�v���P�[�V�����̊Ǘ����s���N���X
*	@author Ishibashi Ryuto
*	@date
*	2018/09/25		���ō쐬
*/
#pragma once
// �V�X�e���w�b�_�C���N���[�h
#include <string>


class Application
{
public:
	/// @brief �V���O���g���C���X�^���X���擾����
	static Application& GetInstance()
	{
		static Application inst;
		return inst;
	}


	/// @brief ����������
	/// @retval true: ����������
	/// @retval false: ���������s
	bool Initialize();

	/// @brief ���s����
	void Run();

	/// @brief �I������
	void Terminate();

private:
	/* �萔��` */
	const std::string WINDOW_TITLE = "EAT YAKINIKU!";

	/* ���[�J�����\�b�h��` */
	///	@brief �R���X�g���N�^
	Application();

	/// @brief �f�X�g���N�^
	~Application();
};

