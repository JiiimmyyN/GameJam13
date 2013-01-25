#ifndef CAMERA_H
#define CAMERA_H

#include <SFML\Graphics\View.hpp>

class Camera
{
public:
	Camera(sf::Vector2f startPos);
	~Camera(void);
	sf::View& getView()const;
private:
	sf::View mCamera;
};

#endif