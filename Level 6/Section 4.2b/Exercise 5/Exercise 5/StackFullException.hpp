#include <sstream>
#include <iostream>
#ifndef StackFullException_HPP
#define StackFullException_HPP

using namespace std;
#include "StackException.hpp"

class StackFullException :public StackException{
public:
	//constructor
	StackFullException(){}//default constructor
	~StackFullException(){}//default deconstructor

	//functionality
	string GetMessage()const{//GetMessage function
		stringstream string;
		string << "The array is full!" << endl;
		return string.str();
	}
};
#endif