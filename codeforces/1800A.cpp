#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        string s;cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string result="";
        for(int j=0;j<n-1;j++){
            if(s[j]!=s[j+1]){
                result=result+s[j];
            }
        }
        result = result + s[n-1];
        if(result=="meow")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}