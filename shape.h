#pragma once

#include <vector>
#include <string>
#include "point.h"
#include "parameters.h"

const int two_dimensional{2};
const int three_dimensional{3};
const double PI{acos(-1.0)};

class Shape 
{
    std::string type{};
    std::vector<Point> points{};
    Parameters params{};
public: 
    Shape() = default;
private:
    void add_point(char point_name, int x, int y, int z);
public:
    void set_type(std::string _type);
    std::string get_type();

    void add_points(std::vector<int> coords, int dimensional);
    void add_points(std::vector<Point> points);

    Point get_point(char point_name);

    std::vector<Point>& get_points();
    
    void set_square(double sqr);
    double get_square();
    virtual void square();

    void set_volume(double volume);
    double get_volume();
    virtual void volume();

    void set_radius(double radius);
    double get_radius();

    void set_height(double h);
    double get_height();

    int get_x(char point_name);
    int get_y(char point_name);
    int get_z(char point_name);
};