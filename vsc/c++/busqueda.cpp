#include <iostream>
using namespace std;
int busquedaBin(int a[], int n, int clave)
{
	int central, bajo, alto;
	int valorCentral;
	bajo = 0;
	alto = n - 1;
	while (bajo <= alto)
	{
	central = (bajo + alto)/2; // índice de elemento central
	valorCentral = a[central]; // valor del índice central
	if (clave == valorCentral)
		return central; // encontrado, devuelve posición
	else if (clave < valorCentral)
		alto = central - 1; // ir a sublista inferior
	else
		bajo = central + 1; // ir a sublista superior
}
return -1; //elemento no encontrado
}
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
    for (int i = 0; i <= ultimo; i++)
    {
        cout<<a[i]<<"-";
    }
}
int main()
{
    int n=10;
    int clave;
    int a[n]={5,8,20,4,3,2,1,0,30,10,100};
    cout<<endl;
    cout<<"Que numero desea buscar?"<<endl;
    cin>>clave;
    quicksort(a,0,10);
    if(busquedaBin(a,n,clave)!=-1){
        cout<<"se encontró el elemento"<<endl;
    }else{
        cout<<"no se encontró el elemento"<<endl;
    }
    return 0;
}
