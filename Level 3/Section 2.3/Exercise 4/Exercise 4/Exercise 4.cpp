/*This program aims to identify the problem when we use const member function/const variable.*/
#include <iostream>
#include "Point.hpp"
using namespace std;
void main(){
	const Point cp(1.5, 3.9);
	//cp.X(0.3); error occurs since cp is a constant Point.
	cout << cp.X() << endl;
	//the compilation problem disappears after we set the member function to constant
}