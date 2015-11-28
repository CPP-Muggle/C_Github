//This exercise is to build up an abstract base class
#include <sstream>
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Shape.hpp"

void main(){
	Shape* shapes[10];
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Point(1.0,1.0);
	shapes[3] = new Line;
	shapes[4] = new Point;
	//shapes[4] = new Shape; is not allowed since Shape is a pure abstract class
	shapes[5] = new Line;
	shapes[6] = new Point(4.0, 5.0);
	shapes[7] = new Line(Point(1.0, 2.0), Point(3.0, 0.0));
	shapes[8] = new Point(2.0, 3.0);
	shapes[9] = new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	for (int i = 0; i != 10; i++) shapes[i]->Draw();
	for (int i = 0; i != 4; i++) delete shapes[i];
}