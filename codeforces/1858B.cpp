// Incomplete solution
// saved this for future reference
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        long long int n,m,d;
        cin>>n>>m>>d;
        vector<long long int> v;
        for(long long int j=0;j<m;j++){
            long long int x;cin>>x;
            v.push_back(x);
        }
        long long int answer_one=0,answer_two=0;
        long long int cookie = 0;
        long long int D = d;
        vector<long long int> chairs;
        for(long long int k=0;k<n;k++){
            chairs.push_back(k+1);
        }
        cookie=1;
        int index = 0;
        D=D-1;
        for(long long int j=1;j<n;j++){
            // if(chairs[index]==j&&j!=n-1&&D!=0){
                //   answer_two++;
                //   index++;
                // }
            if(D==0&&chairs[index]==j){
                answer_two=answer_two;
                index++;
            }
            if(D!=0&&chairs[index]==j){
                answer_two++;
                index++;
            }
             if(D==0){
                cookie++;
                D=d;
              
            }
              
            D--;
        }
    }
    return 0;
}
