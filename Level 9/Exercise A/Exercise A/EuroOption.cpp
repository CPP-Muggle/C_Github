#include <iostream>
#include <vector>
#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include "EuroOption.hpp"
#include "function.hpp"

using namespace std;

#ifndef EuroOption_CPP
#define EuroOption_CPP

EuroOption::EuroOption() :K(0.0), S(0.0), r(0.0), sig(0.0), T(0.0),b(0.0){}//default constructor

EuroOption::~EuroOption(){}//deconstructor

EuroOption::EuroOption(double tempS, double tempK, double tempT, double tempr, double tempsig, double tempb) : S(tempS),K(tempK),T(tempT),r(tempr),sig(tempsig),b(tempb){}

EuroOption::EuroOption(const EuroOption &eu) : K(eu.K), S(eu.S), r(eu.r), sig(eu.sig), T(eu.T),b(eu.b){}//copy constructor

double EuroOption::CallOption()const{//Calculate Call option price using class data
	double d1, d2, price;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	d2 = (log(S / K) + (b - pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	price = S *exp((b - r)*T)*cdf(myNormal, d1) - K*exp(-r*T)*cdf(myNormal, d2);
	return price;
}
double EuroOption::PutOption()const{//Calculate Put option price using class data
	double d1, d2, price;
	using namespace boost::math;
	normal_distribution<float> myNormal;
	d1 = (log(S / K) + (b + pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	d2 = (log(S / K) + (b - pow(sig, 2) / 2)*T) / (sig*sqrt(T));
	price = K*exp(-r*T)*cdf(myNormal, -d2) - S * exp((b - r)*T)*cdf(myNormal, -d1);
	return price;
}

vector<double> EuroOption::CallPrice(vector<double> s, const string st) const{//Calculate Call option price with multiple input
	vector<double> price;
	if (st == "S"){//increase stock price
		for (unsigned int i = 0; i < s.size(); i++){
			price.push_back(CallOptionPrice(s[i], K, T, r, sig, b));
		}
	}
	else
		if (st == "T"){//increase Expiry time
			for (unsigned int i = 0; i < s.size(); i++){
				price.push_back(CallOptionPrice(S, K, s[i], r, sig, b));
			}
		}
		else{//increase volatility
			for (unsigned int i = 0; i < s.size(); i++){
				price.push_back(CallOptionPrice(S, K, T, r, s[i], b));
			}
		}
		return price;
}
vector<double> EuroOption::PutPrice(const vector<double> s, const string st) const{//Calculate Put option price with multiple input
	vector<double> price;
	if (st == "S"){//increase stock price
		for (unsigned int i = 0; i < s.size(); i++){
			price.push_back(PutOptionPrice(s[i], K, T, r, sig, b));
		}
	}
	else
		if (st == "T"){//increase Expiry time
			for (unsigned int i = 0; i < s.size(); i++){
				price.push_back(PutOptionPrice(S, K, s[i], r, sig, b));
			}
		}
		else{//increase volatility
			for (unsigned int i = 0; i < s.size(); i++){
				price.push_back(PutOptionPrice(S, K, T, r, s[i], b));
			}
		}
		return price;
}
vector<double> EuroOption::Delta(vector<double> s) const{//Calculate Call delta price with multiple stock prices
	vector<double> delta;
	for (unsigned int i = 0; i < s.size(); i++){
		delta.push_back(DeltaCall(s[i], K, T, r, sig, b));
	}
	return delta;
}
double EuroOption::CallDeltaApprox(double h) const{//approximate call delta price
	double delta;
	delta = (CallOptionPrice(S + h, K, T, r, sig, b) - CallOptionPrice(S - h, K, T, r, sig, b)) / (2 * h);
	return delta;
}
double EuroOption::PutDeltaApprox(double h) const{//approximate put delta price
	double delta;
	delta = (PutOptionPrice(S + h, K, T, r, sig, b) - PutOptionPrice(S - h, K, T, r, sig, b)) / (2 * h);
	return delta;
}
double EuroOption::CallGammaApprox(double h)const{//approximate call gamma price
	double gamma;
	gamma = (CallOptionPrice(S + h, K, T, r, sig, b) - 2 * CallOptionPrice(S, K, T, r, sig, b) + CallOptionPrice(S - h, K, T, r, sig, b))/ pow(h, 2);
	return gamma;
}
double EuroOption::PutGammaApprox(double h)const{//approximate put gamma price
	double gamma;
	gamma =(PutOptionPrice(S + h, K, T, r, sig, b) - 2 * PutOptionPrice(S, K, T, r, sig, b) + PutOptionPrice(S - h, K, T, r, sig, b))/ pow(h, 2);
	return gamma;
}
#endif