//this exercise is to try variant that can store a value that can be one of the specified types.
#include <boost/variant.hpp>
#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"
#include <string>
using namespace std;

typedef boost::variant<Point,Line,Circle> VariantType;

//ask for users input to generate a shape in variant
VariantType ReturnShape(){
	string type;
	double a, b, c, d;
	cout << "Enter the Shape you want to creat: " << endl;
	cin >> type;
	if (type == "Line"){//assign a line
		cout << "Enter the start point: " << endl;
		cin >> a >> b;
		cout << "Enter the end point: " << endl;
		cin >> c >> d;
		return Line(Point(a, b), Point(c, d));
	}
	else
		if (type == "Point"){//assign a point
			cout << "Enter the point: " << endl;
			cin >> a >> b;
			return Point(a, b);
		}
		else{//default: assign a circle
			cout << "Enter the center: " << endl;
			cin >> a >> b;
			cout << "Enter the radius" << endl;
			cin >> c;
			return Circle(c, Point(a, b));
		}
}


void main(){

	//initialize a variant and assgin it by users input
    VariantType myvariant = ReturnShape();
    cout << "The input data structure is:" << endl<< myvariant << endl;//print out the variant

	//chekc if the variant contains a line
	try
	{
	  Line line=boost::get<Line>(myvariant);
	}
	catch (boost::bad_get& err)
	{
      cout << "Error: " << err.what() << endl;
	}
	Visitor change(2, 2);//set the move coordinate to be (2,2)
	boost::variant<Point, Line, Circle> myvariant1;

	//move different shape to check if the vistor indeed change the coordinates
	//myvariant1 = Point(1, 1);
	//myvariant1 = Line(Point(1, 1), Point(2, 2));
	myvariant1 = Circle(1, Point(2, 2));

	cout << myvariant1 << endl;
	boost::apply_visitor(change, myvariant1);
	cout << myvariant1 << endl;
	
}