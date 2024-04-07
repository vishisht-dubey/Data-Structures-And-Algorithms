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

// Find the Kth Ancestor of a binary tree node
int answer = -1;
int getKthAncestor(Node *root, int k, int n)
{
    if (root == NULL)
        return -1;
    if (root->data == n)
        return 0;
    int left = getKthAncestor(root->left, k, n);
    int right = getKthAncestor(root->right, k, n);
    if (left == -1 && right == -1)
        return -1;
    else if (left != -1)
    {
        if (left + 1 == k)
        {
            answer = root->data;
            return k;
        }
        else
            return left + 1;
    }
    else if (right != -1)
    {
        if (right + 1 == k)
        {
            answer = root->data;
            return k;
        }
        else
            return right + 1;
    }
}

int main()
{
    Node *temp = new Node(2);
    temp->left = new Node(1);
    temp->right = new Node(3);
    // cout<<completeBT(temp)<<endl;
    return 0;
}