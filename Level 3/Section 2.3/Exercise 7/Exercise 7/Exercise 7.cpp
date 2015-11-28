/*The aim of this exercise is to use inline function defined in hearder file to improve the speed*/
#include <iostream>
#include "Point.hpp"
using namespace std;
void main(){
	double x, y;
	cout << "Please enter the value of x: " << endl;
	cin >> x;
	cout << "Please enter the value of y: " << endl;
	cin >> y;
	Point pt;
	pt.X(x);
	pt.Y(y);//use setter function
	cout << pt.ToString();//print the string by using getter function
}