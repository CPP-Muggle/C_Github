//this exercise is to add base class functionn  ToString into derived class functionality
#include <sstream>
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Shape.hpp"
using namespace std;

void main(){
	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	cout << s.ToString() << endl; // Print shape. 
	cout << p.ToString() << endl; // Print point. the ID is also printed when printing the point
	cout << l.ToString() << endl; // Print line.  the ID is also printed when printing the line
}