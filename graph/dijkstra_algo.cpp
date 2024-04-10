// Implementation of djikstra's algorithm
// Similiar to the prim's algorithm

// Shortest Path Algorithm

#include <bits/stdc++.h>
using namespace std;

vector<int> djikstraAlgo(vector<vector<int>> graph,int V,int src){
    vector<bool> finalised(V,false);
    vector<int> dist(V,INT_MAX);
    dist[src] = 0;
    for(int i=0;i<V;i++){
        int u = -1;
        for(int j=0;j<V;j++){
            if(!finalised[j] && (u==-1 || dist[j] < dist[u])){
                u = j;
            }
        }
        finalised[u] = true;
        for(int j=0;j<V;j++){
            if(graph[u][j] &&!finalised[j]){
                dist[j] = min(dist[j],dist[u]+graph[u][j]);
            }
        }
    }
    return dist;
}

int main(){
    // no of vertex
    int V;cin>>V;
    vector<vector<int>> graph(V,vector<int>(V,0));
    for(int i=0;i<V;i++){
       for(int j=0;j<V;j++){
        int x;cin>>x;
        graph[i][j]=x;
       }
    }
    vector<int> spa = djikstraAlgo(graph,V,0);
    return 0;
}