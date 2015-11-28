//This exercise is to define and use own namespace
#include "Point.hpp"
#include "Array.hpp"
#include "Circle.hpp"
#include "Line.hpp"
#include <iostream>

void main(){

	//full namespace for Point class
	ShadowKnight::CAD::Point start(1.0, 2.0);
	ShadowKnight::CAD::Point end(3.0, 4.0);
	double radius = 3.15;
	cout << "start point is " << start<<endl;
	cout << "end point is " << end<<endl;

	//using declaration for using a single class
	using ShadowKnight::CAD::Line;
	Line line=Line(start, end);
	cout << line<<endl;

	//using declaration for a complete namespace 
	using namespace ShadowKnight::Containers;
	Array array(2);
	array.SetElement(1, start);
	array.SetElement(2, end);

	//using shorter alias for namespace
	namespace CD = ShadowKnight::CAD;
	CD::Circle cr=CD::Circle(radius, start);
	cout << cr.ToString();
}