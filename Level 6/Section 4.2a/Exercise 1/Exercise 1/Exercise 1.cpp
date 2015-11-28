//This exercise is to test templated array class

#include "Array.cpp"
#include <iostream>
using namespace std;

void main(){
	int size = 10;
	Array<Point> points(size);//create an array of points with size 10
	for (int i = 0; i != 10; i++){
		points.SetElement(i, Point(i, i + 1));//set elements for all 10 points
	}
	for (int i = 0; i != 10; i++){
		cout << points.Getelement(i).ToString();//get and read each elements
	}
}