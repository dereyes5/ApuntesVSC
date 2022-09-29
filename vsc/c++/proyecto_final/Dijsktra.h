#include <iostream>
#include <limits.h>
using namespace std;


//Numero de vertices
#define Vertices 6

// Una funcion de utilidad para encontrar el vertice con valor de distancia minima, de
// el conjunto de vertices aun no incluidos en el arbol de ruta mas corta
int minDistance(int dist[], bool sptSet[])
{

	// Inicializar valor minimo
	int min = INT_MAX, min_index;

	for (int v = 0; v < Vertices; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}

// Una funcion de utilidad para imprimir la matriz de distancia construida
void printSolution(int dist[])
{
	cout << "Vertice \tMenor distacia del nodo escogido" << endl;
	for (int i = 0; i < Vertices; i++)
		cout << i << " \t\t" << dist[i] << endl;
}

// Funcion que implementa el algoritmo de ruta mas corta de fuente unica de Dijkstra
// para un grafo representado usando representacion de matriz de adyacencia
void dijkstra(int graph[Vertices][Vertices], int src)
{
	int dist[Vertices]; // La matriz de salida. dist[i] tendra la
	// distancia mas corta de src a i

	bool sptSet[Vertices]; // sptSet[i] sera verdadero si el vertice i se incluye en el mas corto
	// se finaliza el arbol de ruta o la distancia mas corta de src a i

	// Inicializa todas las distancias como INFINITE y stpSet [] como falsa
	for (int i = 0; i < Vertices; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	// La distancia del vertice fuente de si mismo es siempre 0
	dist[src] = 0;

	// Encuentra el camino mas corto para todos los vertices
	for (int count = 0; count < Vertices - 1; count++) {
		// Elija el vertice de distancia minima del conjunto de vertices
		//aun no procesados. u siempre es igual a src en la primera iteracion.
		int u = minDistance(dist, sptSet);

		// Marcar el vertice seleccionado como procesado
		sptSet[u] = true;

		// Actualice el valor de dist de los vertices adyacentes del vertice seleccionado.
		for (int v = 0; v < Vertices; v++)
			// Actualizar dist[v] solo si no esta en sptSet, hay un borde desde
			// u a v, y el peso total de la ruta de src a v a traves de u es
			// menor que el valor actual de dist[v]
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}

	// imprimir la matriz de distancia construida
	printSolution(dist);
}