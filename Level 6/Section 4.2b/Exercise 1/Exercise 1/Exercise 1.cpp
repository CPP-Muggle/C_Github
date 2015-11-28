//This exercise is to test static variable for Array Default size

#include "Array.hpp"
#include <iostream>
using namespace std;

void main(){
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;
	cout << intArray1.DefaultSize() << endl;//default size is 10 for int
	cout << intArray2.DefaultSize() << endl;//default size is 10 for int
	cout << doubleArray.DefaultSize() << endl;//default size is 10 for double
	intArray1.DefaultSize(15);//default size for int changes to 15
	cout << intArray1.DefaultSize() << endl;//default size is 15 now for int
	cout << intArray2.DefaultSize() << endl;//default size is 15 now for int
	cout << doubleArray.DefaultSize() << endl;//default size is still 10 for double
}