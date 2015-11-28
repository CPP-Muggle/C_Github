#include <iostream>
#include <vector>
using namespace std;
#ifndef EuroOption_HPP
#define EuroOption_HPP

class EuroOption{
private:
	double S, K, T, r, sig, b;
public:
	//constructors and deconstructor
	EuroOption();
	~EuroOption();
	EuroOption(double tempS, double tempK, double tempT, double tempr, double tempsig, double tempb);
	EuroOption(const EuroOption &eu);

	//Function
	double CallOption()const;//Calculate Call option price using class data
	double PutOption()const;//Calculate Put option price using class data
	vector<double> CallPrice(vector<double> s,const string st) const;//Calculate Call option price with multiple input
	vector<double> PutPrice(vector<double> s, const string st) const;//Calculate Put option price with multiple input
	vector<double> Delta(vector<double> s) const;//Calculate Call delta price with multiple stock prices
	double CallDeltaApprox(double h) const;//approximate call delta price
	double PutDeltaApprox(double h) const;//approximate put delta price
	double CallGammaApprox(double h)const;//approximate call gamma price
	double PutGammaApprox(double h)const;//approximate put gamma price
};
#endif