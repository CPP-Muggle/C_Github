//this exercise is to find out a better approach to use STL algorithm rather than just define a global function.
#include <iostream>
#include <list>
#include <numeric>				// Numeric algorithms
#include <functional>			// For function objects
#include <algorithm>
using namespace std;

template <typename T>
bool count_less(T t){//the global function that checks the input is smaller than 55
	return t < 55;
}

template <typename T>
class test{
private:
	T breakpoint;
public:
	test(T temp){//assign constructor
		breakpoint=temp;
	}
	bool operator()(T t){//using a functor that compares the value of two numeric numbers
		return t < breakpoint;
	}
};

void main(){

	double a[10] = { 12, 3, 25, 7, 11, 213, 7, 123, 29, -31 };

	// List iterator
	list<double> list1;
	for (int i = 0; i < 10; i++)
	{
		list1.push_back(a[i]);
	}
	double breakpoint = 55;//set the certain value
	cout << "The number is: " << count_if(list1.begin(), list1.end(), count_less<double>) << "\n";//hardcode the number to 55
	cout << "The number is: " << count_if(list1.begin(), list1.end(), test<double>(breakpoint)) << "\n";//using functor will be more flexiable
}