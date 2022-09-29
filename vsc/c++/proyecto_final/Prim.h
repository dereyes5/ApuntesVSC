#include <iostream>
using namespace std;

//Numero de vertices
#define Vertices 6

// Una funciÃ³n de utilidad para encontrar el vertice con
// valor clave minimo, del conjunto de vertices
// aun no incluido en MST
int minKey(int key[], bool mstSet[])
{
	// Inicializar el valor minimo
	int min = INT_MAX, min_index;

	for (int v = 0; v < Vertices; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}

// Una funciÃ³n de utilidad para imprimir el
// MST construido almacenado en parent[]
void printMST(int parent[], int graph[Vertices][Vertices])
{
	int cost = 0;
	for (int i = 0; i < Vertices; i++){
		cost += graph[i][parent[i]] ;
    }
	cout << "Vertice \tPeso\n";
	for (int i = 1; i < Vertices; i++)
		cout << parent[i] << " -- " << i << " \t\t" << graph[i][parent[i]] << " \n";
		
	
	cout << "Costo del Arbol de expansion minimo: " << cost << endl;
}

// FunciÃ³n para construir e imprimir MST para
// un grafo representado usando adyacencia
// representaciÃ³n matricial
void primMST(int graph[Vertices][Vertices])
{
	// Matriz para almacenar MST construido
	int parent[Vertices];

	// Valores clave utilizados para elegir el borde de peso minimo en el corte
	int key[Vertices];

	// Para representar el conjunto de vertices incluidos en MST
	bool mstSet[Vertices];

	// Inicializar todas las claves como INFINITAS 
	for (int i = 0; i < Vertices; i++)
		key[i] = INT_MAX, mstSet[i] = false;

	// Incluir siempre el primer vertice en MST.
	// Hacer clave 0 para que este vertice se elija como primer vertice.
	key[0] = 0;
	parent[0] = -1; // El primer nodo siempre es la raiz de MST

	// El MST tendra N vertices
	for (int count = 0; count < Vertices - 1; count++)
	{
		// Escogemos el vertice  de clave minima del
		// conjunto de vertices aun no incluidos en MST
		int u = minKey(key, mstSet);

		// Agrego el vertice elegido al conjunto MST
		mstSet[u] = true;

		// Actualizar el valor de la clave y el indice principal de
		// los vertices adyacentes del vertice seleccionado.
		// Considere solo aquellos vertices que 
		// aun no estan incluidos en MST
		for (int v = 0; v < Vertices; v++)

			// graph[u][v] no es cero solo para vertices adyacentes de m
			// mstSet[v] es falso para vertices aun no incluidos en MST
			// Actualizar la clave solo si el graph[u][v] es mas pequeÃ±o que la key[v]
			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]){
				parent[v] = u, key[v] = graph[u][v];
			}
				
	}
	
	printMST(parent, graph);
}