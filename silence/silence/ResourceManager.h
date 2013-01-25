#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <SFML\Graphics.hpp>
#include <string>
#include <map>

class ResourceManager
{
public:

	ResourceManager* getInstance();

	sf::Texture& loadTexture();
	sf::Texture& getTexture(std::string key);
private:
	ResourceManager();
	

	std::map<std::string, sf::Image> mImages;
	std::map<std::string, sf::Texture> mTextures;


};

#endif