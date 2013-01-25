#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\System\Vector2.hpp>

class Entity
{
public:
	Entity(void);
	virtual ~Entity(void);
	virtual float getXpos()const;
	virtual float getYpos()const;
	virtual void update();
private:
	sf::Vector2f mPos;
};

#endif