#include <iostream>
#include <locale.h>

using namespace std;

struct Trabajador
{ 
	char nombre [50];
	int nota;
	int estado = 0;
	int clave;
};

int insertar (Trabajador* A, Trabajador* B, int, int); 
int buscaHash (Trabajador* A, int, int);

int main()
{ 
int op = 0, n, clave,x;
do
{
	cout << "DIGITE LA CANTIDAD DE TRABAJADORES: ";
	cin >> n;
} while (n <= 0);
	Trabajador* A = new Trabajador [n];
	Trabajador* B = new Trabajador [n]; 
	system ("cls");
do
{
	setlocale(LC_ALL, "");
	cout << "\t				\n";
	cout <<"\t METODO DE BUSQUEDA HASH \n";
	cout << "\t				\n";
	cout << "\t 1.- Insertar Datos Del Trabajador\n";
	cout << "\t 2.- Buscar Datos Del Trabajador\n";
	cout << "\t 3.- Salir De La Busqueda\n";
	cout << "\t >> ELIGA UNA OPCIÓN: ";
	cin >> op;
	system ("cls");
	switch (op)
	{
		
	case 1:
		for (int i = 0; i < n; i++){ 	
	cout << "DATOS DEL TRABAJADOR " << i + 1 << endl;
	fflush (stdin);
	cout << "NOMBRE: ";
	cin.getline (A[i].nombre, 50);
	do {
	cout << "EDAD: "; 
	cin >> A[i].nota;
	} while (A[i].nota<0||A[i].nota>100);
	A[i].clave=insertar (A, B,i, n);
	cout << "Clave: ";
	cout << A[i].clave<<endl;
	}
		break;
	
	case 2:
	setlocale(LC_ALL, "");
	cout << "Introduzca el código que desea buscar :";
	fflush(stdin);
	cin >> clave;
	x=buscaHash (A, n, clave);
	if (x == -1) { 
		cout<<"Código no encontrado "<<endl;
	}else{
		cout<<"		CÓDIGO ENCONTRADO EXITOSAMENTE "	<<endl;
		cout<<"NOMBRE DEL TRABAJADOR: " <<B[x].nombre<<endl;
		cout<<"EDAD DEL TRABAJADOR: "	<<B[x].nota<<endl;
	}
	break;
		
	case 3:
	cout << "GRACIAS, VUELVA PRONTO";
		return 0;
	default:
		cout << "\n\nOPCION INCORRECTA. \n\n"; 
		system("pause");
	}
}while (op != 3);
return 0;
}

int insertar (Trabajador * A, Trabajador * B,int i, int n)
{ 
int j = (A[i].nota + 1) % n; 
	do {
		if (A[j].estado == 0) {
			B[j] = A[j];
			A[j].estado = 1;
		}
		else {
			j++;
		}
	} while (j > n); 
	return j;
}

int buscaHash (Trabajador * A, int n, int clave) {
	int j=0;
	while (j < n) { 
		if (A[j].clave == clave) {
			return j;
	} else {
		j++;
	}
}
	return -1;
}


















