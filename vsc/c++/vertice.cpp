#include <string.h>
#include <iostream>
using namespace std;
class Vertice
{
protected:
    string nombre;
    int numVertice;
    public:
    Vertice () {}
    Vertice(string x)
    { // inicializa el nombre y pone el número de vértice e -1
        nombre = x;
        numVertice = -1;
    }
    Vertice(string x, int n)
    { // inicializa el nombre y el número de vértice
        nombre = x;
        numVertice = n;
    }
    string OnomVertice()
    { // retorna el nombre del vértice
        return nombre;
    }
    void PnomVertice(string nom)
    { // cambia el nombre del vértice
        nombre = nom;
    }
    bool igual(Vertice n)
    { // decide entre la igualdad de nombres
        return nombre == n.nombre;
    }
    void PnumVertice(int n)
    { // cambia el número del vértice
        numVertice = n;
    }
    int OnumVertice()
    { // retorna el número del vértice
        return numVertice;
    }
};