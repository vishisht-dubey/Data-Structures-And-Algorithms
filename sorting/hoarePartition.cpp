#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[9] = {5,9,3,1,6,1,2,8,4};
    int p = 5;
    int i=-1,j=9;
    while(true){
       do{
        i++;
       }while(arr[i]<p);
        
       do{
        j--;
       }while(arr[j]>p);

       if(i>=j){return j;}
       swap(arr[i],arr[j]);
    }
    for(int j=0;j<9;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}