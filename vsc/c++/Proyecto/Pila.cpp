//===============Librerías=================================
#include <iostream>
#include <string.h>
using namespace std;
//==============estructuras=================================
struct Nodo{
    string dato;
    Nodo*siguiente;
};
struct Nodo2{
    string dato;
    Nodo2*siguiente;
};
//===============Funciones==================================
void agregarPila(Nodo*&, string);
void sacarPila(Nodo*&, string&);
void copiarPila(Nodo2*&, string);
void sacarPila2(Nodo2*&, string&);
//================Main======================================
int main()
{
    Nodo*pila=NULL;
    Nodo2*pila2=NULL;
    string dato;
    char resp;
//===================INGRESAR DATOS===========================
    do{
        cout<<"Ingrese una palabra: ";
        cin>>dato;
        agregarPila(pila,dato);
        cout<<"\nDesea agregar otro dato(s/n): ? ";
        cin>>resp;
    }while(resp=='s');
//======================SACAR DE LA PILA========================
    while(pila != NULL){
        sacarPila(pila,dato);
        if (pila!=NULL){
            cout<<dato;
            copiarPila(pila2,dato);
        }else{
            cout<<dato;
            copiarPila(pila2,dato);
        }
    }
    cout<<"\nSacar los elementos de la pila 2: ";
    while(pila2 != NULL){
        sacarPila2(pila2,dato);
        if (pila2!=NULL){
            cout<<dato<<",";
        }else{
            cout<<dato<<".";
        }
    }
    return 0;
}
//================Implementación de funciones==================
void agregarPila(Nodo*&pila,string p){
    Nodo*nuevo_nodo=new Nodo();
    nuevo_nodo->dato=p;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
    cout<<"Palabra "<<p<<" ha sido agregada ";
}
void sacarPila(Nodo*&pila, string &p){
    Nodo*aux=pila;
    p=aux->dato;
    pila=aux->siguiente;
    delete aux;
}
void copiarPila(Nodo2*&pila, string p){
    Nodo2*nuevo_nodo=new Nodo2();
    nuevo_nodo->dato=p;
    nuevo_nodo->siguiente=pila;
    pila=nuevo_nodo;
    cout<<" ha sido agregada a la pila 2 \n";
}
void sacarPila2(Nodo2*&pila2, string &p){
    Nodo2*aux=pila2;
    p=aux->dato;
    pila2=aux->siguiente;
    delete aux;
}
