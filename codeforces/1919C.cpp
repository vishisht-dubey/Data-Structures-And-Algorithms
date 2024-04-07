#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        int t1 = INT_MAX,t2 = INT_MAX;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        int count = 0;
        for(int i=0;i<n;i++){
            int x = v[i];
            if(t1>t2)
            swap(t1,t2);
            if(x<=t1)
            t1=x;
            else if(x<=t2)
            {
               t2 = x;
            }
            else{
                t1=x;
                count++;
            }
        }
         cout<<count<<endl;
    }
    return 0;
}