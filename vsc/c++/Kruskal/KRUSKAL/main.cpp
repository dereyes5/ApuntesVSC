#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
struct Graph
{
	int V, E;
	vector< pair<int, iPair> > edges;
	Graph(int V, int E)
	{
		this->V = V;
		this->E = E;
	}
	void addEdge(int u, int v, int w)
	{
		edges.push_back({w, {u, v}});
	}
	int kruskalMST();
};
struct DisjointSets
{
	int *parent, *rnk;
	int n;
	DisjointSets(int n)
	{
		this->n = n;
		parent = new int[n+1];
		rnk = new int[n+1];
		for (int i = 0; i <= n; i++)
		{
			rnk[i] = 0;
			parent[i] = i;
		}
	}
	int find(int u)
	{
		if (u != parent[u])
			parent[u] = find(parent[u]);
		return parent[u];
	}
	void merge(int x, int y)
	{
		x = find(x), y = find(y);
		if (rnk[x] > rnk[y])
			parent[y] = x;
		else
			parent[x] = y;
		if (rnk[x] == rnk[y])
			rnk[y]++;
	}
};
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
		int v = it->second.second;
		int set_u = ds.find(u);
		int set_v = ds.find(v);
		if (set_u != set_v)
		{
			char letrav=v+65;
			char letrau=u+65;

			cout << letrau << " - " << letrav  << endl;

			mst_wt += it->first;
			ds.merge(set_u, set_v);
		}
	}

	return mst_wt;
}
int main()
{
	/* Let us create above shown weighted
	and undirected graph */
	int V = 6, E = 8;
	Graph g(V, E);

	// making above shown graph
	g.addEdge(0, 1, 2);
	g.addEdge(0, 2, 3);
	g.addEdge(1, 3, 2);
	g.addEdge(1, 0, 2);
	g.addEdge(2, 0, 3);
	g.addEdge(2, 3, 1);
	g.addEdge(2, 4, 5);
	g.addEdge(3, 1, 2);
	g.addEdge(3, 2, 1);
	g.addEdge(3, 5, 1);
	g.addEdge(4, 2, 5);
	g.addEdge(4, 5, 2);
	g.addEdge(5, 3, 1);
	g.addEdge(5, 4, 2);
	g.addEdge(5, 0, 5);

	cout << "Aristas del MST: \n";
	int mst_wt = g.kruskalMST();

	cout << "\nEl peso del MST es: " << mst_wt;

	return 0;
}