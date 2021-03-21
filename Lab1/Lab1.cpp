#include <iostream>
#include "RBTree.h"
#include "RBTree.cpp"

using namespace std;

int main()
{
	RedBlackTree<size_t, int> TestTree;
	for (size_t i = 0; i < 100; i++)
	{
		TestTree.insert(rand(), rand());
		TestTree.print();
	}
	return 0;
}