#ifndef CAMERA_H
#define CAMERA_H

#include <SFML\Graphics\View.hpp>
class GameObject;

class Camera
{
public:
	Camera(GameObject* obj, sf::Vector2f startPos, float delay);
	~Camera(void);
	sf::View& getView();
	void update();
private:
	sf::View mCamera;
	GameObject* mObj;	//Follow this! 
	float mDelay;
};

#endif