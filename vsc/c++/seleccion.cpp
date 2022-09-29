#include <iostream>
using namespace std;
void intercambiar(double& x,double& y){
    double aux=x;
    x=y;
    y=aux;
}
void ordSeleccion(double a[],int n){
    int indiceMenor,i,j;
    for(i=0;i<n-1;i++){
        indiceMenor=1;
        for(j=i+1;j<n;j++)
            if(a[j]<a[indiceMenor])
                indiceMenor=j;
            if(i != indiceMenor)
                intercambiar(a[i],a[indiceMenor]);
    }
    for (int k = 0; k <= n; k++)
    {
        cout<<a[k]<<",";
    }
    cout<<"."<<endl;
}
void ordInsercion(int a[], int n){
    int i,j,aux;
    for (i = 1; i < n; i++)
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
int main()
{
    int n=5;
    double arreglo[n]={5,4,2,3,1,0};
    for (int i = 0; i <= n; i++)
    {
        cout<<arreglo[i]<<",";
    }
    cout<<"."<<endl;
    ordSeleccion(arreglo,n);
    
    return 0;
}
