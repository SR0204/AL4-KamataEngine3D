#pragma once

#include<3d/WorldTransform.h>
#include<3d/Camera.h>
#include<3d/Model.h>

/// <summary>
/// ゲームシーン
/// </summary>
class Player {

	public:


	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

		
private:

//ワールド返還データ
KamataEngine::WorldTransform worldTransform_;

//モデル
KamataEngine::Model*model_=nullptr;

//テクスチャハンドル
uint32_t textureHandle_=0u;


};