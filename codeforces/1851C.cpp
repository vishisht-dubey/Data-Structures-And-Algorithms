#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            v.push_back(x);
        }
        int startCount = 0;
        int start = v[0];
        int endCount = 0;
        int previousIndex = 0;
        int end = v[n-1];
        for(int j=n-1;j>=0;j--){
                if(v[j]==end){
                    endCount++;
                }
                if(endCount==k){
                    previousIndex=j;
                    break;
                }
        }
        for(int j=previousIndex;j>=0;j--){
                if(v[j]==start){
                    startCount++;
                }
                if(startCount==k){
                    previousIndex=j;
                    break;
                }
        }
        if(startCount+endCount==2*k){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}