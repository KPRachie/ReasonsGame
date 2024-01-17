#pragma once

#include<iostream>
#include<ctime>
#include<cstdlib>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

#include <vector>

class State {
private:
	std::vector <sf::Texture*> textures;


public:
	State();
	virtual ~State();


	/*in case i forget them in child class*/
	virtual void update() = 0;
	virtual void render() = 0;

};

