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
	StackArray<T>& operator=(const StackArray<T>& source);//Assignment operator

	//functionality
	T Pop();
	void Push(T& copy);
};
#ifndef StackArray_cpp // Must be the same name as in source file #define
#include "StackArray.cpp"
#endif
#endif