#include "Camera.h"


Camera::Camera(sf::Vector2f startPos)
{
}


Camera::~Camera(void)
{
}

sf::View& Camera::getView()
{
	return mCamera;
}