#include <iostream>

#include "StackEmptyException.hpp"
#include "StackFullException.hpp"
#include "ArrayException.hpp"
using namespace std;

#ifndef StackArray_CPP
#define StackArray_CPP

#include "StackArray.hpp"

template <class T, int size>
StackArray<T,size>::StackArray() :m_array(size),m_current(0){}//default constructor with the "size"

template <class T, int size>
StackArray<T,size>::~StackArray(){}//default deconstructor

template <class T, int size>
StackArray<T,size>::StackArray(const StackArray<T,size>& copy) : m_array(copy.m_array), m_current(copy.m_current){}//copy constructor

template <class T, int size>
StackArray<T,size>& StackArray<T,size>::operator=(const StackArray<T,size>& source){//assignment operator
	if (this == &source) return *this;
	m_current = source.m_current;
	m_array = source.m_array;
	return *this;
}

template <class T,int size>
T StackArray<T,size>::Pop(){//Pop function
	T temp;
	try{//if m_current-1 is not out of bound, then temp will return a value but not an expection
		temp = m_array.GetElement(m_current - 1);
		m_current = m_current - 1;
	}
	catch (ArrayException&){
		throw StackEmptyException();
	}
	return temp;
}

template <class T,int size>
void StackArray<T,size>::Push(T& copy){
	try{
		m_array.SetElement(m_current, copy);
		m_current = m_current + 1;
	}
	catch (ArrayException&){
		throw StackFullException();
	}
}
#endif