#include <iostream>
using namespace std;

struct fecha {
   int dia;
   int mes;
   int anno;
};

fecha operator +(fecha, int);
bool bisiesto(int);

int main() {
    fecha f1 = { 12, 11, 2009 };
    fecha f2;

    f2 = f1 + 12000;

    cout << "fecha 1: " << f1.dia << "/" << f1.mes << "/" << f1.anno << endl;
    cout << "fecha 2: " << f2.dia << "/" << f2.mes << "/" << f2.anno << endl;
    return 0;
}

fecha operator +(fecha f1, int d) {
    int dm[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    fecha temp = f1;

    temp.dia += d;
    if(bisiesto(temp.anno)) dm[1] = 29; else dm[1] = 28;
    while(temp.dia > dm[temp.mes-1]) {
        temp.dia -= dm[temp.mes-1];
        temp.mes++;
        if(temp.mes > 12) {
            temp.mes = 1;
            temp.anno++;
            if(bisiesto(temp.anno)) dm[1] = 29; else dm[1] = 28;
        }
    }

    return temp;
}

bool bisiesto(int a) {
    return !(a%4) && ((a%100) || !(a%400));
}