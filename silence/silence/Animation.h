#ifndef INCLUDED_ANIMATION
#define INCLUDED_ANIMATION

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>

class Animation{
private:
	Animation(sf::Texture* texture, int frameTime, int frames);
	~Animation();
	void update();
	void setPosition(sf::Vector2f& pos);
	sf::Sprite& getSprite();
public:
	sf::Sprite* mSprite;
	sf::Clock mTimer;
	int mFrameTime, mFrames, mCurrentFrame, mCurrentAnimation;

};

#endif