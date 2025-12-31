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
    x += dirX;
    y += dirY;

    // Causes rectangle to bounce off edge
    if (x < 0 || x + width > screenWidth) 
    {
        dirX = -dirX;
    }
    if (y < 0 || y + height > screenHeight) 
    {
        dirY = -dirY;
    }
}