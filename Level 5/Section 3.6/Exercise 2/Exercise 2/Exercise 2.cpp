//This exercise is to handle more general error as expection objects
#include <sstream>
#include <iostream>
#include "Array.hpp"
#include "Point.hpp"
#include "ArrayException.hpp"
#include "OutOfBoundsException.hpp"

void main(){
	Array test(10);
	for (int i = 0; i <= 9; i++){
		test.SetElement(i, Point(i, i + 1));//set every elements in the test array
	}
	try{
		test.Getelement(10);//index 10 is out of bound
	}
	catch (ArrayException &ex){
		cout << ex.GetMessage() << endl; //print out the error message
	}
}