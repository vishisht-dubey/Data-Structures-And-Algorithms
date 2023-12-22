// breadth first search / level order traversal
#include <bits/stdc++.h>
using namespace std;
// int count = 0;
struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int d)
    {
        key = d;
        left = NULL;
        right = NULL;
    }
};

void breathFirstSearch(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout << p->key << " ";
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    cout << endl;
}

// level order traversal part 1
void levelOrderTraversal1(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        Node *p = q.front();
        q.pop();
        if(p!=NULL)
        cout << p->key << " ";
        if (p == NULL)
        {
            cout << endl;
            q.push(NULL);
            continue;
        }
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
        //  count = max(count,int(q.size()));
    }
    cout << endl;
}

// level order traversal part 2
void levelOrderTraversal2(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *p = q.front();
            q.pop();
            cout << p->key << " ";
            if (p == NULL)
            {
                cout << endl;
                q.push(NULL);
            }
            if (p->left != NULL)
            {
                q.push(p->left);
            }
            if (p->right != NULL)
            {
                q.push(p->right);
            }
        }
          cout << endl;
    }
  
}

// // max width of a binary tree
// int getMaxWidth(Node* root) {

//        if (root == NULL)
//         return 0;

//         int count = 0;
//         queue<Node *> q;
//         q.push(root);
//         q.push(NULL);
//         while(q.size()>1){
//             Node *p = q.front();
//             q.pop();
//             if(p==NULL){
//                 q.push(NULL);
//                 continue;
//             }
//             if(root->left)
//             q.push(root->left);
//             if(root->right)
//             q.push(root->right);
//             count = max(count,int(q.size()));
//         }
//         return count-1;
//     }

int main()
{
    // empty tree
    Node *root_one = NULL;

    // non empty tree
    Node *root_two = new Node(10);
    root_two->left = new Node(20);
    root_two->right = new Node(30);

    // defining value for sub node
    root_two->left->left = new Node(40);
    root_two->left->right = new Node(50);

    root_two->left->right->left = new Node(70);
    root_two->left->right->right = new Node(80);

    // root_two->right->left = new Node(27);
    root_two->right->right = new Node(60);

    // breathFirstSearch(root_two);
    // cout<<"Level_Order_Traversal_1"<<endl;
    // levelOrderTraversal1(root_two);
    // cout<<"Level_Order_Traversal_2"<<endl;
    // levelOrderTraversal2(root_two);

    // maximum width of a binary tree
    // cout<<getMaxWidth(root_two)<<endl;

    return 0;
}