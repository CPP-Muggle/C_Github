#include <iostream>

using namespace std;

#ifndef PointArray_CPP
#define PointArray_CPP

#include "PointArray.hpp"

template <class T>
PointArray<T>::PointArray() :Array(){}//default constructor

template <class T>
PointArray<T>::~PointArray(){}//default deconstructor

template <class T>
PointArray<T>::PointArray(int size) : Array(size){}//set constructor

template <class T>
PointArray<T>::PointArray(const PointArray<T>& copy) : Array(copy){}//copy constructor

template <class T>
PointArray<T>& PointArray<T>::operator=(const PointArray<T>& source){//assignment operator
	if (this == &source) return *this;
	Array<T>::operator=(source);
	return *this;
}

template <class T>
double PointArray<T>::Length()const{
	double length = 0;
	int size = Array<T>::Size();
	PointArray<T> temp(size);
	for (int i = 0; i != size; i++){//store the value of cuurent point array into temp
		temp[i] = Array<T>::Getelement(i);
	}
	for (int i = 0; i != size; i++){
		for (int j = 0; j != size; j++){
			length = length + temp[i].Distance(temp[j]);//calculate the total length by calling the distance function from point object
		}
	}
	return length / 2;
}

#endif