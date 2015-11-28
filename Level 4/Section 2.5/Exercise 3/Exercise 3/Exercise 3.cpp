//This exercise is to generate a array class that can manage the memory
#include "Point.hpp"
#include "Array.hpp"
#include <iostream>
using namespace std;

void main(){
	Array test(10);
	for (int i = 0; i <= 9; i++){
		test.SetElement(i, Point(i, i + 1));//set every elements in the test array
	}
	Array test1(11);
	for (int i = 0; i <= 10; i++){
		test1.SetElement(i, Point(i, i + 1));//set every elements in the test1 array
	}
	test = test1;//test for "=" operator
	for (int i = 0; i <= 10; i++){
		cout<<test.Getelement(i).ToString();
	}
	cout << test[3] << endl; //test for [] operator
	test[4] = Point(1, 1);//if the [] operator has the constant return type, then this line will lead to complie error
	cout << test[4];
}