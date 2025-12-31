#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Framework.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"

using namespace std;

int gScreenWidth{ 800 };
int gScreenHeight{ 600 };
int gTimeDelayMS{ 10 };
int speed = 10;

int main() {
    srand(time(NULL));

    vector<Shape*> shapes;
    shapes.push_back(new Rectangle(gScreenWidth, gScreenHeight, speed));
    // Creates 10 shapes, randomly choosing between circles, rectangles and polygons
    for (int i = 0; i < 10; ++i)
    {
        shapes.push_back(new Circle(gScreenWidth, gScreenHeight, speed));
    }

    cout << "Hello shapes" << endl;

    while (UpdateFramework()) {
        // Creates and moves the shapes
        for (auto& shape : shapes) {
            shape->Draw();
            shape->Move(gScreenWidth, gScreenHeight, speed);
        }
    }

    cout << "Bye bye" << endl;

    return 0;
}