#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<long long int> v;
        long long int sum = 0;
        long long int count =0;
        set<long long int> s;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            v.push_back(x);
            s.insert(x);
            sum=sum+x;
            if(x==1){
                count++;
            }
        }
        if(sum>=count+n&&n>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}