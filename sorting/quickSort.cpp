#include <bits/stdc++.h>
using namespace std;

int hoarePartition(int arr[],int left,int right){
    int i=left-1,j=right+1;
    int pivot = arr[left];
    while(true)
    {do{
        i++;
    }while(arr[i]<pivot);

    do{
        j--;
    }while(arr[j]>pivot);
    if(i>=j)
    return j;
    swap(arr[i],arr[j]);}
}

int lomutoPartition(int arr[],int left,int right){
    int pivot = arr[right];
    int count = 0;
    for(int i=left;i<right;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    swap(arr[count],arr[right]);
    return count;
}

void quickSort(int arr[],int left,int right){
    if(left<right){
        // int p = hoarePartition(arr,left,right);
        int p = lomutoPartition(arr,left,right);
        quickSort(arr,left,p-1);
        quickSort(arr,p+1,right);
        return ;
    }

    return ;          
}

int main(){

    int arr[8] = {1,5,2,8,5,7,34,53};
    quickSort(arr,0,7);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}