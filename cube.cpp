#include "cube.h"

Cube::Cube(std::vector<int> coords) : Sqr(coords, three_dimensional) {
    set_type("Cube");
    set_square(get_square() * 6);
    this->volume();
}

Cube::Cube(std::vector<Point> p) : Sqr(p) {
    set_square(get_square() * 6);
    this->volume();
}

Cube::Cube(Shape sh) : Sqr(sh.get_points()){
    set_type("Cube");
    set_square(get_square() * 6);
    this->volume();
}

void Cube::volume() {
    double a{sqrt(get_square() / 6)};
    set_volume(a * a * a); 
}