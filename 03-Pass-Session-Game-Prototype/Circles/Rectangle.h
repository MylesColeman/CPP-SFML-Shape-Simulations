#pragma once
#include "Shape.h"
#include "SFML/Graphics.hpp"

class Rectangle : public Shape
{
private:
	int x, y, width, height, speed;
	int dirX, dirY;
public:
	Rectangle(int screenWidth, int screenHeight, int speed);

	void Draw() const override;
	void Move(int screenWidth, int screenHeight, int speed) override;
};