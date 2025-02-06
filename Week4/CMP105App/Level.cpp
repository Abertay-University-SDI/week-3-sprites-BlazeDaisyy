#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	//initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	pTexture.loadFromFile("gfx/Mushroom.png");
	player.setTexture(&pTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(400, 200);
	player.setInput(in);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	player.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(player);

	endDraw();
}
