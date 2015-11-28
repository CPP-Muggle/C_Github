#include "Point.hpp"
#include <sstream>
#include <iostream>

#ifndef Array_HPP
#define Array_HPP

namespace ShadowKnight{
	namespace Containers{
		class Array{
		private:
			int m_size;
			ShadowKnight::CAD::Point* m_data;
		public:

			//constructors
			Array();                           //default constructor
			~Array();                          //deconstructor
			Array(int size);                   //set constructor with size input
			Array(const Array &a);             //copy constructor

			//operator
			Array& operator =(const Array& source);
			ShadowKnight::CAD::Point& operator [](int index);
			const ShadowKnight::CAD::Point& operator [] (int index) const;//conmpare to the non-const operator, this operator allows for read only, you cannot change the vaule inside m_data

			//function
			int Array::Size();                                //return size of the array
			void Array::SetElement(int index, ShadowKnight::CAD::Point &p);      //set the specific element
			ShadowKnight::CAD::Point& Array::Getelement(int index);               //get the specific element
		};
	}
}

#endif