#include <bits/stdc++.h>
using namespace std;

vector<int> naivePartition(int arr[],int n,int p){
      vector<int> result;
      for(int j=0;j<n;j++){
        if(arr[j]<p)
        {result.push_back(arr[j]);}
      }
      for(int j=0;j<n;j++){
        if(arr[j]==p)
        {result.push_back(arr[j]);}
      }
      for(int j=0;j<n;j++){
        if(arr[j]>p)
        {result.push_back(arr[j]);}
      }
      return result;
}

int main(){

    int arr[9]={3,7,4,5,1,9,4,6,12};
    int n=9;
    int p = 4; 
    vector<int> result = naivePartition(arr,9,7);
    
    for(int j=0;j<result.size();j++){
        cout<<result[j]<<" ";
    }cout<<endl;
    return 0;
}