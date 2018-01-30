//Sharfaraz Salek
//CS-260
//Assignment-1
//Implementation of a stack using pointers
//Implementation of stack for type integer only 

#include <iostream>
#include "pointerstack.h"
using namespace std;

//Implementation

Node1::Node1()
{
	link_ = NULL;
	data_ = 0;
}

int Node1::getData() //Returns Data from Node
{
	return data_;
}

Node1* Node1::get_next() //Returns pointer to next Node
{
	return link_;
}

void Node1::setData(int A) 
{
	data_ = A;
}

void Node1::setLink(Node1 *l)
{
	link_ = l;
}

Point_Stack::Point_Stack()  //Default constructor
{
	next = new Node1();
	next->setLink(NULL);
}

Point_Stack::Point_Stack(int x) //Alternate Constructor
{
	next = new Node1();
	next->setData(x);
	next->setLink(NULL);
}

int Point_Stack::Top() //Returns value from top index
{
	return next->getData();
}

void Point_Stack::Pop() //Removes last index
{
	Node1 *tmp = next;
	next = tmp->get_next();
}

void Point_Stack::Push(int x) //Adds element to stack
{
	Node1 *tmp = next; //Copies pointer to last element
	Node1 *newNode = new Node1(); //Creates new node
	newNode->setData(x); //Sets information for node
	newNode->setLink(tmp); //New node points to previous last element
	next = newNode; //Newnode is last element in stack
}

bool Point_Stack::Empty() //Checks to see if empty
{
	if (next->getData() == NULL)
	{
		//cout << "Stack is Empty" << endl;
		return true;
	}
	else
	{
		//cout << "Stack is not empty" << endl;
		return false;
	}
}

Node1* Point_Stack::Makenull() //Creates empty stack
{
	Node1 *newNode = new Node1();
	newNode->setLink(NULL);
	next = newNode;
	return newNode;
}
