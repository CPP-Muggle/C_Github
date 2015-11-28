#include "Array.hpp"
#ifndef StackArray_HPP
#define StackArray_HPP

template <class T,int size>//Value Template Arguement
class StackArray{
private:
	int m_current;
	Array<T> m_array;
public:
	//constructors
	StackArray();//default constructor
	~StackArray();//default deconstructor
	StackArray(const StackArray<T,size>& copy);//copy constructor with the same "size"

	//operator
	StackArray<T,size>& operator=(const StackArray<T,size>& source);//Assignment operator with the same "size"

	//functionality
	T Pop();
	void Push(T& copy);
};
#ifndef StackArray_cpp // Must be the same name as in source file #define
#include "StackArray.cpp"
#endif
#endif