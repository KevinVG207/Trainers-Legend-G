#pragma once
#include "stdinclude.hpp"

namespace UmaCamera {
	extern Vector3_t cameraLookAt;

	Vector3_t getCameraPos();
	Vector3_t getHomeCameraPos();
	Vector3_t getCameraLookat();
	void SetCameraPos(float x, float y, float z);
	void SetCameraLookat(float x, float y, float z);
	void updateFollowCameraPosByLookatAndOffset();
	void loadGlobalData();
	void setMoveStep(float value);
	void setUmaCameraType(int value);
	void updateFollowUmaPos(Vector3_t lastFrame, Vector3_t thisFrame, Quaternion_t currQuat, Vector3_t* setPos);
	void setHomeCameraAngle(float value);
	void mouseMove(LONG x, LONG y, int mouseEventType);
	Quaternion_t slerpTwo(Quaternion_t& rot, Quaternion_t& rot2, float t);
	Quaternion_t updateLookatByRotation(Quaternion_t rot);
	Quaternion_t updatePosAndLookatByRotation(Vector3_t pos, Quaternion_t rot);
	Quaternion_t updatePosAndLookatByRotationStable(Vector3_t pos, Quaternion_t rot, Quaternion_t nowRot);

	void setliveCameraType(int type);
	int GetLiveCharaPositionFlag();
	int GetLiveCameraCharaParts();
	int GetLiveCharaPositionIndex();
	int GetLiveCameraType();
	int get_cutIn_target_index();

	void setRaceCamFOV(float value);
	float getRaceCamFov();
	float getLiveCamFov();
	void setLiveStart(bool value);

	void reset_camera();
	void camera_forward();
	void camera_back();
	void camera_left();
	void camera_right();
	void camera_down();
	void camera_up();
	void initCameraSettings();
}
