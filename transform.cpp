#include "transform.h"

Transform::Transform(const Shape& _sh) {
    sh = _sh;
};

Shape Transform::shift(int m, int n, int k) {
    for (auto &i: sh.get_points()) {
        i.x += m;
        i.y += n;
        i.z += k;
    }
    return sh;
}

Shape Transform::scale_X(int a) {
    for (auto &i: sh.get_points()) {
        i.x *= a;
    }
    return sh;
}

Shape Transform::scale_Y(int d) {
    for (auto &i: sh.get_points()) {
        i.y *= d;
    }
    return sh;
}

Shape Transform::scale_Z(int e) {
    for (auto &i: sh.get_points()) {
        i.z *= e;
    }
    return sh;
}

Shape Transform::scale(int s) {
    for (auto &i: sh.get_points()) {
        i.x /= s;
        i.y /= s;
        i.z /= s;
    }
    return sh;
}