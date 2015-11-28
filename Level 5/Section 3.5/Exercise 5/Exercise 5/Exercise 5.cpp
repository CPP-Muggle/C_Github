//This exercist is to test "Template Method Pttern"
#include <sstream>
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Shape.hpp"

void main(){
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	p.print();//call print function for point
	l.print();//call print function for line 
}