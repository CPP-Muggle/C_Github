#include "Array.hpp"
#ifndef NumericArray_HPP
#define NumericArray_HPP


template <class T> 
class NumericArray :public Array<T>{
public:

	//constructors
	NumericArray();//default constructor
	~NumericArray();//default deconstructor
	NumericArray(int size);//set constructor
	NumericArray(const NumericArray<T>& copy);//copy constructor

	//operators
	NumericArray<T>& operator=(const NumericArray<T>& source);//Assignment operator
	NumericArray<T> operator*(const T& factor);//scale the whole array by a factor
	NumericArray<T> operator+(const NumericArray<T>& source);//add the elements of two numeric arrays

	//functionality
	T DotProduct(const NumericArray<T>& source);//dot product funtion
};
#ifndef NumericArray_cpp // Must be the same name as in source file #define
#include "NumericArray.cpp"
#endif
#endif