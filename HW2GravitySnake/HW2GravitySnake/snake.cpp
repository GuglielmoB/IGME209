#include "stdafx.h"
#include <conio.h>
#include "Box2D\Box2D.h"
#include <iostream>

// These taken directly from the Box2D HelloWorld document
float32 timeStep = 1.0f / 60.0f;
int32 velocityIterations = 6;
int32 positionIterations = 2;

void update(b2World &snekWorld) 
{
	snekWorld.Step(timeStep, velocityIterations, positionIterations);
}

void display(b2Body* snake, b2Body* target) 
{
	b2Vec2 snakePos = snake->GetPosition();
	b2Vec2 targetPos = target->GetPosition();
	std::cout << "Snake X is: " << snakePos.x << " Snake Y is: " << snakePos.y << std::endl;
	std::cout << " Target X is: " << targetPos.x << " Target Y is: " << targetPos.y << std::endl;
}


void applyForces(b2Body* snake, char input) 
{
	float xmovement = 0;
	float ymovement = 0;

	if (input == 119) {
		ymovement = 0.5f;
	}
	else if (input == 97) {
		xmovement = -0.25f;
	}
	else if (input == 115) {
		ymovement = -0.15f;
	}
	else if (input == 100) {
		xmovement = 0.25f;
	}

	snake->ApplyForceToCenter(b2Vec2(xmovement, ymovement), true);
	input = 102;
}


void moveTarget(float& xPos, float& yPos, b2Body* target) 
{
	target->SetTransform(b2Vec2(xPos, yPos), target->GetAngle()); // Found this on a Stack Overflow question
}
