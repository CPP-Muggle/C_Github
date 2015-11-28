#include "Array.hpp"
#ifndef PointArray_HPP
#define PointArray_HPP

template <class T>
class PointArray :public Array < T > {
public:
	//constructors
	PointArray();//default constructor
	~PointArray();//default deconstructor
	PointArray(int size);//set constructor
	PointArray(const PointArray<T>& copy);//copy constructor

	//operators
	PointArray<T>& operator=(const PointArray<T>& source);//Assignment operator

	//functionality
	double Length()const;//return the total length between the points in the array
};
#ifndef PointArray_cpp // Must be the same name as in source file #define
#include "PointArray.cpp"
#endif
#endif