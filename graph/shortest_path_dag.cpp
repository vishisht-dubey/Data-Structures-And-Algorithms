// Shortest Path in a directed acyclic graph using topologial sorting algorithm
// This is also called as Kahn's BFS based algorithm

#include <bits/stdc++.h>
using namespace std;

// Topological Sort
vector<int> topologicalSort(vector<int> adj[],int V){
    vector<int> indegree(V,0);
    vector<int> topo;
    for(int i=0;i<V;i++){
        for(auto j:adj[i]){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0)
        q.push(i);
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        topo.push_back(u);
        for(auto v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0)
                q.push(v);
        }
    }
    return topo;
}

int main(){
   // No. of vertex
   int V;cin>>V;
   int src;cin>>src;
   vector<int> adj[V];
   // fill the adj[V] before using
   
   // vector obtained after topological sorting
   vector<int> topo = topologicalSort(adj,V);
   vector<int> dist(V,INT_MAX);
   dist[src]=0;
   for(int i=0;i<V;i++){
    for(auto v:adj[i]){
        if(dist[v]>dist[i]+1)
        dist[v]=dist[i]+1;
    }
   }
   // The dist vertex will contain shortest path in a directed acyclic graph
}