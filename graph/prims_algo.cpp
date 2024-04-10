// Implementation of the prim's algorithm
#include <bits/stdc++.h>
using namespace std;

int primAlgo(vector<vector<int>> graph,int V){
    vector<bool> mSet(V,false);
    vector<int> key(V,INT_MAX);
    key[0] = 0;
    int res = 0;
    for(int i=0;i<V;i++){
        int u = -1;
        for(int j=0;j<V;j++){
            if(!mSet[j] && (u==-1 || key[j] < key[u])){
                u = j;
            }
        }
        mSet[u] = true;
        res=res+key[u];
        for(int j=0;j<V;j++){
            if(graph[u][j] &&!mSet[j]){
                key[j] = min(key[u],graph[u][j]);
            }
        }
    }
    return res;
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
    int mst = primAlgo(graph,V);
    return 0;
}

// Time Complexity
// Adjacency Matrix : O(V*2)
// Adjacency List : O((V+E)*log(V))