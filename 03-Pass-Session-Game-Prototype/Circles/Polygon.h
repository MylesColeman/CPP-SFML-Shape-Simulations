#pragma once
#include "Shape.h"
class Polygon : public Shape
{
private:
    int x, y, radius, speed;
    int dirX, dirY;
    int points = 5; // Initialises points
public:
    Polygon(int screenWidth, int screenHeight, int speed);

    void Draw() const override;
    void Move(int screenWidth, int screenHeight, int speed) override;
};

