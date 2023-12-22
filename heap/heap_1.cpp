#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

int parentIndex(int index){
    return (index-1)/2;
}

int leftIndex(int index){
    return 2*index+1;
}

int rightIndex(int index){
    return 2*(index+1);
}

void insert(int x,vector<int> &v){
       v.push_back(x);
       int N = v.size();
       for(int i=N-1;i!=0;i--){
        if(v[i]<v[parentIndex(i)])
        {
            swap(v[i],v[parentIndex(i)]);
            i=parentIndex(i);
        }
       }
       return ;
}

// Heapify -> used to build heap or convert a faulty value to its actual position so that it follows heap property
void minHeapify(int index,vector<int> v){
        int smallest = index,left=leftIndex(index),right=rightIndex(index);
        if(left<v.size()&&v[index]>v[left]){
             smallest = left;
        }
        if(right<v.size()&&v[smallest]>v[right]){
            smallest = right;
        }
        if(smallest!=index){
              swap(v[smallest],v[index]);
              minHeapify(smallest,v);
        }
        return ;
} // TC : O(height of tree)  SC : O(height of tree)

// Extract the minimum value of Heap and return the remaining Heap
int extractMin(vector<int> v){
     if(v.size()==0)
     return INFINITY;
     if(v.size()==1)
     {
        int x = v[0];
        v.pop_back();
        return x;
     }
     swap(v[0],v[v.size()-1]);
     int k = v[v.size()-1];
     v.pop_back();
     minHeapify(0,v);
     return k;
     
}

int main(){
    vector<int> v;
    return 0;
}