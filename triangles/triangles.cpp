#include "triangles.h"

#define dbl_tolerance 0.001

// --------------------------------------------------------------------------------------------------------------------
// Methods for struct point_t:
void point_t::print() const {
        cout << x << " " << y << endl;
}

bool point_t::valid() const {
    if (std::isnan(x) || std::isnan(y))
        return false;
    return true;
}

bool point_t::equal(const point_t &rhs) const {
    if (abs(x - rhs.x) < dbl_tolerance && abs(y - rhs.y) < dbl_tolerance)
        return true;
    return false;
}

// --------------------------------------------------------------------------------------------------------------------
