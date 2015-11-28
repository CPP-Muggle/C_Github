//This exercise is to test Value Template Arguement that use an int value as the template variable
#include <iostream>
#include "Array.hpp"
#include "StackArray.hpp"

void main(){
	StackArray<int, 3> IntArray1;
	StackArray<int, 3> IntArray2;
	int a[3];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	for (int i = 0; i != 3; i++){
		IntArray1.Push(a[i]);
	}
	IntArray2 = IntArray1;//Assignment operator is used with the same size initialized
	StackArray<int, 3> IntArray3(IntArray1);//copy constructor used
	for (int i = 0; i != 3; i++){
		cout << IntArray2.Pop()<< ",";//check whether IntArray1 and IntArray2 contains the same array
	}
	cout << endl;
	for (int i = 0; i != 3; i++){
		cout << IntArray3.Pop() << ",";//check whether IntArray1 and IntArray3 contains the same array
	}
}