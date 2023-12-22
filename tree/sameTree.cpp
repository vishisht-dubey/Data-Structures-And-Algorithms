#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left = NULL;
    Node *right = NULL;
    Node(int d)
    {
        data = d;
    }
};

vector<Node *> v;

int getDepth(Node *n, int d)
{
    if (n == NULL)
        return -1;
    int depth = max(getDepth(n->left, d), getDepth(n->right, d)) + 1;
    if (depth == d)
    {
        v.push_back(n);
    }
    return depth;
}

bool identical(Node *n1, Node *n2)
{
    if (n1 == NULL && n2 == NULL)
        return true;
    if (n1 == NULL || n2 == NULL || n1->data != n2->data)
        return false;

    return identical(n1->left, n2->left) && identical(n1->right, n2->right);
}

bool isSubTree(Node *T, Node *S)
{
    // Your code here
    if (!T && !S)
        return true;
    if (!T || !S)
        return false;

    getDepth(T, getDepth(S, -1));
    for (Node *a : v)
    {
        if (identical(a, S))
            return true;
    }
    return false;
}

int main()
{
    return 0;
}