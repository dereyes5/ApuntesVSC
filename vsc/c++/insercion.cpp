#include <iostream>
using namespace std;

void ordInsercion(int a[], int n){
    int i,j,aux;
    for (i = 1; i <= n; i++)
    {
        /* indice j es para explorar la sublista a[i-1]...a[0] buscando la posición correcta del elemento destino*/
        j=i;
        aux=a[i];
        //se localiza el punto de insersion explorando hacia abajo
        while (j>0 && aux < a[j-1])
        {
            //desplazar elementos hacia arriba para hacer espacio
            a[j]= a[j-1];
            j--;
        }
        a[j]=aux;
    }
    for (int k = 0; k <= n; k++)
    {
        cout<<a[k]<<",";
    }
    cout<<"."<<endl;
}
int main(int argc, char const *argv[])
{
    int n=5;
    int a[n]={0,5,3,1,4,2};
    for (int i = 0; i <= n; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"."<<endl;
    ordInsercion(a,n);
    return 0;
}
