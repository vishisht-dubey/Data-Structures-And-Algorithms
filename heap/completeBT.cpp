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

// Function to check whether a tree is a complete binary tree or not
bool completeBT(Node *root){
    if(root==NULL)
    return true;
    queue<Node *> q;
    q.push(root);
    int check=0;bool ans = true;
    while(q.size()>0){
        Node *x = q.front();
        q.pop();
        if(check==1&&x!=NULL){
            ans = false;
        }
        if(x==NULL)
        check=1;
        else{
            q.push(x->left);
            q.push(x->right);
        }
    }
    return ans;
}

int main(){
    Node *temp = new Node(2);
    temp->left = new Node(1);
    temp->right = new Node(3);
    cout<<completeBT(temp)<<endl;
    return 0;
}