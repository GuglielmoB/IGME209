// PE5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#define SFML_STATIC
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

int main()
{
		sf::RenderWindow window;
		window.create(sf::VideoMode(640, 480), "Drawing Window");
		while (window.isOpen())
		{
			// check all the window's events that were triggered since the last iteration of the loop
			sf::Event event;
			while (window.pollEvent(event))
			{
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed)
					window.close();
			}
			window.clear(sf::Color::Black);

			sf::RectangleShape rect1(sf::Vector2f(100, 60));
			rect1.setFillColor(sf::Color(10, 200, 110));
			sf::CircleShape circ1(50);
			circ1.setFillColor(sf::Color(250, 250, 250));
			sf::RectangleShape rect2(sf::Vector2f(50, 50));
			rect2.setFillColor(sf::Color(100, 50, 150));
			sf::CircleShape circ2(20);
			circ2.setFillColor(sf::Color(20, 63, 89));
			rect1.setPosition(100, 200);
			rect2.setPosition(250, 400);
			circ1.setPosition(0, 0);
			circ2.setPosition(500, 90);
			window.draw(rect1);
			window.draw(rect2);
			window.draw(circ1);
			window.draw(circ2);
			// end the current frame
			window.display();
		}
		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
