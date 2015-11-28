//This exercise is to store our output into a Excel file and make a graph
#include "UtilitiesDJD/VectorsAndMatrices/Vector.cpp"
#include "UtilitiesDJD/ExcelDriver/ExcelMechanisms.hpp"
#include "UtilitiesDJD/Geometry/Range.cpp"
#include "UtilitiesDJD/ExceptionClasses/DatasimException.hpp"
#include "function.hpp"

#include <cmath>
#include <list>
#include <string>

void main(){

	//Batch1
	double S = 60;
	double K = 65;
	double T = 0.25;
	double sig = 0.3;
	double r = 0.08;
	double b = r;

	long N = 80;
	//Initial the stock prices
	Vector<double, long> S1(N, 0.0);

	S1[S1.MinIndex()] = 20;
	S1[S1.MaxIndex()] = 100;

	for (long j = S1.MinIndex() + 1; j <= S1.MaxIndex() - 1; ++j)
	{
		S1[j] = S1[j - 1] + 1;
	}

	//Calculate Call & Put Option price with different Stock price
	Vector<double, long>Call(N, 0.0);
	Vector<double, long>Put(N, 0.0);

	for (long j = Call.MinIndex(); j <= Call.MaxIndex(); ++j)
	{
		Call[j] = CallOptionPrice(S1[j], K, T, r, sig, b);
	}
	for (long j = Put.MinIndex(); j <= Put.MaxIndex(); ++j)
	{
		Put[j] = PutOptionPrice(S1[j], K, T, r, sig, b);
	}
	std::cout << "Data has been created\n";

	//store and print the excel file
	try
	{
		printPairExcel(S1, Call, Put,
			string("Call & Put Option"), string("Stock Price"), string("Option Value"));
	}
	catch (DatasimException& e)
	{
		e.print();
	}


}