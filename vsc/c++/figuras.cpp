#include <iostream>
using namespace std;
double area(double base,double altura){
    return ((base*altura)/2);
}
double area(double lado){
    return lado*lado;
}
int area(int lado1, int lado2){
    return lado1*lado2;
}
int main(){
    cout<<"area triangulo de base 5.3 y altura 10.8: "<<area(5.3,10.8)<<endl;
    cout<<"area de un cuadrado de lado 5.5: "<<area(5.5)<<endl;
    cout<<"area rectandulo de lado 1: 8.5 y lado 2: 5.3 "<< area(8,3)<<endl;
}