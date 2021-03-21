#ifndef TREE_H
#define TREE_H
#include <iostream>
#include "Node.h"
#include <string>
#pragma once
class Tree
{
private:

	Node* t;
public:
	Tree();

	void addLeaf(double leaf);

	void showTree();

	//friend class TwoSimilarTree;

	/* Why Not friend function? Why must friend class??
	//friend std::string TwoSimilarTree::codeOfTree(Tree tree);
	//friend bool TwoSimilarTree::IsTwoSimilarTree(Tree firstTree, Tree secondTree);
	*/
	std::string getCodeOfTree(Node* tree);
	bool IsTwoSimilarTree(Tree anotherTree);
	void reset();
	~Tree();
};

#endif