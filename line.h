#pragma once 
#include "shape.h"

class Line : public Shape 
{
public:
    Line(std::vector<int> coords);
    Line(std::vector<int> coords, int dimensional);
    Line(std::vector<Point> p);
    Line(Shape sh);
};