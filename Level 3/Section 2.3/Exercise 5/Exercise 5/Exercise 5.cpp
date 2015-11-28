/*This exercise adds one more class Line which contains private two points*/
#include <iostream>
#include "Line.hpp"
void main(){
	double x, y;
	cout << "Please enter the X-coordinate for point 1: ";
	cin >> x;
	cout << "Please enthr the Y-coordinate for point 1: ";
	cin >> y;
	Point pt1(x, y);
	cout << "Please enter the X-coordinate for point 2: ";
	cin >> x;
	cout << "Please enthr the Y-coordinate for point 2: ";
	cin >> y;
	Point pt2(x, y);
	Line line(pt1, pt2);
	cout<<line.ToString();
	cout << "The length of this line is: " << line.Length() << endl;
}
