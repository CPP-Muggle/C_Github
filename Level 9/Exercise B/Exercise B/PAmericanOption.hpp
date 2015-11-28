#include <iostream>
#include <vector>
#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>

using namespace std;

#ifndef PAmericanOption_HPP
#define PAmericanOption_HPP

//global functions
double PerpetualPut(double S, double K, double r, double sig, double b);//Perpetual Put option pricing
double PerpetualCall(double S, double K, double r, double sig, double b);//Perpetual Put option pricing
vector<double> MeshArray(double start, double end, double h);//creast Meshed Array

class PAmericanOption{
private:
	double S, K, r, sig, b;
public:

	//Constructors and Deconstructors
	PAmericanOption();
	~PAmericanOption();
	PAmericanOption(double tempS, double tempK, double tempr, double tempsig, double tempb);//set constructor
	PAmericanOption(PAmericanOption& pa);

	//functions
	vector<double> PerPutOption(vector<double> S)const;//Calculate Perpetual Put Option given different stock price
	vector<double> PerCallOption(vector<double> S)const;//Calculate Perpetual Call Option given different stock price
};
#endif