//==========================LIBRERÍAS===========================================
#include <iostream>
using namespace std;
//==============================================================================
//==========================FUNCIONES===========================================
//--------------------------ORD INTERCAMBIO-------------------------------------
void intercambiarOrdIntercambio (int &x, int &y){
	int aux = x;
	x = y;
	y = aux;
}
void ordIntercambio(int a[], int n){
	int i, j;
	for(i=0; i<=n-1; i++){
		for (j=i+1; j<n; j++)
		if (a[i]>a[j]){
			intercambiarOrdIntercambio (a[i], a[j]);
		}
	}
    for (int k = 0; k <= n; k++)
    {
        cout<<a[k]<<"-"<<endl;
    }
}
//------------------------------------------------------------------------------
//--------------------------ORD SELECCIÓN---------------------------------------
void intercambiarOrdSeleccion (int& x, int& y){
	int aux=x;
	x=y;
	y=aux;
}
void ordSeleccion (int a[], int n){
	int indiceMenor, i, j;
	for (i=0; i<=n-1;i++){
		indiceMenor=i;
		for(j=i+1; j<n; j++)
			if(a[j]<a[indiceMenor])
				indiceMenor=j;
		if(i!=indiceMenor){
			intercambiarOrdSeleccion (a[i], a[indiceMenor]);
		}
	}
    for (int k = 0; k <= n; k++)
    {
        cout<<a[k]<<"-"<<endl;
    }
}
//------------------------------------------------------------------------------
//--------------------------ORD INSERCION---------------------------------------
void ordInsercion (int a[], int n){
	int i, j, aux;
	for (i=1; i<=n; i++){
		j=i;
		aux=a[i];
		while (j>0 && aux < a[j-1]){
			a[j]=a[j-1];
			j--;
		}
		a[j]=aux;
	}
    for (int k = 0; k <= n; k++)
    {
        cout<<a[k]<<"-";
    }
}
//------------------------------------------------------------------------------
//==============================================================================
//=================================MAIN=========================================
//------------------------------VARIABLES---------------------------------------
int main(int argc, char const *argv[])
{
    int opcion=0;
    int n=5;
    int datos[n];
    cout<<"================TIPOS DE ORDENAMIENTO====================="<<endl;
    cout<<"1.- Ingresar datos"<<endl;
    cout<<"2.- Ordenamiento por Seleccion:"<<endl;
    cout<<"3.- Ordenamiento por Insersion:"<<endl;
    cout<<"4.- Ordenamiento por Intercambio:"<<endl;
    cout<<"5.- Salir"<<endl;
//------------------------------------------------------------------------------
//-------------------------------MENÚ-------------------------------------------
    while (opcion!=5)
    {
        cout<<"Ingrese la opción"<<endl;
        cin>>opcion;
        switch (opcion){
            case 1:
                cout<<"Ingresar 6 datos"<<endl;
                for (int i = 0; i <= n; i++)
                {
                    cout<<"dato: "<<i<<endl;
                    cin>>datos[i];
                }
                for (int k = 0; k <= n; k++){
                cout<<datos[k]<<"-";
                }
                break;
            case 2:
                cout<<"Ordenamiento por Seleccion:"<<endl;
                ordSeleccion(datos,n);
                break;
            case 3:
                cout<<"Ordenamiento por Insercion:"<<endl;
                ordInsercion(datos,n);
                break;
            case 4:
                cout<<"Ordenamiento por Intercambio:"<<endl;
                ordIntercambio(datos,n);
                break;
            case 5:
                cout<<"Salir"<<endl;
                break;
            default:
            cout << "¡Imposible!\n";
        }
    }
    return 0;
//------------------------------------------------------------------------------
}
//==============================================================================