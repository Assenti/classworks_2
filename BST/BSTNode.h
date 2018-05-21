#pragma once
template <typename Type>
class BSTNode
{
public:
	Type value;
	BSTNode<Type> *left, *right;
	BSTNode(const Type & value)
	{
		this->value = value;
		left = right = nullptr;
	}
	~BSTNode() {}
};
