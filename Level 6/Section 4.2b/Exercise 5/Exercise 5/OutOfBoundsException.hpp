#include <sstream>
#include <iostream>
#include "ArrayException.hpp"
#ifndef OutOfBoundsException_HPP
#define OutOfBoundsException_HPP
using namespace std;

class OutOfBoundsException :public ArrayException{
private:
	int m_index;                 //erroneous array index
public:
	OutOfBoundsException();     //default constructor
	OutOfBoundsException(int index);//set constructor
	~OutOfBoundsException();//default deconstructor
	string GetMessage()const;    //return the error message string
};
#endif



