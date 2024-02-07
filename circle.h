#pragma once 
#include "shape.h"

class Circle : public Shape
{
public:
    Circle(std::vector<int> coords, double R);
    Circle(std::vector<Point> p, double R);
    Circle(Shape sh);

    void square() override;
};