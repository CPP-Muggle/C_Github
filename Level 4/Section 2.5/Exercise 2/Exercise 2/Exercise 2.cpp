//this exercise is to show how to create array of pointers
#include "Point.hpp"
#include <iostream>
using namespace std;

void main(){

	double x, y;

	Point **pp = new Point*[3]; //define pp as a pointer of a pointer array that each element points to a Point object

	for (int i = 0; i < 3; i++){
		cout << "Please enter X-coordinate: ";
		cin >> x;
		cout << "Please enter Y-coordinate: ";
		cin >> y;
		pp[i] = new Point(x, y);//creat each element on heap
	}

	for (int i = 0; i < 3; i++){//print out each point
		cout << *pp[i];
	}

	for (int i = 0; i < 3; i++){//delete the pointer to Point objects
		delete pp[i];
	}

	delete[] pp;//delete the pointer to pointer array
}