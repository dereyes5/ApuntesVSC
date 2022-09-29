#include <iostream>
using namespace std;
#include "pilalineal.h"
typedef int TipoDeDato;
int main(){
    PilaLineal pila;  // crea pila vacía
    if (pila.pilaVacia()){
        cout<<"la pila esta vacia"<<endl;
    }else{
        cout<<"la pila no está vacía"<<endl;
    }

}
