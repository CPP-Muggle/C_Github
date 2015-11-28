//The abstract base function
#include <sstream>
#include <iostream>
#ifndef ArrayException_HPP
#define ArrayException_HPP
using namespace std;

class ArrayException{
public:
	virtual string GetMessage()const = 0; //pure abstract function 
};
#endif