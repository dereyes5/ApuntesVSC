#include <iostream>
using namespace std;

void intercambiarDatos(int& x, int& y){
	int aux=x;
	x=y;
	y=aux;
}

void quicksort(int a[], int primero, int ultimo)
{
	int i, j, central;
	double pivote;
	central = (primero + ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	do {
		while (a[i] < pivote) i++;
		while (a[j] > pivote) j--;
		if (i <= j){
			intercambiarDatos(a[i], a[j]);
			i++;
			j--;
		}
	}while (i <= j);
	if (primero < j)
		quicksort(a, primero, j); // mismo proceso con sublista izqda
	if (i < ultimo)
		quicksort(a, i, ultimo); // mismo proceso con sublista drcha
}

int main (){
	int n=6;
	int a[n]={1,0,2,3,5,4};
	quicksort(a,0, 5);
	for(int i=0; i<=5; i++){
		cout<<a[i]<<" , ";
	}
	return 0;
}