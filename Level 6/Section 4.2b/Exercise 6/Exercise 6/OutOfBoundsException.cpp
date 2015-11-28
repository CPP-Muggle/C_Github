#include <sstream>
#include <iostream>
#include "OutOfBoundsException.hpp"

OutOfBoundsException::OutOfBoundsException() : m_index(0) {}//default constructor

OutOfBoundsException::OutOfBoundsException(int index) : m_index(index) {}//set constructor

OutOfBoundsException::~OutOfBoundsException(){}//default deconstructor

string OutOfBoundsException::GetMessage()const{//GetMessage Function
	stringstream string;
	string << "The index " <<m_index<<" is out of bound" << endl;
	return string.str();
}