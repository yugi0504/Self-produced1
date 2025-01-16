#pragma once

#define MODEL_FILE_NAME "////"		//モデルのファイル名

#define MODEL_POS_X          0		//モデルの初期X座標

#define MODEL_POS_Y			 0		//モデルの初期Y座標

#define MODEL_POS_Z			 0		//モデルの初期Z座標

class Map
{
private:

	VECTOR Position;

	int MapModel;


public:
	/// <summary>
	/// マップの読み込み
	/// </summary>
	void LoadMap();
	/// <summary>
	/// マップの設定
	/// </summary>
	void SetMap();
	/// <summary>
	/// マップの描画
	/// </summary>
	void DrawMap();
	/// <summary>
	/// マップの後始末
	/// </summary>
	void Finalize();
};