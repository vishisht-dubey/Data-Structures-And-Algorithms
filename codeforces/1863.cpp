#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<pair<int,int>> v;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            v.push_back({x,j});
        }
        sort(v.begin(),v.end());
        int count = 0;
        for(int j=0;j<n-1;j++){
            if(v[j].second>v[j+1].second)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}



