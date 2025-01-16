#pragma once

#define CAMERA_NEAR    20.0f		//カメラの手前クリップ距離

#define CAMERA_FAR    100.0f		//カメラの奥クリップ距離

#define CAMERA_POS_X       0		//カメラの初期X座標
#define CAMERA_POS_Y      10		//カメラの初期Y座標
#define CAMERA_POS_Z     -10		//カメラの初期Z座標


class Camera {

private:

	VECTOR Position;	//カメラの位置
	
	VECTOR Target;		//カメラの注視点



public:
	/// <summary>
	/// カメラ情報の初期化処理
	/// </summary>
	void Initialize();
	/// <summary>
	/// カメラの設定処理
	/// </summary>
	void SetCamera();
	/// <summary>
	/// カメラの更新処理
	/// </summary>
	void Update();
	/// <summary>
	/// カメラの後処理
	/// </summary>
	void Finalize();

};
