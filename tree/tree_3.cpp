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
// iterative approach
void printInorderTree(Node *root)
{
	stack<Node *> s;
	Node *curr = root;
	while (curr != NULL || s.empty() == false)
	{
		while (curr != NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		Node *res = s.top();
		s.pop();
		cout << res->key << " ";
		curr = res->right;
	}
}

// Preorder Tree Traversal (root left right)
// S.C. O(n)
// void printPreorderTree(Node *root)
// {
// 	if (root == NULL)
// 		return;
// 	stack<Node *> s;
// 	s.push(root);

// 	while (s.empty() == false)
// 	{
// 		Node *temp = s.top();
// 		cout << temp->key << " ";
// 		s.pop();
// 		if (temp->right)
// 			s.push(temp->right);
// 		if (temp->left)
// 			s.push(temp->left);
// 	}
// }

// SC O(h)
void printPreorderTree(Node *root)
{
	if (root == NULL)
		return;
	stack<Node *> s;
	Node *curr = root;
	while (curr != NULL || s.empty() == false)
	{
		while (curr != NULL)
		{
			cout << curr->key << " ";
			if (curr->right)
				s.push(curr->right);
			curr = curr->left;
		}
		if (s.empty() == false)
		{
			
			curr = s.top();
			s.pop();
		}
	}
}




int heightOfBinaryTree(Node *root)
{
	if (root == NULL)
		return 0;
	else
		return max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right)) + 1;
}

//  Construction of binary tree from preorder and inorder traversal

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
	// if(root_two->right->left!=NULL)
	// cout<<"HII"<<endl;
	// else
	// cout<<"HELLO"<<endl;
	// cout<<root_two->right->left->left->key<<endl;
	// printTree(root_two);
	cout << "Inorder Tree Traversal" << endl;
	printInorderTree(root_two);
	cout << endl;
	cout << "Preorder Tree Traversal" << endl;
	printPreorderTree(root_two);
	cout << endl;
	cout << "Postorder Tree Traversal" << endl;
	// printPostorderTree(root_two);

	// // height of binary tree
	// cout << "Height of the given binary tree is"
	// 	 << " " << heightOfBinaryTree(root_two) << endl;
	int in[5] = {20, 10, 40, 30, 50};
	int pre[5] = {10, 20, 30, 40, 50};
	int post[5] = {20, 40, 50, 30, 10};
	// Node *result = getTree_one(in,pre,0,4);
	// printPostorderTree(result);
	cout << endl;
	return 0;
}
