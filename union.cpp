#include <bits/stdc++.h>
using namespace std;

void unionTwoSortedArray(int arr1[],int n,int arr2[],int m){
       int i=0,j=0;
       while(i<n&&j<m){
        if(i>0&&arr1[i]==arr1[i-1]){i++;}
        if(j>0&&arr2[j]==arr2[j-1]){j++;}
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        if(arr1[i]==arr2[j]){
            cout<<arr2[j]<<" ";
            j++;i++;
        }
       }
       while(i<n){
        if(arr1[i]!=arr1[i+1]&&i>0){
            cout<<arr1[i]<<" ";
        }
          i++;
       }
       while(j<m){
        if(arr2[j]!=arr2[j+1]&&j>0){
           
            cout<<arr2[j]<<" ";
        }
         j++;
       }
       cout<<endl;
}


int main(){
    int arr1[8] = {1,2,3,4,4,5,6,7};
    int arr2[6] = {5,7,8,9,9,11};
    unionTwoSortedArray(arr1,8,arr2,6);
    return 0;
}