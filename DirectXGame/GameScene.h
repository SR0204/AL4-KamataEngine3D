#pragma once

#include<3d/WorldTransform.h>
#include<3d/Camera.h>
#include<3d/Model.h>



/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public:

	GameScene();

	~GameScene();

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

	// テクスチャハンドル
	uint32_t textureHandle_ = 0;

	//ファイル名指定。テクスチャ読み込み
	//textureHandle_=TextureManager::Load();

	//カメラプロジェクション
	KamataEngine::Camera*cameraProjection_;

    // 3Dモデルデータ
	KamataEngine::Model*model_=nullptr;

	
};	