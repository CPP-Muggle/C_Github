//This exercise is to test how polymorphic could  be used to call member function from derived class
#include "Shape.hpp"
#include "Point.hpp"
#include <sstream>
#include <iostream>
using namespace std;

void main(){
	Shape *s; // Create shape.
	Point p(10, 20); // Create point.
	s = &p;// Point in a shape variable
	cout<< s->ToString()<< endl; //without polymorphic ToString Function, the ToString function in class Shape will be called.
}