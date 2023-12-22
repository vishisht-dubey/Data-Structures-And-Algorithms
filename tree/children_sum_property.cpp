// Every root elements value should be equal to its corresponding left node's + right node's value
// This should applied for each node

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};

bool childrenSum(Node *root){
    int right_num = 0,left_num = 0;
    if(root==NULL||(root->left==NULL&&root->right==NULL)){
        return 1;
    }
    else{
        if(root->left)
        left_num = root->left->key;
        if(root->right)
        right_num = root->right->key;
        if(left_num+right_num==root->key&&childrenSum(root->left)&&childrenSum(root->right))
        return 1;

        return 0;
    }
}

int main(){
    Node *root = new Node(23);
    root->left = new Node(10);
    root->right = new Node(13);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(6);
    // root->right->right = new Node(7);

    cout<<childrenSum(root)<<endl;

    return 0;
}