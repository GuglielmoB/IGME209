// HW2GravitySnake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Box2D/Box2D.h"
#include "snake.h"
#include <conio.h>
#include <stdlib.h>;
#include <time.h>;

int main()
{
	char input = 0;
	b2Vec2 gravity(0.0f, -0.015f);
	b2World snakeWorld(gravity);
	float targetXPos;
	float targetYPos;
	int points = 0;

	// Snake Declarations
		b2BodyDef snakeDef;
			snakeDef.type = b2_dynamicBody;
			snakeDef.position.Set(3.0f, 3.0f);
		b2Body* snakeBody = snakeWorld.CreateBody(&snakeDef);
		b2PolygonShape snakeHead;
			snakeHead.SetAsBox(1.5f, 1.0f);
		b2FixtureDef snakeFixtureDef;
			snakeFixtureDef.shape = &snakeHead;
			snakeFixtureDef.density = 1.0f;
			snakeFixtureDef.friction = 0.2f;


	// Target Declarations
			b2BodyDef targetDef;
			targetDef.type = b2_staticBody;
			targetDef.position.Set(0.0f, 0.0f);
			b2Body* targetBody = snakeWorld.CreateBody(&targetDef);
			b2PolygonShape targetBox;
			targetBox.SetAsBox(2.5f, 2.5f);
			b2FixtureDef targetFixtureDef;
			targetFixtureDef.shape = &targetBox;
			targetFixtureDef.density = 1.0f;
			targetFixtureDef.friction = 0.5f;


	// Loop for the gravity snake game
	bool gameActive = true;
	char startGame = 'Q';
	std::cout << "Welcome to Gravity Snake!" << std::endl;
	std::cout << "Press the D to move right, A to move left, W to move up, and S to move down." << std::endl;
	

	// Originally intended for the controls to be the arrow keys but I looked into that and found that it was a bad idea.
	std::cout << "Press any key and then enter to start playing.";
	targetXPos = 3.75f;
	targetYPos = 2.5f;
	moveTarget(targetXPos, targetYPos, targetBody);
	std::cin >> startGame;
	while (gameActive)
	{
		display(snakeBody, targetBody);
		if (_kbhit()) {
			input = _getch();
			if (input == 27)
			{
				gameActive = false;
			}
			applyForces(snakeBody, input);
		}

		b2Vec2 snakePos = snakeBody->GetPosition();
		b2Vec2 targetPos = targetBody->GetPosition();

		if ((snakePos.x - targetPos.x <= 0.25 && snakePos.x - targetPos.x >= -0.25) && (snakePos.y - targetPos.y <= 0.25 && snakePos.y - targetPos.y >= -0.75))
		{
			std::cout << "Target hit!" << std::endl;
			srand(time(NULL));
			targetXPos = (rand() % 10) - 5.0f;
			targetYPos = (rand() % 10) - 5.0f;
			moveTarget(targetXPos, targetYPos, targetBody);
			points++;
		}

		if (points == 10) {
			gameActive = false;
			std::cout << "You made it to 10 points, congratulations!";
		}

		update(snakeWorld);
	}
}

