#include "Array.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace ShadowKnight::Containers;
Array::Array()                        //default constructor
{
	m_size = 0;
	m_data = new ShadowKnight::CAD::Point[10];
}
Array::~Array(){                      //deconstructor
}
Array::Array(int size)                //set constructor with size input
{
	m_size = size;
	m_data = new ShadowKnight::CAD::Point[size];
}
Array::Array(const Array &a)          //copy constructor
{   	
	m_size = a.m_size;
	m_data = new ShadowKnight::CAD::Point[m_size];
	for (int i = 0; i < m_size; i++){
		m_data[i].X(a.m_data[i].X());
		m_data[i].Y(a.m_data[i].Y());
	}
}

//Assignment operator
Array& Array::operator =(const Array& source)
{
	//test whether source is equal to this or not
	int flag = 0;
	if (source.m_size != this->m_size){
		flag = 1;
	}
	else{
		for (int i = 0; i < m_size; i++){
			if (source.m_data[i] == this->m_data[i]){
				flag = 0;
			}
			else{
				flag = 1;
				i = m_size;
			}
		}
	}

	//if they are not equal
	if (flag == 1){
		m_size = source.m_size;
		delete[] m_data;//delete the old C array
		m_data = new ShadowKnight::CAD::Point[m_size];//declare and allocate the new array
		for (int i = 0; i < m_size; i++){
			m_data[i].X(source.m_data[i].X());
			m_data[i].Y(source.m_data[i].Y());
		}
	}
	return *this;
}
ShadowKnight::CAD::Point& Array::operator [](int index)
{
	ShadowKnight::CAD::Point *temp;
	if (index > m_size){
		temp = m_data+0;
	}
	else temp = m_data+index;
	return *temp;
}
const ShadowKnight::CAD::Point& Array::operator [] (int index) const{
	ShadowKnight::CAD::Point *temp;
	if (index > m_size){
		temp = m_data + 0;
	}
	else temp = m_data + index;
	return *temp;
}

//function
int Array::Size()                                 //return size of the array
{
	return m_size;
}
void Array::SetElement(int index, ShadowKnight::CAD::Point &p)       //set the specific element
{
	if (index <= m_size - 1){
		m_data[index].X(p.X());
		m_data[index].Y(p.Y());
	}
}
ShadowKnight::CAD::Point& Array::Getelement(int index)                //get the specific element
{
	ShadowKnight::CAD::Point *p;
	if (index > m_size - 1){
		p = m_data+0;
	}
	else
		p = m_data+index;
	return *p;
}