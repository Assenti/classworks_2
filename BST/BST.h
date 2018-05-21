#pragma once
#include "BSTNode.h"
template <typename Type>
class BST
{
	BSTNode<Type> *root;
	void addBSTNodeIfRootExists(BSTNode<Type> *root, const Type & value)
	{
		if (value < root->value)
		{
			if (root->left == nullptr)
			{
				root->left = new BSTNode<Type>(value);
			}
			else
			{
				addBSTNodeIfRootExists(root->left, value);
			}
		}
		else
		{
			if (root->right == nullptr)
			{
				root->right = new BSTNode<Type>(value);
			}
			else
			{
				addBSTNodeIfRootExists(root->right, value);
			}
		}
	}
public:
	void addBSTNode(const Type & value)
	{
		if (root == nullptr)
		{
			root = new BSTNode<Type>(value);
		}
		else
		{
			addBSTNodeIfRootExists(root, value);
		}
	}
	BST()
	{
		root = nullptr;
	}
	~BST() {}
};