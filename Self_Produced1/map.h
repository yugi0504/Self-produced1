#pragma once

#define MODEL_FILE_NAME "////"		//���f���̃t�@�C����

#define MODEL_POS_X          0		//���f���̏���X���W

#define MODEL_POS_Y			 0		//���f���̏���Y���W

#define MODEL_POS_Z			 0		//���f���̏���Z���W

class Map
{
private:

	VECTOR Position;

	int MapModel;


public:
	/// <summary>
	/// �}�b�v�̓ǂݍ���
	/// </summary>
	void LoadMap();
	/// <summary>
	/// �}�b�v�̐ݒ�
	/// </summary>
	void SetMap();
	/// <summary>
	/// �}�b�v�̕`��
	/// </summary>
	void DrawMap();
	/// <summary>
	/// �}�b�v�̌�n��
	/// </summary>
	void Finalize();
};