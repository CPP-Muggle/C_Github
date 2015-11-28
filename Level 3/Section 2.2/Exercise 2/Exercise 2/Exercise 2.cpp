/*Compare to exercise 1, two more functions (DistanceOrigin() and Distance())*/
#include <iostream>
#include "Point.hpp"
using namespace std;
void main(){
	double x, y;
	cout << "Please enter the value of x: " << endl;
	cin >> x;
	cout << "Please enter the value of y: " << endl;
	cin >> y;
	Point pt;//default constructor called
	pt.SetX(x);
	pt.SetY(y);
	cout << pt.ToString();
	Point pt1;//default constructor called
	cout << "Please enter the value of x: " << endl;
	cin >> x;
	cout << "Please enter the value of y: " << endl;
	cin >> y;
	pt1.SetX(x);
	pt1.SetY(y);
	cout << pt1.ToString();
	cout << "The distance between point 1 to origin is " << pt.DistanceOrigin() << endl;//distance to origin function called
	cout << "The distance between point 2 to point 1 is " << pt.Distance(pt1) << endl;//distance to another point function called
}