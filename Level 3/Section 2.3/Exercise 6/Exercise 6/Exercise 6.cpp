/*This exercise constains another class circile which has a private point center and radius*/
#include <iostream>
#include <sstream>
#include "Circle.hpp"
using namespace std;
void main(){
	double x, y, radius;
	cout << "Please enter the X-coordinate of the center point: " << endl;
	cin >> x;
	cout << "Please enter the Y-coordinate of the center point: " << endl;
	cin >> y;
	cout << "Please enter the radius of circle: " << endl;
	cin >> radius;
	Point pt = Point(x, y);
	Circle circle = Circle(radius, pt);
	cout << circle.ToString();
}