//This exercise is to test how to catch and handle errors(index out of bound)
#include "Point.hpp"
#include "Array.hpp"
#include <iostream>
using namespace std;

void main(){
	Array test(10);
	for (int i = 0; i <= 9; i++){
		test.SetElement(i, Point(i, i + 1));//set every elements in the test array
	}
	//test.Getelement(10);the error happens and the program terminates
	try{
		test.Getelement(10);
	}
	catch (int error){
		if (error == -1)
			cout << "No such element:index out of bound." << endl;
	}
}