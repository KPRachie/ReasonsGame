#pragma once

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stack>
#include<map>
#include <vector>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>


class State {
private:
	sf::RenderWindow* window;
	std::vector <sf::Texture*> textures;


public:
	State(sf::RenderWindow* window);
	virtual ~State();


	/*in case i forget them in child's class*/
	virtual void endState() = 0;

	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;

};

