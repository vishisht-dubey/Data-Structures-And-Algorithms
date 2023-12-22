// Open Addressing

struct MyHash{
    int BUCKET;
    int *arr;
    int size;

    MyHash(int n){
        BUCKET=n;
        size=0;
        for(int i=0;i<BUCKET;i++){
            arr[i]=-1;
        }
    }

    int hash(int key)
    {
        return key%BUCKET;
    }

    bool search_element(int key){
        int h = hash(key);
        int i = h;
        while(arr[i]==-1){
            if(arr[i]==key){
                return true;
            }
            i=(i+1)%BUCKET;
            if(i==h)
            return false;
        }
        return false;
    }

    bool insert_element(int key){
        if(size==BUCKET)
        return false;
        int h= hash(key);
        int i = h;
        while(arr[i]!=key&&arr[i]!=-1&&arr[i]!=-2){
            i=(i+1)%BUCKET;
        }
        if(arr[i]==key)
        return false;
        else{
            size++;
            arr[i]=key;
            return true;
        }
    }

    bool erase_element(int key){
        int h = hash(key);
        int i =h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%BUCKET;
            if(i==h)
            return false;
        }
        return false;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main(){

    return 0;
}






// priority_queue<int> pq;
//         for(int i=0;i<n;i++){
//             pq.push(arr[i]);
//         }
//         int height = 10e9;
//         while(!pq.empty()){
//             int x = pq.front();
//             int y = pq.back();
//             height = min(height,y-x);
//             if(x>k&&y>k)
//         }