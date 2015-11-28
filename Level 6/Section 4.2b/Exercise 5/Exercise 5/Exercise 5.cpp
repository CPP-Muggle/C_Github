//This exercise is to test for Layering Exceptions
#include <iostream>
#include "Array.hpp"
#include "StackArray.hpp"
using namespace std;

void main(){
	StackArray<int> IntArray(3);
	int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	try{
		IntArray.Pop(); //Pop here with m_current equals to 0 will be caught as StackEmptyException
		IntArray.Push(a[0]);
		IntArray.Push(a[1]);
		IntArray.Push(a[2]);
		//IntArray.Push(a[2]);//Push here when the array is full will be caught as StackFullException
		cout << IntArray.Pop() << endl;
		cout << IntArray.Pop() << endl;
		cout << IntArray.Pop() << endl;
	}
	catch (StackEmptyException& ex){
		cout << ex.GetMessage() << endl;
	}
	catch (StackFullException& ex){
		cout << ex.GetMessage() << endl;
	}
}