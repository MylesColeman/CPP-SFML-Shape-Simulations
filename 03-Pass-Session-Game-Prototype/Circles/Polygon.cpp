#include "Polygon.h"
#include "Framework.h"
#include <cstdlib> 

Polygon::Polygon(int screenWidth, int screenHeight, int speed)
{
    x = rand() % screenWidth / 2 + screenWidth / 4;
    y = rand() % screenHeight / 2 + screenHeight / 4;
    radius = 20;
    this->speed = speed;
    dirX = rand() % speed - 5;
    dirY = rand() % speed - 5;
    points = (rand() % 4) + 5;
}

void Polygon::Draw() const
{
    DrawPolygon(x, y, radius, points);
}

void Polygon::Move(int screenWidth, int screenHeight, int speed) {
    x += dirX;
    y += dirY;

    // Causes polygon to bounce off edge
    if (x - radius < 0 || x + radius > screenWidth)
    {
        dirX = -dirX;
    }
    if (y - radius < 0 || y + radius > screenHeight)
    {
        dirY = -dirY;
    }
}
