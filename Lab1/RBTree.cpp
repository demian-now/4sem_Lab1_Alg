#include "RBTree.h"
#define NULL 0

template<class Key_Type, class Value_Type>
RedBlackTree<Key_Type, Value_Type>::Node::Node(Key_Type Key, Value_Type Value, Node* parent, Node* left, Node* right, Color COLOR)
{
	this->Key = Key;
	this->Value = Value;
	this->left = left;
	this->right = right;
	this->parent = parent;
	this->COLOR = COLOR;
}

template<class Key_Type, class Value_Type>
RedBlackTree<Key_Type, Value_Type>::Node::~Node()
{
	
}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::recovery(Node*)
{

}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::leftRotate(Node*)
{

}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::rightRotate(Node*)
{

}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::recoveryRemove(Node* x)
{

}

template<class Key_Type, class Value_Type>
RedBlackTree<Key_Type, Value_Type>::RedBlackTree()
{
	nil = new Node(0, 0, nullptr, nullptr, nullptr, 1);
	root = nil;
	size = 0;
}

template<class Key_Type, class Value_Type>
RedBlackTree<Key_Type, Value_Type>::~RedBlackTree()
{
	clear(); 
	delete root;
}


template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::insert(Key_Type, Value_Type)
{

}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::remove(Key_Type)
{

}

template<class Key_Type, class Value_Type>
Value_Type RedBlackTree<Key_Type, Value_Type>::find(Key_Type)
{
	return Value_Type();
}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::clear()
{

}

template<class Key_Type, class Value_Type>
Key_Type* RedBlackTree<Key_Type, Value_Type>::get_keys()
{
	return NULL;
}

template<class Key_Type, class Value_Type>
Value_Type* RedBlackTree<Key_Type, Value_Type>::get_values()
{
	return NULL;
}

template<class Key_Type, class Value_Type>
void RedBlackTree<Key_Type, Value_Type>::print()
{
}

template<class Key_Type, class Value_Type>
int RedBlackTree<Key_Type, Value_Type>::get_size()
{
	return size;
}
