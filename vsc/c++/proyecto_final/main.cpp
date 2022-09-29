#include <iostream>
#include "Dijkstra.h"
#include "Prim.h"
#include "Kruskal.h"

using namespace std;

int main()
{

    // para prim - dijkstra
    int graph[6][6] = {
        {0, 2, 3, 0, 0, 5}, // 0
        {2, 0, 0, 2, 0, 0}, // 1
        {3, 0, 0, 1, 5, 0}, // 2
        {0, 2, 1, 0, 0, 1}, // 3
        {0, 0, 5, 0, 0, 2}, // 4
        {5, 0, 0, 1, 2, 0}  // 5
    };

    // para kruskal
    Graph g(6);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 3);
    g.addEdge(0, 5, 5);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 5, 1);
    g.addEdge(3, 2, 1);
    g.addEdge(2, 4, 5);
    g.addEdge(4, 5, 2);

    char opcion;
    do
    {
        system("cls");
        cout << "ALGORITMOS" << endl;
        cout << "[1]. Dijkstra." << endl;
        cout << "[2]. Prim." << endl;
        cout << "[3]. Kruskal." << endl;
        cout << "[0]. Salir." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case '1':
            system("cls");
            dijkstra(graph, 0);
            system("pause");
            break;
        case '2':
            system("cls");
            primMST(graph);
            system("pause");
            break;
        case '3':
            system("cls");
            g.kruskals_mst();
            system("pause");
            break;

        case '0':
            system("cls");
            cout << "Saliendo..." << endl;
            system("pause");
            break;
        default:
            system("cls");
            cout << "Ingrese una opcion correcta..." << endl;
            system("pause");
            break;
        }
    } while (opcion != '0');

    return 0;
}