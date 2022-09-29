#include <iostream>
using namespace std;
void intercambiarDatos (int& x, int& y){
	int aux=x;
	x=y;
	y=aux;
}
void ordBurbuja(int a[], int n){
    bool interruptor = true;
    int pasada, j;
    for(pasada=0; pasada<n-1 && interruptor; pasada++){
        interruptor=false;
        for(j=0;j<n-pasada-1;j++)
        if(a[j]>a[j+1]){
            interruptor=true;
            intercambiarDatos(a[j],a[j+1]);
        }
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}

int main()
{
    int n=4;
    int datos[n]={0,3,2,1,4};
    for (int i = 0; i <= n; i++)
    {
        cout<<datos[i]<<",";
    }
    cout<<endl;
    ordBurbuja(datos,n);
    return 0;
}
