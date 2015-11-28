/*This exercise aims to build up a class point and print out its discription*/
#include <iostream>
#include "Point.hpp"
using namespace std;
void main(){
	double x, y;
	cout << "Please enter the value of x: " << endl;
	cin >> x;
	cout << "Please enter the value of y: " << endl;
	cin >> y;
	Point pt;//use default constructor
	pt.SetX(x);//use setter function to update m_x and m_y
	pt.SetY(y);
	cout << pt.ToString();//print out the discription
}