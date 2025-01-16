#include"map.h"
#include"DxLib.h"

void Map::LoadMap()
{
	MapModel = MV1LoadModel(MODEL_FILE_NAME);
}

void Map::SetMap()
{
	Position = VGet(0, 0, 0);

	MV1SetPosition(MapModel, Position);
}

void Map::DrawMap()
{
	MV1DrawModel(MapModel);
}

void Map::Finalize()
{
	MV1DeleteModel(MapModel);
}