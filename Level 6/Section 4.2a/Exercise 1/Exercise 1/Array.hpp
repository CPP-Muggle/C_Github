#include "Point.hpp"
#include <sstream>
#include <iostream>

#ifndef Array_HPP
#define Array_HPP

template <typename T> class Array{
private:
	int m_size;
	T* m_data;
public:

	//constructors
	Array();                           //default constructor
	~Array();                          //deconstructor
	Array(int size);                   //set constructor with size input
	Array(const Array<T> &a);             //copy constructor

	//operator
	Array<T>& operator =(const Array<T>& source);
	T& operator [](int index);
	const T& operator [] (int index) const;//conmpare to the non-const operator, this operator allows for read only, you cannot change the vaule inside m_data

	//function
	int Array<T>::Size()const;                                //return size of the array
	void Array<T>::SetElement(int index, T &p);      //set the specific element
	T& Array<T>::Getelement(int index)const;               //get the specific element
};
#endif