#include "Rectangle.h"
#include "framework.h"
#include <cstdlib> 

Rectangle::Rectangle(int screenWidth, int screenHeight, int speed)
{
    x = rand() % screenWidth / 2 + screenWidth / 4;
    y = rand() % screenHeight / 2 + screenHeight / 4;
    width = 30;
    height = 30;
    this->speed = speed;
    dirX = rand() % speed - 5;
    dirY = rand() % speed - 5;
}

void Rectangle::Draw() const
{
    DrawRectangle(x, y, width, height);
}

void Rectangle::Move(int screenWidth, int screenHeight, int speed)
{

    // Allows WASD keyboard control
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) 
    {
        y -= speed;
	}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) 
    {
        y += speed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) 
    {
        x -= speed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) 
    {
        x += speed;
	}

	// Stops rectangle from going off screen
    if (x < 0)
    {
        x = 0;
    }
    if (x + width > screenWidth)
    {
        x = screenWidth - width;
	}
    if (y < 0)
    {
        y = 0;
	}
    if (y + height > screenHeight)
    {
        y = screenHeight - height;
    }
}