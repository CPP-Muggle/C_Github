//this exercise is to find out how colon syntax can improve the performance of constructors
#include <iostream>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
using namespace std;

void main(){
	//before using colon syntax, 2 point default constructors are firstly called. And then two set of set constructor and assignment operator are called
	//And a line default constructor and deconstructor, 4 point deconstructors are called.
	Line l;
	//after using colon syntax for line class, 2 point set constructors and 1 line default constructor are called.
	//2 point deconstructors and 1 line deconstructor are called.
	//using colon syntax assign the value when create instead of using set constructor and assignment operator to assign value
}