// A point removal of which creates two or more different connected components is called as articulation point.
#include <bits/stdc++.h>
using namespace std;

void dfsTrav(vector<int> adj[], int u, vector<bool> &result, vector<bool> &visited, vector<int> &low, vector<int> &disc, int parent, int &timing)
{
    visited[u] = true;
    result.push_back(u);
    disc[u] = low[u] = timing++;
    int children = 0;
    for (auto j : adj[u])
    {
        if (!visited[j])
        {
            children++;
            dfsTrav(adj, j, result, visited, low, disc, u, timing);
            low[u] = min(low[u], low[j]);
            if (parent != -1 && low[j] >= disc[u])
                result[u] = true;
        }
        else if (j != parent)
            low[u] = min(low[u], disc[j]);
    }
    if (parent == -1 && children > 1)
        result[u] = true;
}

vector<int> articulationPoints(int V, vector<int> adj[])
{
    // Code here
    vector<bool> visited(V, false);
    vector<int> low(V, 0);
    vector<int> disc(V, 0);
    int parent = -1;
    int timing = 0;
    vector<bool> result(V, false);
    dfsTrav(adj, 0, result, visited, low, disc, parent, timing);
    vector<int> answer;
    for (int i = 0; i < V; i++)
    {
        if (result[i])
            answer.push_back(i);
    }
    if (answer.size() == 0)
        answer.push_back(-1);

    return answer;
}

int main()
{
    // provide the adjacency list of graph and you will be able to get the answer
    return 0;
}