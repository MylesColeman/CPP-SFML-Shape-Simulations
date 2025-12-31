#pragma once
#include "Shape.h"

class Circle : public Shape 
{
private:
    int x, y, radius, speed, circlePoints;
    int dirX, dirY;
public:
    Circle(int screenWidth, int screenHeight, int speed);

    void Draw() const override;
    void Move(int screenWidth, int screenHeight, int speed) override;
};