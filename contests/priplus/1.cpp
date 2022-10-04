#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
// Конец директив и выбора пространства имён

class Time{
  public:
   int hour;
   int min;
};

  Time add(Time a, int min){
    // Здесь нужно написать код
    Time newtime;
    newtime.hour = (a.hour + (a.min + min) / 60) % 24;
    newtime.min = (a.min + min) % 60;
    return newtime;
}


int main() {
    Time a, newtime;
    int min;
    
    // Получить a  из консоли 


    cin>>a.hour>>a.min;
   // Получить min  из консоли 
    // cout << a.hour << ":" << a.min << endl;
    cin>>min;
    newtime = add(a, min);
    cout << newtime.hour << ":" << newtime.min << endl;
}