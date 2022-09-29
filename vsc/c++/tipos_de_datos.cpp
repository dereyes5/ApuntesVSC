#include <iostream>
#include <cmath>  

using namespace std;

double trianguloarea(double a)
{
    cout << "Calculando área de triángulo equilátero: " << endl;
    return ( (sqrt(3)/4) * (a * a) );
}
double trianguloarea(double a, double b)
{
    cout << "Calculando área de triángulo isóceles: " << endl;
    return (b * (sqrt ((a * a) - ( (b * b) / 4 ) ) ) ) / 2;
}
double trianguloarea(double a, double b, double c)
{
    double p;
    
    p = ( (a + b + c) / 2 ); 
    cout << "Calculando área de triángulo escaleno: " << endl;
    return sqrt( (p* (p - a) * (p - b) * (p - c)) );
}

int main()
{
    double a;
    double b; 
    double c;
    int condicion=0;
    cout<<"Que tipo de triangulo desea calcular?"<<endl;
    cout<<"===================================="<<endl;
    cout<<"1.- equilatero"<<endl;
    cout<<"2.- isoceles"<<endl;
    cout<<"3.- escaleno"<<endl;
    cout<<"4.- Salir"<<endl;
    while(condicion!=4){
    	cin>>condicion;
    	switch(condicion){
    		case 1: 
        		cout<<"Ingrese 1 parámetro"<<endl;
        		cin>>a;
        		cout<<"el area del triangulo es"<<trianguloarea(a)<<endl;	
        	break;
        	case 2: 
        		cout<<"Ingrese 2 parámetros"<<endl;
        		cin>>a;
        		cin>>b;
        		trianguloarea(a,b);
        		cout<<"el area del triangulo es"<<trianguloarea(a,b)<<endl;
        	break;
        	case 3: 
        		cout<<"Ingrese 3 parámetros"<<endl;
        		cin>>a;
        		cin>>b;
        		cin>>c;
        		trianguloarea(a,b,c);
        		cout<<"el area del triangulo es"<<trianguloarea(a,b,c)<<endl;
        	break;
        	case 4:
        		cout<<"bye"<<endl;
        	break;
        	default:
        	break;
		}
	}
}