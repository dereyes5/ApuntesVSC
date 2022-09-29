#include <iostream>
using namespace std;
void intercambiarDatos (int& x, int& y){
	int aux=x;
	x=y;
	y=aux;
}
void ordenacionShell(int a[], int n)
{
    int salto, i, j, k;
    salto = n / 2;
    while (salto > 0)
    {
    for (i = salto; i < n; i++)
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
    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}
int main()
{
    int n=5;
    int datos[n]={0,3,2,1,4};
    for (int i = 0; i <= n; i++)
    {
        cout<<datos[i]<<",";
    }
    cout<<endl;
    ordenacionShell(datos,n);
    return 0;
}
