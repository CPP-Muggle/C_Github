//This exercise is to test smart pointer that provided by boost
#include <iostream>
#include "Array.hpp"
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include <boost\shared_ptr.hpp>

// Typedef for a shared pointer to shape and
// a typedef for an array with shapes stored as shared pointers.
typedef boost::shared_ptr<Shape> ShapePtr;
typedef Array<ShapePtr> ShapeArray;

void main(){

	//Initial the size of the array and assign different shapes to it
	ShapeArray array(2);
	ShapePtr point1(new Point(1, 1));
	ShapePtr line1(new Line(Point(1, 1), Point(2, 2)));
	array[0] = point1;
	array[1] = line1;

	//print out the elements in array
	for (int i = 0; i < 2; i++){
		array[i]->print();
	}
	//Array deconstructor was called at last when all the point/line deconstrcutors are called
}