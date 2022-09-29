#include <iostream>

using namespace std;

void quicksort (int *arr, int izq, int der){
    //Declarando variables
    int i = izq, j = der, tmp; //variables auxiliares
    int p = arr[(izq+der)/2]; //pivote

    while (i<=j){

        while (arr[i]<p)i++; //realizar el bucle mientras que el elemento del arreglo sea menor que el pivote
        while (arr[j]>p)j--; //realizar el bucle mientras que el elemento del arreglo sea mayor que el pivote
        if (i<=j){ //compara los 2 valores de i,j
        //si i es menor o igual a j, se procede a realizar el intercambio

            tmp = arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            //se realiza los intercambios correspondientes.
            i++;j--;
        }
    }
    if (izq<j)
        quicksort (arr, izq, j); //mismo proceso conn sublista de la izquierda
    if (i<der)
        quicksort(arr, i, der); //mismo proceso con sublista de la derecha
}

int main (){

    cout <<"Elementos de la lista: \n";
    cout<<"8, 5, 7, 22, 10, 1, 98, 6, 87, 30\n\n";
    cout<<"Elementos de la lista ordenados:\n\n";
	int arreglo[10]={8,5,7,22,10,1,98,6,87,30}; //arreglo declarado con valores
    quicksort(arreglo,0,9); //llamando a la función del ordenamiento Quicksort, sus parámetros son
	//(arreglo declarado, posición 0, cantidad de valores del arreglo)

    for(int i=0; i<10; i++) //imprimiendo el arreglo
        cout<<arreglo[i]<<" ";

    return 0;
}