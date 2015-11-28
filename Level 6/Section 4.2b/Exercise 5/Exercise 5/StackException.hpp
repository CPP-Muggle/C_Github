#include <sstream>
#include <iostream>
#ifndef StackException_HPP
#define StackException_HPP
using namespace std;

class StackException{
public:
	virtual string GetMessage()const = 0; //pure abstract function 
};
#endif