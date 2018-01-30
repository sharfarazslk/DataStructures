//Sharfaraz Salek
//Pointer Implementation of a stack
//Implementation of stack for type integer only

#include <iostream>
using namespace std;

class Node1
{
	public: 
		//Constructor
		Node1(); 

		//Inspector
		int getData();
		Node1* get_next();

		//Mutator
		void setData(int A);
		void setLink(Node1 *l);


	private:
		int data_;
		Node1 *link_;
};

class Stack
{
	public:
		//Constructor
		Stack();
		Stack(int x);

		//Inspector
		int Top(); //Returns value from top

		//Mutator;
		int Pop(); //Removes from top
		void Push(int x); //Adds element to stack
		bool Empty(); //Checks to see if empty
		Node1* Makenull(); //Creates empty stack

	private:
		Node1 *next; //Stores pointer for last element
};