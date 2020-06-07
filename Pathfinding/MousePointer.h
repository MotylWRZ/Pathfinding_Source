#pragma once
#include<SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Node.h"

class MousePointer
{
public:
	MousePointer();
	virtual ~MousePointer();

	void Initialise(sf::RenderWindow& pWindow);
	void Update();
	
	//Accesors/Mutators

	void SetCurrentWindow(sf::RenderWindow& pWindow);


	//Pointer to curent window
	sf::RenderWindow* m_currentWindowPtr;

	inline sf::Vector2f getPosition() { return m_position; };
	inline sf::FloatRect getBoundingBox() { return m_rectShape.getGlobalBounds(); };


	sf::RectangleShape m_rectShape;
private:
	sf::Vector2f m_position;
	sf::Vector2f m_boundingBox;

	

};
