#include "Tree.h"
#include <iostream>

Tree::Tree()
{
	t = NULL;
}

void addNow(Node* &tree, double leaf)
{
	if (tree == NULL)
	{
		Node* temp = new Node(leaf);
		tree = temp;
	}
	else if (leaf < tree->t_Value)
	{
		addNow(tree->t_left, leaf);
	}
	else
	{
		addNow(tree->t_right, leaf);
	}
}

void Tree::addLeaf(double leaf)
{
	addNow(t, leaf);
}

void showLeaf(Node* leaf)
{
	if (leaf != NULL)
	{
		std::cout << leaf->t_Value << " ";
		showLeaf(leaf->t_left);
		showLeaf(leaf->t_right);
	}
}

void Tree::showTree()
{
	showLeaf(t);
}


std::string Tree::getCodeOfTree(Node* tree)
{
	if (tree != NULL)
	{
		return "0" + getCodeOfTree(tree->t_left) + getCodeOfTree(tree->t_right);
	}
	else return "1";
}

bool Tree::IsTwoSimilarTree(Tree anotherTree)
{
	std::string codeOfFirstTree = getCodeOfTree(t);
	std::string codeOfSecondTree = getCodeOfTree(anotherTree.t);
	return (codeOfFirstTree == codeOfSecondTree);
}

void getReset(Node*& tree) { tree = NULL; }

void Tree::reset()
{
	getReset(t);
}

Tree::~Tree()
{
}