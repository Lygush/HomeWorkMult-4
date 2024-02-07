#pragma once
#include "circle.h"

class Cylinder : public Circle
{
public:
    Cylinder(std::vector<int> coords, double R, double h);
    Cylinder(Shape sh);

    void square() override;
    void volume() override;
};