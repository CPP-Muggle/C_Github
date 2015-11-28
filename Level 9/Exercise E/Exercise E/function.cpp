#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include "function.hpp"
#include <iostream>

using namespace std;
#ifndef function_CPP
#define function_CPP

double CallOptionPrice(double S, double K, double T, double r, double sig, double b){//Calculate Call Option Pirce with all input parameters
	double d1, d2, price;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	d2 = (log(S / K) + (b - pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	price = S *exp((b - r)*T)*cdf(myNormal, d1) - K*exp(-r*T)*cdf(myNormal, d2);
	return price;
}
double PutOptionPrice(double S, double K, double T, double r, double sig, double b){//Calculate Put Option Pirce with all input parameters
	double d1, d2, price;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	d2 = (log(S / K) + (b - pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	price = K*exp(-r*T)*cdf(myNormal, -d2) - S * exp((b - r)*T)*cdf(myNormal, -d1);
	return price;
}
vector<double> MeshArray(double start, double end, double h){//creast Meshed Array
	vector<double> mesh;
	mesh.reserve(100);
	for (double i = start; i <= end; i=i+h)
		mesh.push_back(i);
	return mesh;
}

double DeltaCall(double S, double K, double T, double r, double sig, double b){//Calculate Delta Call Option Pirce with all input parameters
	double d1, delta;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	delta = cdf(myNormal, d1)*exp((b - r)*T);
	return delta;
}
double DeltaPut(double S, double K, double T, double r, double sig, double b){//Calculate Delta Put Option Pirce with all input parameters
	double d1, delta;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	delta = -cdf(myNormal, -d1)*exp((b - r)*T);
	return delta;
}
double Gamma(double S, double K, double T, double r, double sig, double b){//Calculate Gamma with all input parameters(same for Call&Put)
	double d1, gamma;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	gamma = pdf(myNormal, d1)*exp((b - r)*T) / (S*sig*sqrt(T));
	return gamma;
}
#endif