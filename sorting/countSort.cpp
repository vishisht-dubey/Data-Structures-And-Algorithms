#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n){
    int max_value=0;
    for(int i=0;i<n;i++){
            max_value = max(max_value,arr[i]);
    }
    int size_of_new_array = max_value+1;
    int new_arr[size_of_new_array];
    for(int i=0;i<size_of_new_array;i++){
        new_arr[i]=0;
    }
    for(int i=0;i<n;i++){
        new_arr[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<size_of_new_array;i++){
        if(new_arr[i]!=0){
            while(new_arr[i]>0){
                arr[index]=i;
                index++;
                new_arr[i]--;
            }
        }
    }
}

int main(){
    int arr[9]={3,1,15,7,2,116,9,4,11};
    int n=9;
    countSort(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }cout<<endl;
    return 0;
}