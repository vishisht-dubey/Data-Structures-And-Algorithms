#include <bits/stdc++.h>
using namespace std;

// Breadth First Of Graph
// Approach 1 => Where source is given and graph is connected


// adjacency list
void bfs_list(vector<int> adj[],int vertex,vector<int> &result,vector<bool> visited){
   queue<int> q;
   q.push(vertex);
   visited[vertex] = true;
   while(!q.empty()){
    int k = q.front();
    q.pop();
    result.push_back(k);
    for(auto l:adj[k]){
        if(!visited[l]){
            visited[l] = true;
            q.push(l);
        }
    }
   }
   return ; 
}

// adjacency matrix
void bfs_matrix(int row, int col, vector<vector<bool>>& vis, vector<vector<int>> &grid,vector<int> &result) {
        vis[row][col] = true;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
         result.push_back(grid[r][c]);
            for (auto dir : directions) {
                int nRow = dir.first + r;
                int nCol = dir.second + c;
                if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && !vis[nRow][nCol] && grid[nRow][nCol] == '1') {
                    vis[nRow][nCol] = true;
                    q.push({nRow, nCol});
                }
            }
        }
    }

// Approach 2 => When Source is not given and graph is not connected
void bfs_list_dis(vector<int> adj[],int size){
    vector<bool> visit(size,false);
    vector<int> result;
    for(int i=0;i<size;i++){
        if(!visit[i]){
            bfs_list(adj,i,result,visit);
        }
    }
}

void bfs_matrix_dis(vector<vector<int>> adj,int size){
    vector<vector<bool>> visit(adj.size(),vector<bool>(adj[0].size(),false));
    vector<int> result;
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            if(!visit[i][j]&&adj[i][j]==1){
            bfs_matrix(adj.size(),adj[i].size(),visit,adj,result);
        }
        }
    }
}

// Conversion from adjacency matrix to adjacency list
void adj_matrix_to_adj_list(vector<vector<int>>& edges,int n,int m){
     // edges is the adjacency matrix
     // n is number of vertices
     // e is number of edges
     vector<int> adj_list[n+1];
     for(int i=0;i<m;i++){  
        int u = edges[i][0];
        int v = edges[i][1];
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
     }
     return ;
}

// depth first traversal

// Adjacency List
void dfs_list_recur(vector<bool> &visited,vector<int> &result,vector<int> adj[],int s){
    visited[s]=true;
    result.push_back(s);
    for(auto m:adj[s]){
        if(visited[m]==false){
            dfs_list_recur(visited,result,adj,m);
        }
    }
    return ;
}
vector<int> dfs_list(int V,vector<int> adj[]){
    vector<bool> visited(V);
    vector<int> result;
    dfs_list_recur(visited,result,adj,0);
    return result;
}


int main(){
    return 0;
}