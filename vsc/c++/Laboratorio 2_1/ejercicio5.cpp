//librerias
#include <iostream>
#include <stdlib.h>
using namespace std;
//menu
void mostrarMenu(){
    cout<<"--[ Menú de opciones de ordenamientos ]--"<<endl;
    cout<<"[1]  Ordenamiento burbuja"<<endl;
    cout<<"[2]  Ordenamiento shell"<<endl;
    cout<<"[3]  Ordenamiento quicksort"<<endl;
    cout<<"[4]  Salir"<<endl;
    cout<<"Seleccione una opción: ";
}
//imprimir el arreglo
void imprimirArreglo(int a[],int n){
    for(int i =0;i<=n;i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
//intercambiar datos
void intercambiarDatos (int& x, int& y){
	int aux=x;
	x=y;
	y=aux;
}
//Ordenamiento burbuja
void ordBurbuja(int a[], int n){
    bool interruptor = true;
    int pasada, j;
    for(pasada=0; pasada<=n-1 && interruptor; pasada++){
        interruptor=false;
        for(j=0;j<=n-pasada-1;j++)
        if(a[j]>a[j+1]){
            interruptor=true;
            intercambiarDatos(a[j],a[j+1]);
        }
    }
}
//Ordenamiento shell
void ordenacionShell(int a[], int n)
{
    int salto, i, j, k;
    salto = n / 2;
    while (salto > 0)
    {
        for (i = salto; i <= n; i++)
        {
            j = i - salto;
            while (j >= 0)
            {
                k = j + salto;
                if (a[j] <= a[k])
                j = -1; // par de elementos ordenado
                else
                {
                    intercambiarDatos(a[j], a[j+1]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}
//Ordenamiento quicksort
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
//main
int main()
{
    int n=19;
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        a[i]=rand()%201;
    }
    cout<<"Este es el arreglo generado por números aleatorios"<<endl;
    imprimirArreglo(a,n);
    int opcion=0;
    do
    {
        mostrarMenu();
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1:
            cout<<"Ordenamiento burbuja"<<endl;
            ordBurbuja(a,n);
            imprimirArreglo(a,n);
            break;
        case 2:
            cout<<"Ordenamiento shell"<<endl;
            ordenacionShell(a,n);
            imprimirArreglo(a,n);
            break;
        case 3:
            cout<<"Ordenamiento quicksort"<<endl;
            quicksort(a,0,19);
            imprimirArreglo(a,n);
            break;
        default:
            cout<<"Opción no posible"<<endl;
            break;
        }
    } while (opcion!=4);
}