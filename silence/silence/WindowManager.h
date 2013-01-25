#ifndef WINDOWMANAGER
#define WINDOWMANAGER
#include <SFML\Graphics\RenderWindow.hpp>

class WindowManager{
public:
	static WindowManager& getInst();
	sf::RenderWindow* getWindow();
private:
	~WindowManager();
	sf::RenderWindow* mWindow;
	WindowManager();
	WindowManager& operator=(const WindowManager);
	WindowManager(const WindowManager&);
};


#endif