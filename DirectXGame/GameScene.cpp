#include"GameScene.h"


// コンストラクタ
GameScene::GameScene() {}

// デストラクタ
GameScene::~GameScene() {

delete model_;


}

void GameScene::Initialize()
{
	//3Dモデルの生成
	//model_=Model::Create();

	//カメラプロジェクションの初期化
	cameraProjection_->Initialize();
}


void GameScene::Update()
{



}


void GameScene::Draw()
{


}