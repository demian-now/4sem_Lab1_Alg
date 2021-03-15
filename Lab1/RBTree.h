#pragma once
#define NULL 0

enum Color {RED, BLACK};

template<class Key_Type, class Value_Type>
class RedBlackTree
{
private:

	class Node
	{
	public:
		Key_Type Key;
		Value_Type Value;
		Node* parent;
		Node* left;
		Node* right;
		Color COLOR;
		Node(Key_Type Key, Value_Type Value, Node* parent = NULL, Node* left = NULL, Node* right = NULL, Color COLOR = RED);
		~Node();
	};

	Node* root;
	Node* nil;
	int size;

	void recovery(Node*);
	void leftRotate(Node*);
	void rightRotate(Node*);
	void recoveryRemove(Node* x);

public:

	RedBlackTree();
	~RedBlackTree();

	void insert(Key_Type, Value_Type);
	void remove(Key_Type);
	Value_Type find(Key_Type);
	void clear(); 
	Key_Type* get_keys();
	Value_Type* get_values();
	void print();
	int get_size();
};
