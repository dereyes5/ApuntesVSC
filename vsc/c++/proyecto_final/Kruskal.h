#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DSU {
    int* parent;
    int* rank;

public:
    DSU(int n)
    {
        parent = new int[n];
        rank = new int[n];
        for (int i = 0; i < n; i++) {
            parent[i] = -1;
            rank[i] = 1;
        }
    }

    // Buscar
    int find(int i)
    {
        if (parent[i] == -1)
            return i;
        return parent[i] = find(parent[i]);
    }
    // Unir
    void unite(int x, int y)
    {
        int s1 = find(x);
        int s2 = find(y);

        if (s1 != s2) {
            if (rank[s1] < rank[s2]) {
                parent[s1] = s2;
                rank[s2] += rank[s1];
            }
            else {
                parent[s2] = s1;
                rank[s1] += rank[s2];
            }
        }
    }
};

class Graph {
    vector<vector<int> > edgelist;
    vector<int> aux;
    int V;

public:
    Graph(int V) { this->V = V; }

    void addEdge(int x, int y, int w)
    {
        aux.clear();
        aux.push_back(w);
        aux.push_back(x);
        aux.push_back(y);
        edgelist.push_back(aux);
    }

    void kruskals_mst()
    {
        // 1. Ordenar
        sort(edgelist.begin(), edgelist.end());

        // Inicializar el DSU (Disjoint Set Union)
        DSU s(V);
        int ans = 0;
        cout << "Vertice \tPeso\n";

        for (int i = 0; i < edgelist.size(); ++i) {
            int w = edgelist.at(i).at(0);
            int x = edgelist.at(i).at(1);
            int y = edgelist.at(i).at(2);
            // tomo el vertice de MST si forma un ciclo
			if (s.find(x) != s.find(y)) {
                s.unite(x, y);
                ans += w;
                cout << x << " -- " << y << "\t\t" << w
                    << endl;
            }
        }
        cout << "Costo del Arbol de expansion minimo: " << ans << endl;
    }
};