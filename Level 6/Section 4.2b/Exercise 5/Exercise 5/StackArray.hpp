#include "Array.hpp"
#ifndef StackArray_HPP
#define StackArray_HPP

template <class T>
class StackArray{
private:
	int m_current;
	Array<T> m_array;
public:
	//constructors
	StackArray();//default constructor

	~StackArray();//default deconstructor

	StackArray(int size);//set constructor

	StackArray(const StackArray<T>& copy);//copy constructor

	//operator
	StackArray<T>& operator=(const StackArray<T>& source);//assignment operator

	//functionality

	T Pop();//Pop function

	void Push(T& copy);//Push function
};
#ifndef StackArray_cpp // Must be the same name as in source file #define
#include "StackArray.cpp"
#endif
#endif