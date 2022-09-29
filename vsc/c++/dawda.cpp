#include<iostream>
using namespace std;

//Prototipo de Funci�n
int sumar(int n);

int main(){
	int numero;
	
	//Pedimos un numero hasta que sea entero positivo numero > 0
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
	}while(numero<=0);
	
	//Mandamos llamar a la funcion recursiva sumar
	cout<<"La suma es: "<<sumar(numero)<<endl;
	
	cin.get();
	return 0;
}

//Definici�n de Funci�n
int sumar(int n){
	int suma=0;
	
	if(n==1){//Caso base
		suma = 1;
	}
	else{//Caso general
		suma = n + sumar(n-1);
	}
	
	return suma;
}