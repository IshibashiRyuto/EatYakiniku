/*
*	@file	Application.h
*	@brief	アプリケーションの管理を行うクラス
*	@author Ishibashi Ryuto
*	@date
*	2018/09/25		初版作成
*/
#pragma once
// システムヘッダインクルード
#include <string>


class Application
{
public:
	/// @brief シングルトンインスタンスを取得する
	static Application& GetInstance()
	{
		static Application inst;
		return inst;
	}


	/// @brief 初期化処理
	/// @retval true: 初期化成功
	/// @retval false: 初期化失敗
	bool Initialize();

	/// @brief 実行処理
	void Run();

	/// @brief 終了処理
	void Terminate();

private:
	/* 定数定義 */
	const std::string WINDOW_TITLE = "EAT YAKINIKU!";

	/* ローカルメソッド定義 */
	///	@brief コンストラクタ
	Application();

	/// @brief デストラクタ
	~Application();
};

