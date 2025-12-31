#pragma once

bool UpdateFramework();
void DrawCircle(int x,int y, int radius, int circlePoints);
void ChangeColour(unsigned char red, unsigned char green,
	unsigned char blue, unsigned char alpha = 255);
void DrawRectangle(int x, int y, int width, int height);
void DrawPolygon(int x, int y, int radius, int points);

enum class EButton
{
	eLeft,
	eRight,
	eMiddle
};

bool IsButtonPressed(EButton whichButton);
void GetMousePosition(int& x, int& y);

