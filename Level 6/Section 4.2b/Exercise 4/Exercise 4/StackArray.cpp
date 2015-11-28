#include <iostream>

using namespace std;

#ifndef StackArray_CPP
#define StackArray_CPP

#include "StackArray.hpp"

template <class T>
StackArray<T>::StackArray() :m_array(),m_current(0){}//default constructor

template <class T>
StackArray<T>::~StackArray(){}//default deconstructor

template <class T>
StackArray<T>::StackArray(int size) : m_array(size), m_current(0){}//set constructor

template <class T>
StackArray<T>::StackArray(const StackArray<T>& copy) : m_array(copy.m_array), m_current(copy.m_current){}//copy constructor

template <class T>
StackArray<T>& StackArray<T>::operator=(const StackArray<T>& source){//assignment operator
	if (this == &source) return *this;
	m_current = source.m_current;
	m_array = source.m_array;
	return *this;
}

template <class T>
T StackArray<T>::Pop(){//Pop function
	T temp = m_array.GetElement(m_current-1);
	if (temp)//if m_current-1 is not out of bound, then temp will return a value but not an expection
		m_current=m_current-1;
	return temp;
}

template <class T>
void StackArray<T>::Push(T& copy){
		m_array.SetElement(m_current, copy);
		m_current = m_current + 1;
}
#endif