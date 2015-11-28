#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include <iostream>
#include <vector>
#include "PAmericanOption.hpp"
using namespace std;

#ifndef PAmericanOption_CPP
#define PAmericanOption_CPP

//global functions
double PerpetualPut(double S, double K, double r, double sig, double b){//Perpetual Put option pricing
	double y2, price;
	y2 = 0.5 - b / pow(sig, 2) - sqrt(pow(b / pow(sig, 2) - 0.5, 2) + 2 * r / pow(sig, 2));
	price = K / (1 - y2)*pow((y2 - 1) / y2*S / K, y2);
	return price;
}
double PerpetualCall(double S, double K, double r, double sig, double b){//Perpetual Call option pricing
	double y1, price;
	y1 = 0.5 - b / pow(sig, 2) + sqrt(pow(b / pow(sig, 2) - 0.5, 2) + 2 * r / pow(sig, 2));
	price = K / (y1 - 1)*pow((y1 - 1) / y1*S / K, y1);
	return price;
}
vector<double> MeshArray(double start, double end, double h){//creat Meshed Array
	vector<double> mesh;
	mesh.reserve(100);
	for (double i = start; i <= end; i = i + h)
		mesh.push_back(i);
	return mesh;
}

//Class Member functions
PAmericanOption::PAmericanOption() :S(0), K(0), r(0), sig(0), b(0){}

PAmericanOption::~PAmericanOption(){}

PAmericanOption::PAmericanOption(double tempS, double tempK, double tempr, double tempsig, double tempb) : S(tempS), K(tempK), r(tempr), sig(tempsig), b(tempb){}

PAmericanOption::PAmericanOption(PAmericanOption& pa) : K(pa.K), S(pa.S), r(pa.r), sig(pa.sig), b(pa.b){}

//functions
vector<double> PAmericanOption::PerPutOption(vector<double> S)const{//Calculate Perpetual Put Option given different stock price
	vector<double> price;
	for (unsigned int i = 0; i < S.size(); i++){
		price.push_back(PerpetualPut(S[i], K, r, sig, b));
	}
	return price;
}
vector<double> PAmericanOption::PerCallOption(vector<double> S)const{//Calculate Perpetual Call Option given different stock price
	vector<double> price;
	for (unsigned int i = 0; i < S.size(); i++){
		price.push_back(PerpetualCall(S[i], K, r, sig, b));
	}
	return price;
}

#endif