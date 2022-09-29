#include<bits/stdc++.h>
using namespace std;

typedef pair<char, int> iPair;

// Estructura para representar el grafo
struct Graph
{
	char V;
	int E; //declarando los v�rtices y aristas
	vector< pair<int, iPair> > edges;

	// Constructor
	Graph(char V, int E)
	{
		this->V = V;
		this->E = E;
	}

	// Funci�n para agregar una arista
	void addEdge(int u, char v, int w)
	{
		edges.push_back({w, {u, v}});
	}

	// Funci�n para encontrar el MST por Kruskal
	int kruskalMST();
};

//Estructuta para representar conjuntos disjuntos
struct DisjointSets
{
	int *parent, *rnk;
	int n;

	// Constructor.
	DisjointSets(int n)
	{
		// Asignar memoria
		this->n = n;
		parent = new int[n+1];
		rnk = new int[n+1];

		// Todos los v�rtices tienen un rango de 0
		for (int i = 0; i <= n; i++)
		{
			rnk[i] = 0;

			//cada elemento es padre de si mismo
			parent[i] = i;
		}
	}

	// Encontrar el padre de un nodo"u"
	int find(int u)
	{
		/* Make the parent of the nodes in the path
		from u--> parent[u] point to parent[u] */
		if (u != parent[u])
			parent[u] = find(parent[u]);
		return parent[u];
	}

	// Union por rango
	void merge(int x, int y)
	{
		x = find(x), y = find(y);

		/* Make tree with smaller height
		a subtree of the other tree */
		if (rnk[x] > rnk[y])
			parent[y] = x;
		else // If rnk[x] <= rnk[y]
			parent[x] = y;

		if (rnk[x] == rnk[y])
			rnk[y]++;
	}
};

/* Functions returns weight of the MST*/

int Graph::kruskalMST()
{
	int mst_wt = 0; // Initialize result

	// Sort edges in increasing order on basis of cost
	sort(edges.begin(), edges.end());

	// Create disjoint sets
	DisjointSets ds(V);

	// Iterate through all sorted edges
	vector< pair<int, iPair> >::iterator it;
	for (it=edges.begin(); it!=edges.end(); it++)
	{
		int u = it->second.first;
		char v = it->second.second;

		int set_u = ds.find(u);
		char set_v = ds.find(v);

		// Check if the selected edge is creating
		// a cycle or not (Cycle is created if u
		// and v belong to same set)
		if (set_u != set_v)
		{
			// Current edge will be in the MST
			// so print it
			cout << u << " - " << v << endl;

			// Update MST weight
			mst_wt += it->first;

			// Merge two sets
			ds.merge(set_u, set_v);
		}
	}

	return mst_wt;
}

// Driver program to test above functions
int main()
{
	/* Let us create above shown weighted
	and undirected graph */
	int V = 6, E = 8;
	Graph g(V, E);

	// making above shown graph
	g.addEdge(1, 'A', 2);
	g.addEdge(0, 'E', 3);
	g.addEdge(1, 'B', 2);
	g.addEdge(2, 'C', 1);
	g.addEdge(2, 'E', 1);
	g.addEdge(3, 'D', 2);
	g.addEdge(4, 'E', 5);

	cout << "Aristas del MST: \n";
	int mst_wt = g.kruskalMST();

	cout << "\nEl peso del MST es: " << mst_wt;

	return 0;
}

