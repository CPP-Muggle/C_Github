//this program is to use generic inheritance to generate a numeric Array
#include "Array.hpp"
#include "NumericArray.hpp"
#include <iostream>
using namespace std;

void main()
{
	NumericArray<int> intArray1(3);
	NumericArray<int> intArray2(3);
	NumericArray<int> intArray3(3);
	for (int i = 0; i != 3; i++){//initial the value by using [] operator from Array class
		intArray1[i] = i;
		intArray2[i] = i + 1;
	}
	intArray1=intArray1 * 3;//test for * operator
	intArray3 = intArray1 + intArray2;//test for + operator
	for (int i = 0; i != 3; i++){
		cout << intArray1.Getelement(i) << ", ";
	}
	cout << endl;
	for (int i = 0; i != 3; i++){
		cout << intArray3.Getelement(i) << ", ";
	}
	cout << endl;
	cout << intArray1.DotProduct(intArray2) << endl;//test for dot product
	//We assume here that the variables with type T can be multiplied together so as to calculate the dot product.
	//Thus we could not have Point numeric class in this case.
}