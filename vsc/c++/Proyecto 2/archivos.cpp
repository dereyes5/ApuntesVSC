#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
void imp(int x[],int ini,int n);
void mSort(int *A,int n);
void merge(int *izq,int nIzq,int *der,int nDer,int *A);
int *archivo(int arr[]){
    int tam=19;
    int pos=0;
    string nombreArchivo = "origen.txt";
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    int lineaInt;
    while (getline(archivo, linea)&&pos<=tam) {
        lineaInt=stoi(linea);
        arr[pos]=lineaInt;
        pos++;
}
    return arr;
}

int main()
{
    int n=20;
    int arr[n];
    archivo(arr);
    int m= sizeof(arr) / sizeof(int);
    cout<<"  Antes del merge sort: ";
    imp(arr,0,m);
    mSort(arr,m);
    cout<<"DESPUES del merge sort: ";
    imp(arr,0,m);
    return 0;

}
void imp(int x[],int ini,int n)
{
    for(int i=ini;i<n;i++)
    cout<<x[i]<<" ";
    cout<<endl;
}
void mSort(int *A,int n)
{
    if(n==1){return;}
    int mitad = n / 2;
    int *izq = new int[mitad];
    int *der = new int[n-mitad];
    for(int i=0;i<mitad;i++)
    izq[i] = A[i];
    for(int i=mitad;i<n;i++)
    der[i-mitad] = A[i];
    mSort(izq, mitad);
    mSort(der, n-mitad);
    merge(izq, mitad, der, n-mitad, A);
}
void merge(int *izq,int nIzq,int *der,int nDer,int *A)
{
    int i=0,j=0,k=0;
    while( ( i < nIzq ) && ( j < nDer ) )
    {
        if( izq[i] <= der[j])
        {
            A[k] = izq[i];
            i++;
        }
        else
        {
            A[k] = der[j];
            j++;
        }
        k++;
    }
    while(i < nIzq)
    {
        A[k] = izq[i];
        i++;k++;
    }
    while(j < nDer)
    {
        A[k] = der[j];
        j++;k++;
    }
}