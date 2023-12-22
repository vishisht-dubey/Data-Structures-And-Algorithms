#include <bits/stdc++.h>
using namespace std;
// naive approach
int getMaxArea(int arr[],int n){
     int area = 0;
     for(int i=0;i<n;i++){
        int current = arr[i];
        for(int j=i-1;j>=0;j--){
               if(arr[j]>=arr[i])
               current = current+arr[i];
               else
               break;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i])
            current = current+arr[i];
            else
            break;
        }
        area = max(area,current);
     }
     return area;
}

// Efficient Solution

vector<int> previousSmaller(int arr[],int n){
    vector<int> result;
    stack<int> s;
    // s.push(0);
    for(int i=0;i<n;i++){
        while(!s.empty()&&arr[s.top()]>=arr[i]){
            s.pop();
        }
        s.empty()?result.push_back(-1):result.push_back(s.top());
        s.push(i);
    }
    return result;
}

vector<int> nextSmaller(int arr[],int n){
    vector<int> result;
    stack<int> s;
    // s.push(n-1);
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&arr[s.top()]>=arr[i]){
            s.pop();
        }
        s.empty()?result.push_back(n):result.push_back(s.top());
        s.push(i);
    }
    reverse(result.begin(),result.end());
    return result;
}

int getMaximumArea(int arr[],int n){
    vector<int> ps = previousSmaller(arr,n);
      vector<int> ns = nextSmaller(arr,n);
    for(int i=0;i<n;i++){
        cout<<ps[i]<<" ";
    }cout<<endl;
     for(int i=0;i<n;i++){
        cout<<ns[i]<<" ";
    }cout<<endl;
  
    int res = 0;
    for(int j=0;j<n;j++){
      int current = arr[j];
      current = current + (j-1-ps[j])*arr[j];
      current = current + (ns[j]-j-1)*arr[j];
      res = max(res,current);
    }
    return res;
}

int main(){
    
    int arr[7] = {9,10,4,10,4,5,16};
    cout<<getMaxArea(arr,7)<<endl;
    cout<<getMaximumArea(arr,7)<<endl;
    return 0;
}