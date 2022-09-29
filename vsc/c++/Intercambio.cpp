#include <iostream>
using namespace std;
void imprimir(int x[10]){
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<",";
    }
    cout<<"."<<endl;
}
void ordenar(int x[10]){
    printf("Datos en el orden inicial:\n\n");
    int i, pasada, aux;
    for(i=0;i<=10-1;i++)
        printf("%4d",x[i]);
    for (pasada=1;pasada<=10-1;pasada++) /*pasadas*/
            for (i=0;i<=10-2;i++)
                if (x[i]>x[i+1]) /*comparación */
                {
                    /*intercambio*/
                    aux=x[i]; 
                    x[i] = x[i+1]; 
                    x[i+1] = aux;
                }
}

//ordena un array de enteros
int main(int argc, char const *argv[])
{
    int i,j,n=10;
    int a[n]={5,8,9,4,7,1,2,3,6,10};
    ordenar(a);
    imprimir(a);
    return 0;
}