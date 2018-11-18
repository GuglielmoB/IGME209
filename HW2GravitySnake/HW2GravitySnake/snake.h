#pragma once
void update(b2World &snekWorld);
void display(b2Body* snake, b2Body* target);
void applyForces(b2Body* snake, char input);
void moveTarget(float& xPos, float& yPos, b2Body* target);
