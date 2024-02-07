#pragma once
#include "square.h"

class Cube : public Sqr
{
public:
    Cube(std::vector<int> coords);
    Cube(std::vector<Point> p);

    Cube(Shape sh);

    void volume() override;
};