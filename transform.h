#pragma once 

#include "shape.h"

class Transform
{
    Shape sh{};
public:
    Transform(const Shape& _sh);

    Shape shift(int m, int n, int k);
    Shape scale_X(int a);
    Shape scale_Y(int d);
    Shape scale_Z(int e);
    Shape scale(int s);
};