#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include <iostream>
#include "EuroOption.hpp"

using namespace std;
#ifndef function_HPP
#define function_HPP

double CallOptionPrice(double S, double K, double T, double r, double sig, double b);//Calculate Call Option Pirce with all input parameters
double PutOptionPrice(double S, double K, double T, double r, double sig, double b);//Calculate Put Option Pirce with all input parameters
double DeltaCall(double S, double K, double T, double r, double sig, double b);//Calculate Delta Call Option Pirce with all input parameters
double DeltaPut(double S, double K, double T, double r, double sig, double b);//Calculate Delta Put Option Pirce with all input parameters
double Gamma(double S, double K, double T, double r, double sig, double b);//Calculate Gamma with all input parameters(same for Call&Put)
vector<double> MeshArray(double start, double end, double h);//creast Meshed Array
#endif