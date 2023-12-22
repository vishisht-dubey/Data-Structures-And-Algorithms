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

set<int> s;

bool isPair(Node *root, int target)
{
    if (root == NULL)
        return false;
    if (isPair(root->left, target))
        return true;
    if (s.find(root->data) == s.end())
        s.insert(target - root->data);
    else
        return true;
    return isPair(root->right, target);
}

int isPairPresent(Node *root, int target)
{
    int result = isPair(root, target);
    return result;
}

int main()
{
    Node *temp = new Node(2);
    temp->left = new Node(1);
    temp->right = new Node(3);
    cout << isPairPresent(temp, 8) << endl;
    return 0;
}