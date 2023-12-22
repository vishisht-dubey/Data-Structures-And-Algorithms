// 1862 B

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int m;
//         cin >> m;
//         vector<long long int> v;
//         for (int j = 0; j < m; j++)
//         {
//             long long int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         int check = 0, check_one = 0, check_two = 0;
//         for (int j = 0; j < m - 1; j++)
//         {
//             if (v[j + 1] >= v[j])
//                 check++;
//         }
//         int index = 0;
//         for (int j = 0; j < m - 1; j++)
//         {
//             if (v[j + 1] >= v[j])
//                 check_one++;
//             else if (v[j + 1] < v[j])
//             {
//                 index = j;
//                 check_two++;
//             }
//             else
//                 break;
//         }
//         if (check == m - 1)
//         {
//             cout << m << endl;
//             for (int j = 0; j < m; j++)
//             {
//                 cout << v[j] << " ";
//             }
//             cout << endl;
//         }
//         else if (check_one + check_two == m - 1)
//         {
//             vector<long long int> result;
//             cout << m+1 << endl;
//             for (int j = 0; j <= index; j++)
//             {
//                 cout << v[j] << " ";
//             }
            
//                 cout << 1 << " ";
            
//             for (int j = index + 1; j < m; j++)
//             {
//                 cout << v[j] << " ";
//             }
//             cout<<endl;
//         }
//         else
//         {
//             vector<long long int> result(2 * m, 0);
//             cout<<2*m<<endl;
//             int index = 0;
//             for (int j = 0; j < 2 * m; j++)
//             {
//                 if (j % 2 == 0 && index < m)
//                 {
//                     result[j] = v[index];
//                     index++;
//                 }
//             }
//             for (int j = 1; j < 2 * m; j++)
//             {
//                 if (j % 2 != 0 && index < m)
//                 {
//                     result[j] =  1;
//                     index++;
//                 }
//             }
//             for (int j = 0; j < 2 * m; j++)
//             {
//                 cout << result[j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }





// {
//             // code here
//             int index=0;
//             int count=0;
//             for(int j=0;j<s.length();j++){
//                 if(s[j]=='.'){
//                     int current=j;
//                     count++;
//                     if(j-index-1==3||j-index-1==4){
//                         int k;
//                         if(j==3){
//                              k = stoi(s.substr(0,3));
//                         }
//                         else
//                       { k = stoi(s.substr(j-index,3));}
//                         index=j;
//                         if(k>255)
//                         {
//                             // cout<<"YES"<<endl;
                            
//                             return 0;
//                         }
//                     }
//                     else if(j-index-1==2){
//                         index=j;
//                         continue;
//                     }
//                     else if(j-index-1==1){
//                         index=j;
//                         continue;
//                     }
//                     else
//                     return 0;
//                     // int k1,k2,k3;
//                     // if(current-index==4||current-index==3){
//                     //      k1 = stoi(s.substr(j-3,3));
//                     //     // int k2 = stoi(s.substr(j-2,2));
//                     // // int k3 = stoi(s.substr(j-1,1));
//                     // if(k1>255)
//                     // {return 0;}
//                     // }
//                     // else if(current-index==2){
//                     //     // int k1 = stoi(s.substr(j-3,3));
//                     //      k2 = stoi(s.substr(j-2,2));

//                     // if(k2>255)
//                     // {return 0;}
//                     // }
//                     // else if(current-index==1){
//                     //  k3 = stoi(s.substr(j-1,1));
//                     // if(k3>255)
//                     // {return 0;}
//                     // }
//                     // else
//                     // return 0;
//                     index=j;
//                 }
//             }

//             if(count==3)
//             return 1;
            
//             return 0;
//         }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        string a,b;cin>>a>>b;
        bool possible=false;
        for(int j=0;j<a.length()-1;j++){
            if((a[j]=='0'&&b[j]=='0'&&a[j+1]=='1'&&b[j+1]=='1')||(a[j]=='1'&&b[j]=='1'&&a[j+1]=='0'&&b[j+1]=='0'))
            {
                possible=true;
                break;
                }
        }
        if(possible)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    
    return 0;
}
