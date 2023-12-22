// Getting started with tree
#include <bits/stdc++.h>
using namespace std;

// binary tree
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// void printTree(Node *root)
// {
//     Node *temp = root;
//     if (root->left == NULL)
//         return;
//     if (root->right == NULL)
//         return;
//     // cout << root->left->key << endl;
//     // cout << root->right->key << endl;
//     // cout << root->key << endl;
//     if (root->left != NULL)
//     {
//         root = root->left;
//         printTree(root);
//     }
//     if (temp->right != NULL)
//     {
//         temp = temp->right;
//         printTree(temp);
//     }
// }

// Inorder Tree Traversal (left root right)
void printInorderTree(Node *root)
{
    if (root != NULL)
    {
        printInorderTree(root->left);
        cout << root->key << " ";
        printInorderTree(root->right);
    }
    return;
}

// Preorder Tree Traversal (root left right)
void printPreorderTree(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        printPreorderTree(root->left);
        printPreorderTree(root->right);
    }
    return;
}

// Postorder Tree Traversal (left right root)
void printPostorderTree(Node *root)
{
    if (root != NULL)
    {
        printPostorderTree(root->left);
        printPostorderTree(root->right);
        cout << root->key << " ";
    }
    return;
}

int heightOfBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right)) + 1;
}

//  Construction of binary tree from preorder and inorder traversal
int preIndex = 0;
Node *getTree_one(int in[], int pre[], int start, int end)
{
    if (start > end)
        return NULL;
    Node *temp = new Node(pre[preIndex++]);
    int inIndex;
    for (int i = start; i <= end; i++)
    {
        if (in[i] == temp->key)
        {
            inIndex = i;
            break;
        }
    }
    temp->left = getTree_one(in, pre, start, inIndex - 1);
    temp->right = getTree_one(in, pre, inIndex + 1, end);
    return temp;
}

//  Construction of binary tree from postorder and inorder traversal
int postIndex = -1;
Node *getTree_two(int in[], int post[], int start, int end)
{
    if (start > end)
        return NULL;
    if(postIndex==-1)
    {postIndex=end;}
    Node *temp = new Node(post[postIndex--]);
    int poIndex;
    for (int i = start; i <= end; i++)
    {
        if (in[i] == temp->key)
        {
            poIndex = i;
            break;
        }
    }
    temp->right = getTree_two(in, post, poIndex + 1, end);
    temp->left = getTree_two(in, post, start, poIndex - 1);
    return temp;
}


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
    Node *root_three = new Node(10);
    root_three->left = new Node(20);
    root_three->right = new Node(30);

    // defining value for sub node
    root_three->left->left = new Node(40);
    root_three->left->right = new Node(50);

    root_three->left->right->left = new Node(70);
    root_three->left->right->right = new Node(80);

    // root_two->right->left = new Node(27);
    root_three->right->right = new Node(640);
    // if(root_two->right->left!=NULL)
    // cout<<"HII"<<endl;
    // else
    // cout<<"HELLO"<<endl;
    //    cout<<root_two->right->left->left->key<<endl;
    // printTree(root_two);
    // cout << "Inorder Tree Traversal" << endl;
    // printInorderTree(root_two);
    // cout << endl;
    // cout << "Preorder Tree Traversal" << endl;
    // printPreorderTree(root_two);
    // cout << endl;
    // cout << "Postorder Tree Traversal" << endl;
    // printPostorderTree(root_two);

    // // height of binary tree
    cout << "Height of the given binary tree is"
         << " " << heightOfBinaryTree(root_two) << endl;
    int in[5]= {20,10,40,30,50};
    int pre[5]= {10,20,30,40,50};
    int post[5]= {20,40,50,30,10};
    // Node *result = getTree_one(in,pre,0,4);
    // printPostorderTree(result);
    Node *result = getTree_two(in,post,0,4);
    // printPreorderTree(result);
    cout<<endl;
    return 0;
}
