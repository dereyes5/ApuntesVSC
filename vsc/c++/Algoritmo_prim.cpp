#include <bits/stdc++.h>
using namespace std;
// Class representing pair of vertex and its minEdgeCut value
// Used in minHeap in Prim's Algorithm for MST
class Element {
    public:
    int vertex;
    int minEdgeCutValue;
    Element(int v, int value) {
        vertex = v;
        minEdgeCutValue = value;
    }
};
// Class representing an edge in the graph
class Edge {
    public:
    int to;
    int weight;
    Edge(int t, int w) {
        to = t;
        weight = w;
    }
};
// Comparator to sort Element according to minEdgeCutValue
struct ElementComp {
    bool operator ()(const Element& e1, const Element& e2) {
        return (e2.minEdgeCutValue < e1.minEdgeCutValue);
    }
};
void findPrintMST(vector<Edge> graph[], int n) {
    // parent array stores the parent vertex of the current vertex in MST
    int parent[n];
    int minEdgeCut[n];
    bool includedMST[n];

    // Initialise all minEdgeCut values as INFINITE and all vertices as not included in MST
    for (int i = 0; i < n; i++) {
        minEdgeCut[i] = INT_MAX;
        includedMST[i] = false;
    }

    // Initialise minEdgeCut value of first vertex as 0
    minEdgeCut[0] = 0;
    parent[0] = -1;

    // Create a min heap to pick the smallest minEdgeCut value at every step
    // Min heap of vertex and corresponding minEdgeCut value
    priority_queue<Element, vector<Element>, ElementComp> minHeap;
    for (int i = 0; i < n; i++) {
        Element ele(i, minEdgeCut[i]);
        minHeap.push(ele);
    }

    // While all vertices are not included in MST
    while (minHeap.size() != 0) {
        // Select the vertex with minimum minEdgeCut value
        int u = minHeap.top().vertex;
        minHeap.pop();

        // Update minEdgeCut value for all adjacent vertices
        for (int j = 0; j < graph[u].size(); j++) {
            Edge curr = graph[u][j];
            // If weight of edge u-v is less than the current minEdgeCut value of v
            // update the minEdgeCut value as weight of u-v
            if (minEdgeCut[curr.to] > curr.weight && includedMST[curr.to] == false) {
                minEdgeCut[curr.to] = curr.weight;
                parent[curr.to] = u;
            }
        }
    }

    // Print MST
    for (int i = 1; i < n; i++) {
        cout<<"Edge from "<<parent[i]<<" to "<<i<<" weight "<<minEdgeCut[i]<<endl;
    }
}
int main() {
    vector<Edge> graph[4];

    // Make the graph in given example
    Edge e1(1, 5);
    Edge e2(2, 8);
    Edge e3(0, 5);
    Edge e4(2, 10);
    Edge e5(3, 15);
    Edge e6(0, 8);
    Edge e7(1, 10);
    Edge e8(3, 20);
    Edge e9(1, 15);
    Edge e10(2, 20);

    graph[0].push_back(e1);
    graph[0].push_back(e2);
    graph[1].push_back(e3);
    graph[1].push_back(e4);
    graph[1].push_back(e5);
    graph[2].push_back(e6);
    graph[2].push_back(e7);
    graph[2].push_back(e8);
    graph[3].push_back(e9);
    graph[3].push_back(e10);

    // Find MST using Prim's Algorithm and print it
    findPrintMST(graph, 4);

    return 0;
}
