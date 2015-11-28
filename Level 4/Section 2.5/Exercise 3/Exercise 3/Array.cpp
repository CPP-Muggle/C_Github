#include "Array.hpp"
#include <cmath>
#include <sstream>
#include <string>
Array::Array()                        //default constructor
{
	m_size = 10;
	m_data = new Point[10];
}
Array::~Array(){                      //deconstructor
	delete[] m_data;
}
Array::Array(int size)                //set constructor with size input
{
	m_size = size;
	m_data = new Point[size];
}
Array::Array(const Array &a)          //copy constructor
{   	
	m_size = a.m_size;
	m_data = new Point[m_size];
	for (int i = 0; i < m_size; i++){
		m_data[i] = Point(a.m_data[i]);
	}
}

//Assignment operator
Array& Array::operator =(const Array& source)
{
	if (this!=&source){//check if the source has the same address as the current array
		m_size = source.m_size;
		delete[] m_data;//delete the old C array
		m_data = new Point[m_size];//declare and allocate the new array
		for (int i = 0; i < m_size; i++){
			m_data[i] = Point(source.m_data[i]);
		}
	}
	else cout << "Same Array";
	return *this;
}

//operator [] can be use for both write and read
Point& Array::operator [](int index)//return the reference of the index-th element
{
	if (index > m_size-1 || index < 0){
		return m_data[0];
	}
	return m_data[index];
}

//function can only be used for read
const Point& Array::operator [] (int index) const{
	if (index > m_size-1 || index < 0){
		return m_data[0];
	}
	return m_data[index];
}

//function
int Array::Size() const                                 //return size of the array
{
	return m_size;
}
void Array::SetElement(int index, Point &p)       //set the specific element
{
	if (index <= m_size - 1 && index >= 0){
		m_data[index]= Point(p);
	}
}
Point& Array::Getelement(int index) const                //get the specific element
{
	if (index > m_size - 1 || index < 0){
		return m_data[0];
	}
	else
		return m_data[index];
}