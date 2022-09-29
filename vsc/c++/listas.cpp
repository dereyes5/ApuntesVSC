#include<iostream>
#include<conio.h>
using namespace std;
struct nodo
{
	int dato;
	nodo*siguiente;
};
void insertarLista(nodo*&, int);
void insertarLista(nodo*&lista, int n){
	nodo*nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nodo*aux1=lista;
	nodo*aux2;
	
	while((aux1!=NULL) && (aux1->dato < n)){
		aux2= aux1;
		aux1=aux1->siguiente;
		
	} 	
	if(lista==aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
	cout<<"\tElemento "<<n<<" insertado a la lista correctamente\n";
}
int main (){
	nodo*lista=NULL;
	int dato;
	cout<<"Digite un número: ";
	cin>>dato;
	insertarLista(lista, dato);
	getch();
	
		return 0;
	
	}
