#include <sstream>
#include <iostream>
#ifndef StackEmptyException_HPP
#define StackEmptyException_HPP

using namespace std;
#include "StackException.hpp"

class StackEmptyException :public StackException{
public:
	//constructor
	StackEmptyException(){}//default constructor
	~StackEmptyException(){}//default deconstructor

	//functionality
	string GetMessage()const{//GetMessage function
		stringstream string;
		string << "The array is empty!"<< endl;
		return string.str();
	}
};
#endif