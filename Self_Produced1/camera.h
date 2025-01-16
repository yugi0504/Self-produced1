#pragma once

#define CAMERA_NEAR    20.0f		//�J�����̎�O�N���b�v����

#define CAMERA_FAR    100.0f		//�J�����̉��N���b�v����

#define CAMERA_POS_X       0		//�J�����̏���X���W
#define CAMERA_POS_Y      10		//�J�����̏���Y���W
#define CAMERA_POS_Z     -10		//�J�����̏���Z���W


class Camera {

private:

	VECTOR Position;	//�J�����̈ʒu
	
	VECTOR Target;		//�J�����̒����_



public:
	/// <summary>
	/// �J�������̏���������
	/// </summary>
	void Initialize();
	/// <summary>
	/// �J�����̐ݒ菈��
	/// </summary>
	void SetCamera();
	/// <summary>
	/// �J�����̍X�V����
	/// </summary>
	void Update();
	/// <summary>
	/// �J�����̌㏈��
	/// </summary>
	void Finalize();

};
