//this program is to show the use of operators
#include "Point.hpp"
#include <iostream>
using namespace std;

void main(){
	Point pt1(1, 2);
	const Point pt2(3, 4);
	pt1 = -pt1;
	cout << pt1.ToString();//print out the result after negate the coordinates
	pt1 = pt1 * 2;
	cout << pt1.ToString();//print out the result after scale the coordinates
	pt1 = pt1 + pt2;
	pt1.ToString();//print out the result after add coorrdinates
	cout << (pt1 == pt2)<<endl;//print out the result of boolean compare operator
	pt1 = pt2;
	cout << pt1.ToString();//print out the result of assignment operator
	pt1 *= 2;
	cout << pt1.ToString();//print out the result of Scale the coordinates & assign operator
}