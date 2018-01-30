//Sharfaraz Salek
//Array Implementation of a Stack
//Implementation of stack for type integer only

#include <iostream>
using namespace std;

class Stack
{
	public:
		//Constructor
		Stack();
		Stack(int x);

		//Inspector
		int Top(); //Retrieves value of last index

		//Mutators
		int Pop(); //Deletes last position from top
		void Push(int x); //Adds element in stack
		bool Empty(); //Checks to see if stack is empty
		int Makenull(); //Creates empty stack and return index of first position

	private:
		int top_; //Index of last element in stack
		int arr[5000]; //For the purpose of this implementation the max size of the stack can be 5000

};