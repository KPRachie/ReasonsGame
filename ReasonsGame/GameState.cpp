#include "GameState.hpp"

GameState::GameState(sf::RenderWindow* window) : State(window) {
}

GameState::~GameState() {
}

void GameState::endState() {
}

void GameState::update(const float& dt) {
	std::cout << "Hello from the game state!" << '\n';

}

void GameState::render(sf::RenderTarget* target) {
}
