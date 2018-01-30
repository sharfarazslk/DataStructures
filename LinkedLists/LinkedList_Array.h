//Sharfaraz Salek
//CS-260
//Assignment-1
//Implementation of a list using an array
//Implementation of list for type integer only

template <typename T>
class List
{
	public:
		//Constructor
		List();
		List(T x); //Initializes list with the value in first position

		//Inspector
		int First(); //Returns index of first item in list
		int End(); //Returns index of last item in list
		int Next(int p); //Return next position
		int Prev(int p); //Return Previous Position
		int Locate(int x); //Returnns poisiton of x
		T Retrieve(int p); //Return element at p

		//Mutator
		void Insert(T x, int p);
		void Delete(int p);
		int Makenull();

	private:
		int last_; //Stores last index 
		T arr[10000]; //Declaring the array with 10000 indexes
};
