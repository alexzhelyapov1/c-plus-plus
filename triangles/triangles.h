#ifndef TRIANGLES_H
#define TRIANGLES_H

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

struct point_t {
    double x = NAN, y = NAN;

    void print() const;
    bool valid() const;
    bool equal(const point_t &rhs) const;
};

struct triangle_3d {
    point_t a = {}, b = {}, c = {}, d = {};

    void print() const;
    bool valid() const;
    bool equal(const point_t &rhs) const;
};


#endif