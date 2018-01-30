//Sharfaraz Salek
//Implementation of a stack with an array
//Implementation of stack for type integer only

#include <iostream>
#include "Stack_Array.h"
using namespace std;

Stack::Stack()
{
	top_=4999; //First position of stack
}

Stack::Stack(int x)
{
	top_=4999;
	arr[top_] = x; //Initializes with value
}

//Retrieves value of last index
int Stack::Top() 
{
	if (Empty() == true)
	{
		cout << "Stack is empty." << endl;
		return -1;
	}
	else
	{
		return arr[top_];
	}
}

//Deletes last position from top
int Stack::Pop() 
{
	if (Empty() == true)
	{
		cout << "Stack is empty." << endl;
		return -1;
	}
	else
	{
		int x = arr[top_]; //Stores return value
		arr[top_] = 0; //Empties out last position
		top_ = top_ + 1;  //Adjusts index to last position
		return x;
	}
}

//Adds element in stack
void Stack::Push(int x) 
{
	if (top_ == 0)
	{ 
		cout << "Stack is full" << endl;
	}
	else
	{
		top_ = top_ - 1; //Adjusts index to last position
		arr[top_] = x; //Inserts value to new element
	}
	
}

//Checks to see if stack is empty
bool Stack::Empty() 
{
	if (top_ >= 4999 and arr[top_] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Creates empty stack and return index of first position
int Stack::Makenull() 
{
	if (Empty()==true)
	{
		cout << "Stack is already empty" << endl;
		return top_;
	}
	else 
	{
		for (int i = top_; i<=4999; i++)
		{
			arr[top_] = 0; //Nulls out all positions
			top_ = top_ + 1; //Adjusts index
		}
		return top_;
	}
}