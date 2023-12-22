#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int middle,int right){
    int capacity_one = middle-left+1;
    int capacity_two = right-middle;
    int leftArray[capacity_one];
    int rightArray[capacity_two];
    for(int j=0;j<capacity_one;j++){
        leftArray[j]=arr[left+j];
    }
    
    
    for(int j=0;j<capacity_two;j++){
        rightArray[j]=arr[middle+1+j];
    }

    // important to note k should be equal to left because for two divided arrays left is zero for first one and middle+1 for the second so we need to make k equal to left

    int i=0,j=0,k=left;
    while(i<capacity_one&&j<capacity_two){
        if(leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            i++;
            k++;
        }
        else{
            arr[k]=rightArray[j];
            j++;k++;
        }
    }
    while(i<capacity_one){
        arr[k]=leftArray[i];
        i++;k++;
    }
    while(j<capacity_two){
        arr[k]=rightArray[j];
        j++;k++;
    }

    return;
}

void mergeSort(int arr[],int left,int right){
    if(left<right){
       int middle = left+(right-left)/2;
       mergeSort(arr,left,middle);
       mergeSort(arr,middle+1,right);
       merge(arr,left,middle,right); 
       return;
    }
    return;
}

int main(){
    int arr[9] = {23,34,12,5,45,56,8,1,39};
    mergeSort(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
