#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

#include "Button.h"
class GUI
{
public:
	GUI(sf::Vector2f pPosition);
	virtual ~GUI();

	void Render(sf::RenderWindow& pWindow);
	void AddButton(sf::Vector2f pSize, std::string pText, int pID, int pTextSize = 10, sf::Vector2f pTextOffset = sf::Vector2f(0.0f, 0.0f));

private:
	void UpdatePanel();

	Button* m_Button;
	float m_panelSpace; // Space between the buttons

	sf::RectangleShape m_menuPanel;
	std::vector<Button*> m_vecButtons;


};

