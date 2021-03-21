#ifndef NODE_H
#define NODE_H
#include <iostream>
class Node
{
public:
	double t_Value;
	Node* t_left;
	Node* t_right;
public:
	Node(double x);
	~Node();
};
#endif