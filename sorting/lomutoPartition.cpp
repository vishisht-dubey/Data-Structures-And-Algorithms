#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[9]={3,7,4,5,1,9,4,6,12};
    int n=9;
    int p = 7;
    // int count=0;
    // for(int j=0;j<n;j++){
    //     if(arr[j]<=p)
    //     {count++;}
    //   }
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]<p)
        {swap(arr[count],arr[j]);count++;}
      }
    
    for(int j=0;j<n;j++){
        if(arr[j]==p)
        {swap(arr[count],arr[j]);count++;}
      }
    
    
    for(int j=0;j<9;j++){
        cout<<arr[j]<<" ";
    }cout<<endl;
    return 0;
}