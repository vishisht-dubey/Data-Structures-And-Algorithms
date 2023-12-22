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

// Top View of a Binary Tree
vector<int> topView(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    map<int, int> m;
    // Node *k = NULL;
    while (!q.empty())
    {
        Node *k = q.front().first;
        int d = q.front().second;
        q.pop();
        if (m.find(d) == m.end())
        {
            m[d] = k->data;
        }
        if (k->left)
        {
            q.push({k->left, d - 1});
        }
        if (k->right)
        {
            q.push({k->right, d + 1});
        }
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        result.push_back(it->second);
    }
    return result;
}

int main()
{
    Node *temp = new Node(10);
    temp->left = new Node(20);
    temp->right = new Node(30);
    temp->right->left = new Node(40);
    temp->right->right = new Node(50);
    // Node *result = LCA_one(temp, 20, 30);
    // Node *result = topView(temp);
    // cout << result->data << endl;
    vector<int> answer = topView(temp);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}