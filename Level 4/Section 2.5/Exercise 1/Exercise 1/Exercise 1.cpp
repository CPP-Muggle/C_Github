//this exercise is to show how to use dynamic storage to allocate memory
#include "Point.hpp"
#include <iostream>
using namespace std;

void main(){
	Point* point1, *point2;
	point1 = new Point();//using default constructor
	point2 = new Point(1.0, 1.0);//
	Point* point3 = new Point(*point2);
	cout << "The distance between " << (*point2) << " and " << (*point3) << " is " << (*point2).Distance(*point3) << endl;
	delete point1, point2, point3;
	int index;
	cout << "Please enter the size of array: " << endl;
	cin >> index;
	//Point pp[index]; ompliation error occurs since array size should be set at compile time
	Point *pp=new Point[index];
	double x, y;
	for (int i = 0; i < index; i++){
		cout << "Please enter X-coordinate: ";
		cin >> x;
		cout << "Please enter Y-coordinate: ";
		cin >> y;
		pp[i].X(x);
		pp[i].Y(y);
	}
	for (int i = 0; i < index; i++){//print out each object in the Point array
		cout << pp[i] << endl;
	}
	delete [] pp;
}