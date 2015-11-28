#include <cmath>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

#ifndef Array_CPP
#define Array_CPP

#include "Array.hpp"

template <class T>
int Array<T>::Default_Size = 10;

template <class T>
Array<T>::Array() :m_size(Default_Size), m_data(new T[Default_Size]){}                       //default constructor

template <class T>
Array<T>::~Array(){                      //deconstructor
	delete[] m_data;
}
template <class T>
Array<T>::Array(int size) :m_size(size), m_data(new T[size])  {}             //set constructor with size input

template <class T>
Array<T>::Array(const Array<T> &a)          //copy constructor
{
	m_size = a.m_size;
	m_data = new T[m_size];
	for (int i = 0; i < m_size; i++){
		m_data[i] = T(a.m_data[i]);
	}
}
template <class T>
//Assignment operator
Array<T>& Array<T>::operator =(const Array<T>& source)
{
	if (this != &source){//check if the source has the same address as the current array
		m_size = source.m_size;
		delete[] m_data;//delete the old C array
		m_data = new T[m_size];//declare and allocate the new array
		for (int i = 0; i < m_size; i++){
			m_data[i] = T(source.m_data[i]);
		}
	}
	else cout << "Same Array";
	return *this;
}
template <class T>
//operator [] can be use for both write and read
T& Array<T>::operator [](int index)//return the reference of the index-th element
{
	if (index > m_size - 1 || index < 0){
		throw -1;
	}
	return m_data[index];
}
template <class T>
//function can only be used for read
const T& Array<T>::operator [] (int index) const{
	if (index > m_size - 1 || index < 0){
		throw -1;
	}
	return m_data[index];
}
template <class T>
//function
int Array<T>::Size() const                                 //return size of the array
{
	return m_size;
}
template <class T>
void Array<T>::SetElement(int index, T &p)       //set the specific element
{
	if (index > m_size - 1 || index < 0){
		throw -1;
	}
	m_data[index] = T(p);
}
template <class T>
T& Array<T>::GetElement(int index) const                //get the specific element
{
	if (index > m_size - 1 || index < 0){
		throw -1;
	}
	else
		return m_data[index];
}
template <class T>

//static function
int Array<T>::DefaultSize(){//return the default size
	return Default_Size;
}

template <class T>
void Array<T>::DefaultSize(int index){//set the default size
	Default_Size = index;
}
#endif