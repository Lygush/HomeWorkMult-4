#pragma once

struct Point
{
    char point_name{};
    int x{}, y{}, z{};

    Point(char _point_name, int _x, int _y, int _z) : point_name(_point_name), x(_x), y(_y), z(_z){};
};