#include <iostream>
using namespace std;
struct Mascota{
    char nombre[50];
    int edad;
    int estado=0;
    int clave;
};
int insertarHash(Mascota* A, Mascota* B,int,int);
int buscarHash(Mascota* A, int, int);
int main()
{
    int op=0,n,clave,x;//op=opcion menu n=numero de mascotas clave=index x=index que se quiere buscar
    do//pide datos mientras n>0
    {
        cout<<"Ingrese la cantidad de mascota: ";
        cin>>n;
    } while (n<=0);
    Mascota* A=new Mascota[n];
    Mascota* B=new Mascota[n];//crea nuevos miembros de la estructura mascota
    system("cls"); //Elimina todo de la pantalla
    do
    {
        cout<<" ________________________________ "<<endl;
        cout<<"|    Metodo de busqueda - HASH   |"<<endl;
        cout<<"|--------------------------------|"<<endl;
        cout<<"|   1.Insertar   |   2.Buscar    |"<<endl;
        cout<<"|           3. Salir             |"<<endl;
        cout<<"|       INGRESE UNA OPCION       |"<<endl;
        cout<<"|________________________________|"<<endl;
        cin>>op; //pide la opcion
        system("cls");
        switch (op)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                cout<<"Datos del mascota"<<i+1<<endl;
                fflush(stdin);
                cout<<"Nombre: ";
                cin.getline(A[i].nombre,50);
                cout<<"Edad: ";
                cin>>A[i].edad;
                A[i].clave=insertarHash(A,B,i,n);
                cout<<"Clave: ";
                cout<<A[i].clave<<endl;
            }//pide los datos de acuerdo a n
            break;
            case 2:
                cout<<"Introduzcla el codigo que desea buscar: ";
                fflush(stdin);
                cin>>clave;
                cout<<endl;
                x=buscarHash(A,n,clave);
                if (x==-1)
                {
                    cout<<"Numero no encontrado"<<endl;
                }else{
                    cout<<"Numero encontrado"<<endl;
                    cout<<"Nombre: "<<B[x].nombre<<endl;
                    cout<<"Noma: "<<B[x].edad<<endl;
                }
            break;
            case 3:
                cout<<"GRACIAS";
                return 0;
            break;
        default:
            break;
        }
    } while (op != 3);
    return 0;
}
int insertarHash(Mascota* A,Mascota* B, int i, int n){
    int j= (A[i].edad +1) % n;
    do
    {
        if (A[j].estado==0)
        {
            B[j]=A[j];
            A[j].estado=1;
        }else
        {
            j++;
        }
    } while (j>n);
    return j;
}
int buscarHash(Mascota* A,int n,int clave){
    int j=0;
    while(j<n){
        if (A[j].clave==clave)
        {
            return j;
        }else
        {
            j++;
        }
    }
    return -1;
}