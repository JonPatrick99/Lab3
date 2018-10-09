//Node.cpp
//Jon Caldwell
//COSC 2030
//Oct 1, 2018
#include "Node.h"


Node::Node(double entry)
	: entry_(entry), next_(NULL)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl;
}

Node::Node(double entry, Node * next)
	: entry_(entry), next_(next)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl;
}

Node::~Node()
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) at " << this << " destroyed" << endl;
}