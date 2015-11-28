#include <iostream>

using namespace std;

#ifndef StackArray_CPP
#define StackArray_CPP

#include "StackEmptyException.hpp"
#include "StackFullException.hpp"
#include "ArrayException.hpp"
#include "StackArray.hpp"

template <class T>
StackArray<T>::StackArray() :m_array(), m_current(0){}//default constructor

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
	T temp;
	try{
		temp = m_array.GetElement(m_current - 1);
		m_current = m_current - 1;
	}
	catch (ArrayException&){
		throw StackEmptyException();
	}	
	return temp;
}

template <class T>
void StackArray<T>::Push(T& copy){//Push function
	try{
		m_array.SetElement(m_current, copy);
		m_current = m_current + 1;
	}
	catch (ArrayException&){
		throw StackFullException();
	}
}
#endif