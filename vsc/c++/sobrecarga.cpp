#include <iostream>
using namespace std;
int area(int a,int b){
	cout << "int" << endl;
	return a*b;
}
float area(float a, float b){
	cout << "float" << endl;
	return a*b;
}
double area(double a, double b){
	cout << "double" << endl;
	return a*b;
}
int main(){
    cout << "Hello world"<< endl;
	cout << "=========================================================" << endl;
	cout << "area cuadrado" << " " << area(5,5) << endl;
	cout << "area cuadrado" << " " << area(5.0f,5.0f) << endl;
	cout << "area cuadrado" << " " << area(5.0,5.0) << endl;
	cout << "=========================================================" << endl;
	cout << "area rectangulo" << " " << area(5,7) << endl;
	cout << "area rectangulo" << " " << area(5.0f,7.0f) << endl;
	cout << "area rectangulo" << " " << area(5.0,7.0) << endl;
	cout << "=========================================================" << endl;
	cout << "area triangulo" << " " << area(5,7)/2 << endl;
	cout << "area triangulo" << " " << area(5.0f,7.0f)/2 << endl;
	cout << "area triangulo" << " " << area(5.0,7.0)/2 << endl;
}