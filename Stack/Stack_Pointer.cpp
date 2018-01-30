//Sharfaraz Salek
//CS-260
//Assignment-1
//Implementation of a stack using pointers
//Implementation of stack for type integer only 

#include <iostream>
#include "Stack_Pointer.h"
using namespace std;

//Implementation
Node1::Node1()
{
	link_ = NULL;
	data_ = 0;
}

//Returns Data from Node
int Node1::getData() 
{
	return data_;
}

//Returns pointer to next Node
Node1* Node1::get_next() 
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


//Stack Implementation
Stack::Stack()
{
	next = new Node1();
	next->setLink(NULL);
}

Stack::Stack(int x)
{
	next = new Node1();
	next->setData(x);
	next->setLink(NULL);
}

//Returns value from top
int Stack::Top() 
{
	if (Empty() == false)
	{
		return next->getData();	
	}
	else
	{
		cout << "Stack is empty";
		return -1;
	}
	
}

//Removes from top
int Stack::Pop() 
{
	f (Empty() == false)
	{
		int temp = next->getData();
		Node1 *tmp = next;
		next = tmp->get_next();
		return temp;	
	}
	else
	{
		cout << "Stack is empty";
		return -1;
	}

}

//Adds element to stack
void Stack::Push(int x) 
{
	Node1 *tmp = next; //Copies pointer to last element
	Node1 *newNode = new Node1(); //Creates new node
	newNode->setData(x); 
	newNode->setLink(tmp); //New node points to previous last element
	next = newNode; //Newnode is last element in stack
}

//Checks to see if empty
bool Stack::Empty() 
{
	if (next->getData() == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Creates empty stack
Node1* Stack::Makenull() 
{
	Node1 *newNode = new Node1();
	newNode->setLink(NULL);
	next = newNode;
	return newNode;
}
