//This exercise is to test stack class with composition

#include <iostream>
#include "Array.hpp"
#include "StackArray.hpp"
using namespace std;

void main(){
	StackArray<int> IntArray(3);
	StackArray<int> IntArray1(3);
	int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	try{
		//IntArray.Pop(); //Pop here with m_current equals to 0 will cause an error
		IntArray.Push(a[0]);
		IntArray.Push(a[1]);
		IntArray.Push(a[2]);
		IntArray1 = IntArray;
		//IntArray.Push(a[2]);//Push here when the array is full will cause an error
		cout << IntArray.Pop() << endl;
		cout << IntArray.Pop() << endl;
		cout << IntArray.Pop() << endl;
	}
	catch (int error){
		if (error == -1)
			cout << "index out of bound" << endl;
	}
}