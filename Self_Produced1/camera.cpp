#include"camera.h"
#include"DxLib.h"

void Camera::Initialize()
{
	Position = VGet(CAMERA_POS_X, CAMERA_POS_Y, CAMERA_POS_Z);

}

void Camera::SetCamera()
{
	SetCameraNearFar(CAMERA_NEAR, CAMERA_FAR);

	SetCameraPositionAndTarget_UpVecY(Position, Target);
}