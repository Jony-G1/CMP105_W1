#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	
	rect.setSize(sf::Vector2f(100, 100));
	rect.setPosition(150, 150);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(60, 60));
	rect2.setPosition(170, 170);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(20, 20));
	rect3.setPosition(190, 190);
	rect3.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(550, 300);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Hello world");
	text.setPosition(550, 0);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	
	rect4.setSize(sf::Vector2f(100, 100));
	rect4.setPosition(1100, 600);
	rect4.setFillColor(sf::Color::Green);


}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect4.setPosition((pos.x-100), (pos.y-100));
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	
	window->draw(text);


	

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}