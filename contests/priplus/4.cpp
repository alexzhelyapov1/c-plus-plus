#include <iostream>
using namespace std;

class Coord{
  public:
   int x;
   int y;
};

// Класс треугольник
class Triangle{
public:
  Coord p1,p2,p3;
};

Coord getPoint() {
    Coord a;
    cin >> a.x >> a.y;
    return a;
}

void getTri(Triangle& tri) {
    tri.p1 = getPoint();
    tri.p2 = getPoint();
    tri.p3 = getPoint();
}

int square_distance(Coord a, Coord b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

void swap_if_less(int& a, int& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int cmp(Triangle a, Triangle b) {
    int a_side_1 = square_distance(a.p1, a.p2);
    int a_side_2 = square_distance(a.p2, a.p3);
    int a_side_3 = square_distance(a.p1, a.p3);
    int b_side_1 = square_distance(b.p2, b.p3);
    int b_side_2 = square_distance(b.p1, b.p2);
    int b_side_3 = square_distance(b.p1, b.p3);

    swap_if_less(a_side_1, a_side_2);    
    swap_if_less(a_side_2, a_side_3);    
    swap_if_less(a_side_1, a_side_2);    
    swap_if_less(b_side_1, b_side_2);    
    swap_if_less(b_side_2, b_side_3);    
    swap_if_less(b_side_1, b_side_2);  

    if (a_side_1 == b_side_1 && a_side_2 == b_side_2 && a_side_3 == b_side_3)
        return 1;
    return 0;  
}


int main() {
    Triangle a, b;
    getTri(a);
    getTri(b);
    cout << cmp(a, b);
}