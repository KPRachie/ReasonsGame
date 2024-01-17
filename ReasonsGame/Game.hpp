#pragma once

#include "State.hpp"


class Game {
private:
	sf::RenderWindow *window;
	sf::Event event;

	sf::Clock dtClock;
	float dt;

	void initWindow();

public:
	Game();
	virtual ~Game();

	//Functions
	void updateDT();
	void updateEvents();
	void update();
	void render();
	void run();


};


