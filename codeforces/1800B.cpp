// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin >> t;
//    for (int i = 0; i < t; i++)
//    {
//       long long n;
//       cin >> n;
//       string s;cin>>s;
//       long long sValue=0;
//       long long result=n-1;
//       queue<char> q;
//       for(long long j=0;j<n-2;j++){
//            if(s[j]==s[j+2])
//            result--;
//       }
      
//       cout<<result<<endl;
//    }
//    return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;cin>>a>>b>>c;
        int x1 = a+b;
        int x2 = a+c;
        int x3 = c+b;
        if(x1>=10||x2>=10||x3>=10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}