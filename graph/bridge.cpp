// The edge of the graph removal of which creates two or more connected components is called a bridge.
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<int>& visited,vector<int>& lev,vector<int>& dp,vector<int>& par,int c,vector<int> adj[]){
        visited[c]=1;
        int mn=lev[c];
        for(auto j:adj[c]){
            if(!visited[j]){
                lev[j]=lev[c]+1;
                par[j]=c;
                mn=min(mn,dfs(visited,lev,dp,par,j,adj));
            }
            else if(visited[j] && j!=par[c]){
                mn=min(mn,lev[j]);
            }
        }
        return dp[c]=mn;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        if(c==d)
        return 0;
        int count = 0;
        for(int j:adj[c]){
            if(j==d)
            count++;
        }
        if(count>1)
        return 0;
        vector<int> visited(V),lev(V),dp(V),par(V);
        dfs(visited,lev,dp,par,c,adj);
        if(dp[d]==lev[d])
        return 1;
        return 0;
    }

int main(){
    // provide the adjacency list of graph to generate the output
    return 0;
}