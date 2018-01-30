//Sharfaraz Salek
//CS-260
//Assignment-1
//Implementation of a list using an array
//Implementation of list for type integer only

#include <iostream>
#include "LinkedList_Array.h"
using namespace std;

//Implementation
template <class T>
List<T>::List()
{
	last_= 0; //No items yet
}

template <class T>
List<T>::List(T x)
{
	last_ = 0;
	arr[0] = x;
}

template <class T>
int List<T>::First()
{
	return 0;
}
template <class T>
int List<T>::End()
{
	return (last_ + 1);
}

template <class T>
int List<T>::Next(int p)
{
	if (p ==last_)
	{
		return last_+1;
		
	}
	else if (p>last_)
	{
		cout << "Undefined" << endl;
		return -1; //Sentinal Value
	}
	{
		return p+1;
	}
	
}

template <class T>
int List<T>::Prev(int p)
{
	if (p<=0 or p>last_)
	{
		cout << "Undefined" << endl;
		return -1; //Sentinal Value
	}
	else 
	{
		return p-1;
	}
	
}

template <class T>
int List<T>::Locate(int x)
{
	int count = 0;
	while(count < last_ and arr[count] != x)
	{
		count = count +1;
	}
	
	if (arr[count] == x)
	{
		return count;
	}
	else 
	{
		return last_+1;
	}

}

template <class T>
T List<T>::Retrieve(int p)
{
	if (p <= last_)
	{
		return arr[p];
	}
	else 
	{
		cout << "Undefined" << endl;
		return End();
	}
}

template <class T>
void List<T>::Insert(T x, int p)
{
	if (last_ >= 5000) 
	{
		cout << "List is full" << endl;
	}
	else if (p>last_+1 or p< 0)
	{
		cout << "Position does not exist" << endl;
	}
	else
	{
		int count;
		for (count = last_; count>=p; count--)
		{
			arr[count+1] = arr[count]; //Moves elements one down
		}
		last_ = last_ + 1; //Increases the index of the list
		arr[count+1] = x; //Insert value at position
	}
}

template <class T>
void List<T>::Delete(int p)
{
	if (p>last_ or p<0)
	{
		cout << "Position does not exist" << endl;
	}
	else 
	{
		int count;
		for (count=p; count<last_; count++)
		{
			arr[count] = arr[count + 1]; //Moves elements one up
		}
		last_ = last_ -1; //Decreases last index
	}
}

template <class T>
int List<T>::Makenull() //Creates empty list
{
	for (int i =0; i<=last_; i++)
	{
		arr[i] = NULL;
	}
	return End();
}