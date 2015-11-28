//This exercise is to test whether Shape class memebers are initialed when Point/Line is initialed
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
	cout << s.ToString() << endl; // Print shape. Result:"ID: 41"
	cout << p.ToString() << endl; // Print point. Result:"Point (10,20)"
	cout << l.ToString() << endl; // Print line.  Result:" The Start Point is Point (1,2) The end point is Point (3,4)
	cout << "Shape ID: " << s.ID() << endl; // ID of the shape.
	cout << "Point ID: " << p.ID() << endl; // ID of the point. Does this work? It works. Printing result: "Point ID: 18467"
	cout << "Line ID: " << l.ID() << endl; // ID of the line. Does this work? It works. Printing result: "Line ID: 19169"
	Shape* sp; // Create pointer to a shape variable.
	sp = &p; // Point in a shape variable. Possible? It is possible, since Point p is also a Shape
	cout << sp->ToString() << endl; // What is printed? ID is printed "ID: 18467"
	// Create and copy Point p to new point.
	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl; // Is the ID copied if you do not call  
	//Yes, the ID is copied since we overwrite the assignment operator in point class
	// the base class assignment in point?
}