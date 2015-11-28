//This exercise is to show how the constructors could be used as conversion operator
#include "Point.hpp"
#include <iostream>
using namespace std;

void main(){
	Point p(1.0, 1.0);
	//if the set constrcutor defined explicit, then it will be a compliation error unless a conversion operator is used
	if (p ==(Point)1.0) cout << "Equal!" << endl;
	//the compliation works since when compare p with 1.0, 
	//1.0 will be convert to a point object by set constructor with one parameter Point(1.0)
	else cout << "Not equal" << endl;
}