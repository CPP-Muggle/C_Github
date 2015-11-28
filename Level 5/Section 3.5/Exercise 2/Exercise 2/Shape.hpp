#include <sstream>
#include <iostream>
using namespace std;
#ifndef Shape_HPP
#define Shape_HPP
class Shape{
private:
	int m_id;
public:
	//constructors
	Shape();                                 //default constructors
	~Shape();                                //default deconstructors
	Shape(const Shape &source);              //copy constructors

	//Accessing Functions
	int ID()const;                           //return ID

	//Functionality
	Shape& operator = (const Shape& source); //Assignment operator
	virtual string Shape::ToString()const;           //return the id as string
};
#endif;
