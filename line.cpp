#include "line.h"

Line::Line(std::vector<int> coords) {
    set_type("Line");
    add_points(coords, two_dimensional);
}

Line::Line(std::vector<int> coords, int dimensional) {
    add_points(coords, dimensional);
}

Line::Line(std::vector<Point> p) {
    add_points(p);
}

Line::Line(Shape sh) {
    set_type("Line");
    add_points(sh.get_points());
}