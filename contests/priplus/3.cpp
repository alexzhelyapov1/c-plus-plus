#include <iostream>
using namespace std;

class Lin{
  public:
   int cm; // сантиметры
   int mm; // миллиметры
};

void printLin(Lin a) {
    cout << a.cm << " " << a.mm;
}

Lin convertToLin(int kletki) {
    Lin a;
    a.cm = (kletki / 2) % 300;
    a.mm = (kletki * 5) % 10;
    return a;
}

int main() {
    int kletki;
    cin >> kletki;
    Lin a = convertToLin(kletki);
    printLin(a);
}