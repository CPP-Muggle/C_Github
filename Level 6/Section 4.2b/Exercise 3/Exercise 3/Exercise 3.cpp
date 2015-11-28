//this program is to use concrete inheritance to generate a Point Array
#include "Point.hpp"
#include "Array.hpp"
#include "PointArray.hpp"
#include <iostream>
using namespace std;

void main(){
	PointArray<Point> pts(5);//construct a PointArray<Point> object 
	for (int i = 0; i != 5; i++){//initial all five points
		pts[i].X(i);
		pts[i].Y(i);
	}
	cout << "The total Length between any two Points is "<< pts.Length() << endl;//print out the result from Length function
}