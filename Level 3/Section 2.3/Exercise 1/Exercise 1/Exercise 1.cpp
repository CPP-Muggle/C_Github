/*This program aims to find how pass by value happens when you call a function, namely how copy constructor works*/
#include <iostream>
#include "Point.hpp"
using namespace std;
void main(){
	double x, y;
	int index;
	cout << "Please enter the section (1 or 2) you want " << endl;
	cin >> index;
	if (index == 1){
		Point pt;//constructor occurs here
		Point pt1;//constructor occurs here
		cout << "Please enter the value of x: " << endl;
		cin >> x;
		cout << "Please enter the value of y: " << endl;
		cin >> y;
		pt.SetX(x);
		pt.SetY(y);
		cout << pt.ToString();
		cout << "Please enter the value of x: " << endl;
		cin >> x;
		cout << "Please enter the value of y: " << endl;
		cin >> y;
		pt1.SetX(x);
		pt1.SetY(y);
		cout << pt1.ToString();
		//one deconstructor occurs before printing
		cout << "The distance between point 2 to point 1 is " << pt.Distance(pt1) << endl;
		/*before  copy constructor added, the number of constructors (2) and deconstructors(3) are not the same */
		//two deconstructors occurs here
	}
	else if (index==2){
		cout << "Please enter the value of x: " << endl;
		cin >> x;
		cout << "Please enter the value of y: " << endl;
		cin >> y;
		Point pt(x, y);//set constructor occurs here
		cout << pt.ToString();
		Point pt1(pt);//copy constructor occurs here
		cout << pt1.ToString();
		//copy constructor and deconstructor occur here
		cout << "The distance between point 2 to point 1 is " << pt.Distance(pt1) << endl;
		//two deconstructor occur here
	}	/*After copy constructor added, the number of constructors (3) and deconstructors (3) are the same*/
}