#include "square.h"

Sqr::Sqr(std::vector<int> coords) : Line(coords, two_dimensional) {
    set_type("Square");
    this->square();
}

Sqr::Sqr(std::vector<int> coords, int dimensional) : Line(coords, dimensional) {
    this->square();
}

Sqr::Sqr(std::vector<Point> p) : Line(p) {
    this->square();
}

Sqr::Sqr(Shape sh) : Line(sh.get_points()) {
    set_type("Square");
    this->square();
}

void Sqr::square() {
    int AB{abs(get_y('A') - get_y('B'))};
    set_square( AB * AB);
}