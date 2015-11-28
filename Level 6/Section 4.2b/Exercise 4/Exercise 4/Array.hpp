
#include <sstream>
#include <iostream>

#ifndef Array_HPP
#define Array_HPP

template <class T> class Array{
private:
	int m_size;
	T* m_data;
	static int Default_Size;
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
	int Array<T>::Size()const;                             //return size of the array
	void Array<T>::SetElement(int index, T &p);            //set the specific element
	T& Array<T>::GetElement(int index)const;               //get the specific element

	//static functions
	static int DefaultSize();//return the default size
	static void DefaultSize(int index);//set the default size   
};
#ifndef Array_cpp // Must be the same name as in source file #define
#include "Array.cpp"
#endif
#endif