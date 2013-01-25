#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <SFML\Graphics.hpp>
#include <string>
#include <map>

class ResourceManager
{
public:
	ResourceManager();
	
	sf::Texture& loadTexture();
	sf::Texture& getTexture(std::string key);
private:
	std::map<std::string, sf::Image> mImages;
	std::map<std::string, sf::Textu
};

#endif