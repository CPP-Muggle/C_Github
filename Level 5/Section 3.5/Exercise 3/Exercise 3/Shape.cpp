#include "Shape.hpp"
#include <sstream>
#include <iostream>

Shape::Shape():m_id(rand()){} //default constructor

Shape::~Shape()
{
	cout << "Shape Deconstructor Called" << endl;
}//default deconstructor

Shape::Shape(const Shape &source) :m_id(source.m_id)//copy constructor
{
}

int Shape::ID()const//return ID
{
	return m_id;
}

Shape& Shape::operator = (const Shape& source)//Assignment operator
{
	if (this == &source) return *this;
	m_id = source.m_id;
	return *this;
}

string Shape::ToString()const
{
	stringstream string;
	string << "ID: " << m_id<< endl;
	return string.str();
}

