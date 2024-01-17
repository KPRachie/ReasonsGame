#pragma once

#include "GameState.hpp"


class Game {
private:
	sf::RenderWindow *window;
	sf::Event event;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	void initWindow();
	void initStates();

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


