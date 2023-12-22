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
vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> v;
        if(root==NULL)
        return v;
        queue<pair<Node *,int>> q;
        map<int,int> m;
        q.push({root,0});
        while(!q.empty()){
            Node *temp = q.front().first;
            int d = q.front().second;
            q.pop();
            if(m.find(d)==m.end()){
                m[d]=temp->data;
            }
            else if(m.find(d)!=m.end()){
                m[d]=temp->data;
            }
            if(temp->left){
                q.push({temp->left,d-1});
            }
            if(temp->right){
                q.push({temp->right,d+1});
            }
        }
        for(auto it=m.begin();it!=m.end();it++){
            v.push_back(it->second);
        }
        return v;
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
    vector<int> answer = bottomView(temp);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}