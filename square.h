#pragma once
#include "line.h"

class Sqr : public Line
{
public:
    Sqr(std::vector<int> coords);
    Sqr(std::vector<int> coords, int dimensional);
    Sqr(std::vector<Point> p);
    Sqr(Shape sh);

    void square() override;
};