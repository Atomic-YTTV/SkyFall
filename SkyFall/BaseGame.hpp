#pragma once
#include <SFML/Graphics.hpp>
#include "GameObjectManager.hpp"
#include "MainMenu.hpp"

/// <summary>
/// The base game manager
/// </summary>
class BaseGame
{
private:
	uint8_t gameState;
	sf::RenderWindow mainWindow;
	MainMenu mainMenu;
	GameObjectManager gameObjectManager;
public:
	BaseGame();
private:
	////////////////////////
	/// \brief Draws objects based on what the current gameState is
	////////////////////////
	void drawGameStateCode();
	////////////////////////
	/// \brief Draws objects based on what the current gameState is
	////////////////////////
	void updateGameStateCode();
public:
	void beginGameLoop();
};
