#include <iostream>
using namespace std;

void mostrar(int x){
    cout<<"Este es un entero: "<<x<<endl;
}
void mostrar(char a){
    cout<<"Esta es un caracter: "<<a<<endl;
}
void mostrar(char *c){
    cout<<"Esta es una cadena: "<<c<<endl;
}
int main(){
    int numero;
    char caracter=' ';
    char *cadena="";
    int condicion=0;
    cout<<"===================================="<<endl;
    cout<<"1.- Número"<<endl;
    cout<<"2.- Caracter"<<endl;
    cout<<"3.- Cadena"<<endl;
    cout<<"4.- Salir"<<endl;
    while (condicion!=4){
    	cout<<"Que desea ingresar?"<<endl;
    	cin>>condicion;
       switch (condicion)
       {
        case 1: 
        	cout<<"ingrese un numero"<<endl;
            cin >> numero;
            mostrar(numero);
        break;
        case 2: 
        	cout<<"ingrese un caracter"<<endl;
            cin >> caracter;
            mostrar(caracter);
        break;
        case 3:
        	cout<<"ingrese una cadena"<<endl;
            cin >> *cadena; 
            mostrar(cadena);
        break;
        case 4:
            cout<< "Bye" << endl;
        break;
       default:
           break;
       } 
    }
}

