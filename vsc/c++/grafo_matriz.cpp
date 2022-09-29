#include "vertice.cpp"
class GrafoMatriz
{
    protected:
    int maxVerts; // máximo numero de vértices
    int numVerts; // número de vértices actual
    Vertice * verts; // array de vértices
    int ** matAd; // matriz de adyacencia
    public:
    // métodos públicos de la clase GrafoMatriz
    private:
    // métodos privados de la clase GrafoMariz
};
typedef int * pint; // para el dimensionamiento de la matriz
GrafoMatriz::GrafoMatriz(int mx)
{
 maxVerts = mx;
 verts = new Vertice[mx] ; // vector de vértices
 matAd = new pint[mx]; // vector de punteros
 numVerts = 0;
 for (int i = 0; i < mx; i++)
 matAd[i] = new int [mx]; // matriz de adyacencia
}
GrafoMatriz::GrafoMatriz()
{
 maxVerts = 1 ;
 GrafoMatriz(maxVerts);
}
int OnumeroDeVertices(){return numVerts;}
void PnumeroDeVertices(int n){numVerts = n;}
void GrafoMatriz::nuevoVertice (string nom)
{
 bool esta = numVertice(nom) >= 0;
 if (!esta)
 {
 Vertice v = Vertice(nom, numVerts);
 verts[numVerts++] = v; // se asigna a la lista.
 // No se comprueba que sobrepase el máximo
 }
}
int GrafoMatriz::numVertice(string v)
{
 int i;
 bool encontrado = false;
 for ( i = 0; (i < numVerts) && !encontrado;)
{
 encontrado = verts[i].igual(v);
 if (!encontrado) i++ ;
 }
 return (i < numVerts) ? i : -1 ;
}
void GrafoMatriz::nuevoArco(string a, string b)
{
 int va, vb;
 va = numVertice(a);
 vb = numVertice(b);
 if (va < 0 || vb < 0) throw "Vértice no existe";
 matAd[va][vb] = 1;
}
void GrafoMatriz::nuevoArco(int va, int vb)
{
 if (va < 0 || vb < 0 || va > numVerts || vb > numVerts)
 throw "Vértice no existe";
 matAd[va][vb] = 1;
}
void GrafoMatriz::nuevoArco(int va, int vb, int valor)
{
 if (va < 0 || vb < 0 || va > numVerts || vb > numVerts)
 throw "Vértice no existe";
 matAd[va][vb] = valor;
}
bool GrafoMatriz::adyacente(string a, string b)
{
 int va, vb;
 va = numVertice(a);
 vb = numVertice(b);
 if (va < 0 || vb < 0) throw "Vértice no existe";
 return matAd[va][vb] == 1;
}
bool GrafoMatriz::adyacente(int va, int vb)
{
 if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
 throw "Vértice no existe";
 return matAd[va][vb] == 1;
}
int GrafoMatriz::Ovalor(string a, string b)
{
 int va, vb;
 va = numVertice(a);
 vb = numVertice(b);
 if (va < 0 || vb < 0) throw "Vértice no existe”;
 return matAd[va][vb];
}
int GrafoMatriz::Ovalor( int va, int vb)
{
 if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
 throw "Vértice no existe";
 return matAd[va][vb];
}
void GrafoMatriz::Pvalor(int va, int vb, int v)
{
 if (va < 0 || vb < 0 || va >= numVerts || vb >= numVerts)
 throw "Vértice no existe";
 matAd[va][vb] = v;
}
void GrafoMatriz::Pvalor( char *a, char *b, int v)
{
 int va, vb;
 va = numVertice(a);
 vb = numVertice(b);
 if (va < 0 || vb < 0) throw "Vértice no existe";
 matAd[va][vb] = v;
}
Vertice Overtice(int va)
{
 if (va < 0 || va >= numVerts)
 throw "Vértice no existe";
 else return verts[va]
}
void Pvertice( int va, Vertice vert)
{
 if (va < 0 || va >= numVerts)
 throw "Vértice no existe";
 else verts[va] = vert;
}