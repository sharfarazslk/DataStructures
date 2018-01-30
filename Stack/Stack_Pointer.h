//Sharfaraz Salek
//CS-260
//Assignment-1
//Implementation of a stack using pointers
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

class Point_Stack
{
	public:
		//Constructor
		Point_Stack();
		Point_Stack(int x);

		//Inspector
		int Top();

		//Mutator;
		void Pop();
		void Push(int x);
		bool Empty();
		Node1* Makenull();

	private:
		Node1 *next; //Stores pointer for last element
};