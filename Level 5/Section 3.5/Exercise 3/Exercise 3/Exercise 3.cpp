//This exercise is to determine whether deconstructor will be properly called 
#include <sstream>
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Shape.hpp"

void main(){
	Shape* shapes[3];
	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;
	for (int i = 0; i != 3; i++) delete shapes[i];//for all three elements, only Shape deconstructors are called
	//the derived class destructor will only be called when the destructor is declared virtual in the base class
}