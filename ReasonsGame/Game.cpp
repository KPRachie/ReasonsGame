#include "Game.hpp"

void Game::initWindow() {

	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Reason");
    this->window->setFramerateLimit(120);
    this->window->setVerticalSyncEnabled(false);
}

Game::Game() {
    this->initWindow();
}

Game::~Game() {
	delete this->window;
}

//Functions

void Game::updateDT() {

    /*how long one frame renders*/

    this->dt = this->dtClock.restart().asSeconds();
}

void Game::updateEvents() {
        while (this->window->pollEvent(this->event)) {
            if (this->event.type == sf::Event::Closed)
                this->window->close();
        }
}

void Game::update() {
    this->updateEvents();
}

void Game::render() {
    this->window->clear();

    //render items

    this->window->display();
}

void Game::run() {
    while (this->window->isOpen()) {
        this->updateDT();
        this->update();
        this->render();
        }
}
