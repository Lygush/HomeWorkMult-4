#include "circle.h"

Circle::Circle(std::vector<int> coords, double R) {
    set_type("Circle");
    add_points(coords, two_dimensional);
    set_radius(R);
    square();
}

Circle::Circle(std::vector<Point> p, double R) {
    add_points(p);
    set_radius(R);
    square();
}

Circle::Circle(Shape sh) {
    add_points(sh.get_points());
    set_radius(sh.get_radius());
    square();
}


void Circle::square() {
    double r{ get_radius() };
    set_square(PI * (r * r));
}