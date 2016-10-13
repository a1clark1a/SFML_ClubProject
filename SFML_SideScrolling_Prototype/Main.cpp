/***********************************************
****************MAIN ENGINE FILE****************
************************************************/

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameObjects.h"
#include <vector>


//TODO
//Check gameobjects header file for more TODO list
//Create an Game Engine class to handle drawing gameobjects, UI, playing sound, collision and level
//maybe use Game Engine class to handle player and enemy health , damage input?? or maybe just in each of their respective classes??? 

int main()
{
	sf::RenderWindow window(sf::VideoMode(720, 360), "Welcome to SDVA 103!");
	
	Player* player = new Player("Asset_Dump/2d_Metroid/2d_Samus/slice15_15.png", (sf::Vector2f(200, 180)));
	
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		player->Draw(&window);
		window.display();
	}

	return 0;
}
