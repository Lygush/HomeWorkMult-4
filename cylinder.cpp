#include "cylinder.h"

Cylinder::Cylinder(std::vector<int> coords, double R, double h) : Circle(coords, R) {
    set_type("Cylinder");
    set_height(h);
    volume();
    square();
}

Cylinder::Cylinder(Shape sh) : Circle(sh.get_points(), sh.get_radius()) {
    set_height(sh.get_height());
    volume();
    square();
}

void Cylinder::square() {
    set_square(get_square() * 2 + 2 * PI * get_height());
}

void Cylinder::volume() {
    set_volume(get_square() * get_height());
}