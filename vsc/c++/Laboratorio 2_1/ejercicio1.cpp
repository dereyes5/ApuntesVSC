#include <iostream>
using namespace std;
int main()
{
    int n, aux; //declara la variable n = numero de datos del arreglo;
    //aux=valor que se guardará al momento de realizar el intercambio de datos en el arreglo
    cout<<"Ingrese la cantidad de elementos a ordenar: ";
    cin>>n; //Pide al usuario que establezca la variable n
    int V[n]; // Se declara un arreglo de n elementos
    for (int i = 0; i < n; i++)
    {
        cout<<"\n Elemento"<<(i+1)<<"=";
        cin>>V[i];
    } //este for recorre todo el arreglo y va pidiendo al
//usuario los datos de caa espacio del arreglo
    for(int i = 0; i<n; i++){
        cout<<V[i]<<endl;
    } // se  recorre el arreglo ya ordenado imprimiendo sus valores
    for (int i = 0; i < n; i++)
    {//recorre el arreglo con un for usando la variable i
        for (int j = i+1; i< n; j++) //recorre el arreglo con un for
        // usando la variable j, la cual será igual a i+i
        {
            if (V[j]<V[i]){ //compara los 2 valores i,j y si j
            //es menor que i se procede a hacer el intercambio
                aux=V[i];
                V[i]=V[j];
                V[j]=aux; //se guarda lo que vale i en la variable aux, se intercambian
                // los valores de i y j y j se asigna al valor de la variable aux
            }
        }
    }
    cout<<"Elementos ordenados: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<V[i]<<endl;
    } // se  recorre el arreglo ya ordenado imprimiendo sus valores
    return 0;
}