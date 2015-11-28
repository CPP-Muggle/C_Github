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
	virtual ~Shape();                        //default deconstructors
	Shape(const Shape &source);              //copy constructors

	//Accessing Functions
	int ID()const;                           //return ID

	//Functionality
	virtual Shape& operator = (const Shape& source); //Assignment operator
	virtual string Shape::ToString()const;           //return the id as string
	virtual void Draw()const=0;                      //Abstract functions
	void Shape::print()const;                        //print function                         
};
#endif;
