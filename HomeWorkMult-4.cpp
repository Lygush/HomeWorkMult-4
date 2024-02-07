#include <string>
#include "cube.h"
#include "cylinder.h"
#include <iostream>
#include <exception>
#include "transform.h"

void print_shape_info(Shape& sh) {
    std::cout << sh.get_type() << "\n";
    for (const auto &i: sh.get_points()) {
        std::cout << i.point_name << ": x = " << i.x << " y = " << i.y <<
                     " z = " << i.z << "\n";
    }
}

int main() {
    try {
        std::vector<int> line_coords{ 1,1,0,1,5,0,5,5,0,5,1,0,1,1,5,1,5,5,5,5,5,5,1,5 };
        Cube cube(line_coords);
        print_shape_info(cube);
        std::cout << "Square: " << cube.get_square() << "\nVolume: " << cube.get_volume() << "\n\n";

        Transform tr(cube);
        Shape tr_cube = tr.scale_Y(5);
        print_shape_info(tr_cube);
        std::cout << "\n";

        std::vector<int> cyl_coords{1,1};
        Cylinder cyl(cyl_coords, 6,9);
        print_shape_info(cyl);
        std::cout << "Square: " << cyl.get_square() << "\nVolume: " << cyl.get_volume() << "\n" << 
                     "Radius: " << cyl.get_radius() << "\nHeight: " << cyl.get_height() << "\n";
    }
    catch (std::exception er) {
        std::cout << er.what();
    }
}