#include "Game.hpp"

void Game::initWindow() {

	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Reason");
    this->window->setFramerateLimit(120);
    this->window->setVerticalSyncEnabled(false);
}

void Game::initStates() {
    this->states.push(new GameState(this->window));
}

Game::Game() {
    this->initWindow();
    this->initStates();
}

Game::~Game() {
	delete this->window;

    while (!this->states.empty()) {
        delete this->states.top();
        this->states.pop();
    }
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

    if (!this->states.empty())
        this->states.top()->update(this->dt);
}

void Game::render() {
    this->window->clear();

    //render items
    if (!this->states.empty())
        this->states.top()->render(this->window);

    this->window->display();
}

void Game::run() {
    while (this->window->isOpen()) {
        this->updateDT();
        this->update();
        this->render();
        }
}
