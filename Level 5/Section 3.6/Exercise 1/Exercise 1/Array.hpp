#include "Point.hpp"
#include <sstream>
#include <iostream>

#ifndef Array_HPP
#define Array_HPP

class Array{
private:
	int m_size;
	Point* m_data;
public:

	//constructors
	Array();                           //default constructor
	~Array();                          //deconstructor
	Array(int size);                   //set constructor with size input
	Array(const Array &a);             //copy constructor

	//operator
	Array& operator =(const Array& source);
	Point& operator [](int index);
	const Point& operator [] (int index) const;//conmpare to the non-const operator, this operator allows for read only, you cannot change the vaule inside m_data

	//function
	int Array::Size()const;                                //return size of the array
	void Array::SetElement(int index, Point &p);      //set the specific element
	Point& Array::Getelement(int index)const;               //get the specific element
};
#endif