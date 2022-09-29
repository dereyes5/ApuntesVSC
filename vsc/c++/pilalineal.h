//archivo de cabecera pilalineal.h
#include <stdlib.h>
#include <stdio.h>
const int TAMPILLA=49;
class PilaLineal
{
private:
    int cima = NULL;
    int listaPila[TAMPILLA];
    int lugar = 0;

public:
PilaLineal(){
}
void insertar (int elemento){
    if(pilaVacia()){
        cima++;
        listaPila[lugar];
    }
}
int quitar();
void limpiarPila();
bool pilaLlena(){
    if(cima==TAMPILLA){
        return true;
    }else{
        return false;
    }
}
bool pilaVacia(){
    if (cima==NULL){
        return true;
    }else{
        return false;
    }
}
};
