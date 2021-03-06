// Trees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Node creation for building the tree
struct Node
{
	int data_ = 0;
	struct Node *right, *left;
	Node(int data)
	{
		this->data_ = data;
		right = NULL;
		left = NULL;
	}
};

//In-Order Traversal implementation
void InOrder(Node *root)
{
	if (root == NULL)
		return;

	InOrder(root->left);

	cout << root->data_ << " ";

	InOrder(root->right);

};

//Pre-Order Traversal implementation
void PreOrder(Node *root)
{
	if (root == NULL)
		return;

	cout << root->data_ << " ";

	PreOrder(root->left);

	PreOrder(root->right);
}

//Post-Order Traversal implementation

void PostOrder(Node *root)
{
	if (root == NULL)
		return;

	PostOrder(root->left);

	PostOrder(root->right);

	cout << root->data_ << " ";
}

int main()
{
	//Creation tree
	struct  Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);

	//Calling Inorder traversal
	cout << "InOrder" << "\n";
	InOrder(root);
	cout << "\n";

	//Calling Preoder traversal
	cout << "PreOrder" << "\n";
	PreOrder(root);
	cout << "\n";

	//Calling Post traversal
	cout << "PostOrder" << "\n";
	PostOrder(root);
	cout << "\n";

	return 0;
}


