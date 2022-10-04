#include <iostream>
#include "triangles.h"

int main() {
    point_t* a = new point_t(1, 2);
    point_t b = {1, 3};
    cout << a->equal(b) << endl;
    a->print();
    delete a;
}