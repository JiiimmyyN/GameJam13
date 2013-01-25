#include "Camera.h"
class GameObject;

Camera::Camera(GameObject* obj, sf::Vector2f startPos, float delay)
{
}


Camera::~Camera(void)
{
}

sf::View& Camera::getView()
{
	return mCamera;
}

void Camera::update()
{

}