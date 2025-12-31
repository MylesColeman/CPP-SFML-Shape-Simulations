#include "Circle.h"
#include "Framework.h"
#include <cstdlib> 

Circle::Circle(int screenWidth, int screenHeight, int speed) 
{
    x = rand() % screenWidth / 2 + screenWidth / 4;
    y = rand() % screenHeight / 2 + screenHeight / 4;
    radius = 20;
    this->speed = speed;
    dirX = rand() % speed - 5;
    dirY = rand() % speed - 5;
    circlePoints = 30; // The number of points required for a circle
}

void Circle::Draw() const 
{
    DrawCircle(x, y, radius, circlePoints);
}

void Circle::Move(int screenWidth, int screenHeight, int speed) {
    x += dirX;
    y += dirY;

    // Causes circle to bounce off edge
    if (x - radius < 0 || x + radius > screenWidth) 
    {
        dirX = -dirX;
    }
    if (y - radius < 0 || y + radius > screenHeight) 
    {
        dirY = -dirY;
    }
}