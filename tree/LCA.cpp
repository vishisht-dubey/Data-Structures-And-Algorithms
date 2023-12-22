// Lowest Common Ancestor of Binary Tree
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

// Naive Method

bool findPath(Node *root, vector<Node *> &v, int n)
{
    if (root == NULL)
        return false;
    v.push_back(root);
    if (root->data == n)
        return true;
    if (findPath(root->left, v, n) || findPath(root->right, v, n))
    {
        return true;
    }
    v.pop_back();
    return false;
}

Node *LCA_one(Node *root, int n1, int n2)
{
    vector<Node *> result_one;
    vector<Node *> result_two;
    findPath(root, result_one, n1);
    findPath(root, result_two, n2);
    for (int i = 0; i < result_one.size(); i++)
    {
        if (result_one[i + 1] != result_two[i + 1])
        {
            return result_one[i];
        }
    }
    return NULL;
}

// Efficient Approach
// Based on condition that either n1 or n2 is present

Node *LCA_two(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    Node *lca_right = LCA_two(root->right, n1, n2);
    Node *lca_left = LCA_two(root->left, n1, n2);
    if (lca_right != NULL && lca_left != NULL)
        return root;
    if (lca_right == NULL)
        return lca_left;
    else
        return lca_right;
}

int main()
{
    Node *temp = new Node(10);
    temp->left = new Node(20);
    temp->right = new Node(30);
    temp->right->left = new Node(40);
    temp->right->right = new Node(50);
    // Node *result = LCA_one(temp, 20, 30);
    Node *result = LCA_two(temp, 20, 30);
    cout << result->data << endl;
    return 0;
}