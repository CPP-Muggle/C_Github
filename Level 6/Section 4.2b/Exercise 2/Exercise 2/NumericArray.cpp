#include <iostream>

using namespace std;

#ifndef NumericArray_CPP
#define NumericArray_CPP

#include "NumericArray.hpp"

template <class T>
NumericArray<T>::NumericArray() :Array(){}//default constructor

template <class T>
NumericArray<T>::~NumericArray(){}//default deconstructor

template <class T>
NumericArray<T>::NumericArray(int size) : Array(size){}//set constructor

template <class T>
NumericArray<T>::NumericArray(const NumericArray<T>& copy) : Array(copy){}//copy constructor

template <class T>
NumericArray<T>& NumericArray<T>::operator=(const NumericArray<T>& source){//assignment operator
	if (this == &source) return *this;
	Array<T>::operator=(source);
	return *this;
}

template <class T>
NumericArray<T> NumericArray<T>::operator*(const T& factor){
	int size = Array<T>::Size();
	NumericArray<T> temp(size);
	for (int i = 0; i != size; i++){
		temp[i]=Array<T>::Getelement(i)*factor;//get the scaled element into a new object
	}
	return temp;
}

template <class T>
NumericArray<T> NumericArray<T>::operator+(const NumericArray<T>& source){
	NumericArray<T> temp(Array<T>::Size());
	if (Array<T>::Size() != source.Size()) //check whether two array have the same length
		throw - 1;
	else{
		for (int i = 0; i != source.Size(); i++){
			temp[i]=Array<T>::Getelement(i) + source.Getelement(i);//get the sumed element into a new object
		}
	}
	return temp;
}

template <class T>
T NumericArray<T>::DotProduct(const NumericArray<T>& source){
	T sum;
	if (Array<T>::Size() != source.Size())//check whether two array have the same length
		throw - 1;
	else{
		sum = Array<T>::Getelement(0)*source.Getelement(0);
		for (int i = 1; i != source.Size(); i++){
			sum = sum + Array<T>::Getelement(i)*source.Getelement(i);//calculate the dot product
		}
	}
	return sum;
}


#endif