#include <bits/stdc++.h>
using namespace std;

#define V 100
#define INF INT_MAX

int min(int a, int b)
{
    return (a < b) ? a : b;
}

// Recursive function to find shortest path with exactly k edges
int shortestPath(int graph[V][V], int u, int v, int k, int n)
{
    if (k == 0 && u == v)
        return 0;
    if (k == 1 && graph[u][v] != 0)
        return graph[u][v];
    if (k <= 0)
        return INF;

    int res = INF;

    for (int i = 0; i < n; i++)
    {
        if (graph[u][i] != 0)
        {
            int subPath = shortestPath(graph, i, v, k - 1, n);
            if (subPath != INF)
                res = min(res, graph[u][i] + subPath);
        }
    }

    return res;
}

int main()
{
    cout << "Name: Krishna Bhatt\nRoll No: 42\n";

    int n, graph[V][V], u, v, k;
    cout << "Enter number of vertices:\n";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    cout << "Enter source, destination, and number of edges:\n";
    cin >> u >> v >> k;

    int result = shortestPath(graph, u - 1, v - 1, k, n);

    if (result == INF)
        cout << "No path of length " << k << " is available.\n";
    else
        cout << "Weight of shortest path from (" << u << "," << v << ") with " << k << " edges: " << result << "\n";

    return 0;
}
