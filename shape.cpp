#include "shape.h"

void Shape::add_point(char point_name, int x, int y, int z) {
    points.push_back({Point(point_name, x, y, z)});
}

void Shape::set_type(std::string _type) {
    type = _type;
}

std::string Shape::get_type() {
    return type;
}

void Shape::add_points(std::vector<int> coords, int dimensional) {
    char point_n{'A'};
    int counter{};
    std::vector<int> point_coord{0,0,0};
    for (auto i: coords) {
        point_coord.at(counter) = i;
        counter++;
        if (counter == dimensional) {
            points.push_back({Point(point_n, point_coord.at(0), point_coord.at(1), point_coord.at(2))});
            counter = 0;
            point_n++;
        }
    }
}

void Shape::add_points(std::vector<Point> points) {
    for (const auto& i : points) {
        this->points.push_back(i);
    }
}

Point Shape::get_point(char point_name) {
    return points.at(static_cast<int>(point_name) - static_cast<int>('A'));
}

std::vector<Point>& Shape::get_points() {
    return points;
}

void Shape::set_square(double sqr) {
    params.square = sqr;
}

double Shape::get_square() {
    return params.square;
}

void Shape::square() {
    set_square(0);
}

void Shape::set_volume(double volume) {
    params.volume = volume;
}

double Shape::get_volume() {
    return params.volume;
}

void Shape::volume() {
    set_volume(0);
}

void Shape::set_radius(double radius) {
    params.radius = radius;
}

double Shape::get_radius() {
    return params.radius;
} 

void Shape::set_height(double h) {
    params.height = h;
}  

double Shape::get_height() {
    return params.height;
}

int Shape::get_x(char point_name) {
    return get_point(point_name).x;
}

int Shape::get_y(char point_name) {
    return get_point(point_name).y;
}

int Shape::get_z(char point_name) {
    return get_point(point_name).z;
}