#include <bits/stdc++.h>
using namespace std;
// Height of Tree for a complete Binany tree is log(N) where N is number of elements
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
       int i = v.size()-1;
       while(i!=0&&v[i]<v[parentIndex(i)]){
            swap(v[i],v[parentIndex(i)]);
            i=parentIndex(i);
       }
       return ;
}

// Heapify -> used to build heap or convert a faulty value to its actual position so that it follows heap property
void minHeapify(int index,vector<int> &v){
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
int extractMin(vector<int> &v){
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

// TC : O(height of tree)
void decreaseKey(int index,int value,vector<int> &v){
    v[index]=value;
    while(index!=0&&v[index]<v[parentIndex(index)]){
      swap(v[index],v[parentIndex(index)]);
      index = parentIndex(index);
    }
    return ;
}

// TC : O(height of tree)
void deleteElement(int index,vector<int> &v){
    decreaseKey(index,INT_MIN,v);
    extractMin(v);
    return ;
}

// TC : O(n) where n is number of elements
void buildHeap(vector<int> &v){
    for(int bottomMostIndex=(v.size()-2)/2;bottomMostIndex>=0;bottomMostIndex--){
        minHeapify(bottomMostIndex,v);
    }
}

int main(){
    vector<int> v;
    return 0;
}