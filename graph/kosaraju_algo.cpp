// Implementation of kosaraju's algorithm
// This is basically used to find the strongest connected components in a graph
#include <bits/stdc++.h>
using namespace std;

	
	int kosarajuAlgo(vector<vector<int>> graph,int V){
    stack<int> trav;
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFSKosaraju(graph,i,trav,visited);
        }
    }
    vector<int> transpose_adj[V];
    for(int i=0;i<V;i++){
   
        for (auto v : graph[i])
            transpose_adj[v].push_back(i);
    }
    int ans = 0;
   vector<bool> visited_res(V,false);
  while(!trav.empty()){
        int k = trav.top();
        trav.pop();
        if(!visited_res[k]){
        DFSRec(transpose_adj,k,visited_res);ans++;}
    }
    return ans;
}

void DFSRec(vector<int> transpose_adj[],int u, vector<bool> &visited){
        visited[u]=true;
        
        for(auto j:transpose_adj[u]){
            if(!visited[j])
            DFSRec(transpose_adj,j,visited);
        } 
        return ;
}

void DFSKosaraju(vector<vector<int>> graph,int u, stack<int> &trav, vector<bool> &visited){
        visited[u]=true;
        for(auto j:graph[u]){
            if(!visited[j])
            DFSKosaraju(graph,j,trav,visited);
        }
        trav.push(u);
        return ;
}
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        return kosarajuAlgo(adj,V);
    }

	
	int kosarajuAlgo(vector<vector<int>> graph,int V){
    stack<int> trav;
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            DFSKosaraju(graph,i,trav,visited);
        }
    }
    vector<int> transpose_adj[V];
    for(int i=0;i<V;i++){
   
        for (auto v : graph[i])
            transpose_adj[v].push_back(i);
    }
    int ans = 0;
   vector<bool> visited_res(V,false);
  while(!trav.empty()){
        int k = trav.top();
        trav.pop();
        if(!visited_res[k]){
        DFSRec(transpose_adj,k,visited_res);ans++;}
    }
    return ans;
}

void DFSRec(vector<int> transpose_adj[],int u, vector<bool> &visited){
        visited[u]=true;
        
        for(auto j:transpose_adj[u]){
            if(!visited[j])
            DFSRec(transpose_adj,j,visited);
        } 
        return ;
}

void DFSKosaraju(vector<vector<int>> graph,int u, stack<int> &trav, vector<bool> &visited){
        visited[u]=true;
        for(auto j:graph[u]){
            if(!visited[j])
            DFSKosaraju(graph,j,trav,visited);
        }
        trav.push(u);
        return ;
}
	
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        return kosarajuAlgo(adj,V);
    }



// TC: O(V+E)
// Tarjan's algorithm is better than kosaraju's algorithm for finding the strongest connected components