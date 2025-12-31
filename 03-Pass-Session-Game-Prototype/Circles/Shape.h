#pragma once

class Shape 
{
public:
    virtual ~Shape() {}

    virtual void Draw() const = 0;
    virtual void Move(int screenWidth, int screenHeight, int speed) = 0;
};