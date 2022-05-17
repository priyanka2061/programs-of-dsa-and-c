// find connected component in graph..
// cycle detection in graph
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];
bool dfs(int vertex, int par)
{
    bool isLoopExists = false;
    visited[vertex] = true;
    cout << vertex << endl;
    for (int i : g[vertex])
    {

        cout << i << " " << vertex << endl;
        // logic of detection
        if (visited[i] && i == par)
            continue;
        if (visited[i])
            return true;
        isLoopExists |= dfs(i, vertex);
    }
    return isLoopExists;
}
int main()
{
    int n, m, count = 0;
    int v1, v2;
    cout << " enter a number of vertex and edge" << endl;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cout << " enter a vertex for edge" << endl;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExists;
    for (int i = 1; i <= n; ++i)
    {
        if (visited[i])
            continue;
        // detection
        if (dfs(i, 0))
        {
            isLoopExists = true;
            break;
        }
        count++;
    }
    cout << "\n number of connected component in graph"
         << " " << count << endl;
    // cycle detection

    cout << "loop exists or not" << isLoopExists << endl;
}

/**
 * connected component
 * time complexity  = o(V+E)
 * more than one connected component exit in graph is called forest **/