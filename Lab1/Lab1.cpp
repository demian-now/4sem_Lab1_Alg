#include <iostream>
#include "RBTree.h"
#include "RBTree.cpp"

using namespace std;

int main()
{
	RedBlackTree<int, string> TestTree;
	int keys[10] = { 12,-11,45,76,34,-9,15,-87,97,111 };
	string values[10] = { "cat","dog" ,"pig" ,"Kolpakov" ,"tree" ,"house" ,"beat" ,"meat" ,"SOS" ,"stackoverflow" };
	for (size_t i = 0; i < 10; i++)
		TestTree.insert(keys[i], values[i]);
	string answer = "Kolpakov";
	cout << TestTree.find(76);
}