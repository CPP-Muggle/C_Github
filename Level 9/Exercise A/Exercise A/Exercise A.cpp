//This exercise is to design a structure that can solve Option Pricing problems
#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include "EuroOption.hpp"
#include "function.hpp"
#include <iostream>
using namespace std;



void main(){
    //**********************************A.1***********************************
	EuroOption Batch1(100,120,1.5,0.04,0.4,0);

	cout << "Call Option Price for Batch 1 is: " << Batch1.CallOption() << endl;
	cout << "Put Option Price for Batch 1 is: " << Batch1.PutOption() << endl;

	//Test for Put-Call Parity
	cout << "Put Option Calculated by Put-Call Parity is: " << Batch1.CallOption() + 65 * exp(-0.08*0.25) - 60 << endl;

	//increase the underlying stock price from 10 to 50
	vector<double> S = MeshArray(10, 50, 1);
	vector<double>price_s = Batch1.CallPrice(S, "S");
	cout << "**********************************************************" << endl;
	for (unsigned int i = 0; i < S.size(); i++){
		cout << "Stock Price: " << S[i] << " , " << "Call Option Price: " << price_s[i] << endl;
	}

	//increase expiry time from 0.1 to 1
	vector<double> T = MeshArray(0.1, 1, 0.1);
	vector<double>price_t = Batch1.CallPrice(T, "T");
	cout << "**********************************************************" << endl;
	for (unsigned int i = 0; i < T.size(); i++){
		cout << "Expiry Time: " <<T[i] << " , " << "Call Option Price: " << price_t[i] << endl;
	}

	//increase volatility from 0.1 to 1
	vector<double> V = MeshArray(0.1, 1, 0.1);
	vector<double>price_v = Batch1.CallPrice(V, "V");
	cout << "**********************************************************" << endl;
	for (unsigned int i = 0; i < V.size(); i++){
		cout << "Volatility: " << V[i] << " , " << "Call Option Price: " << price_v[i] << endl;
	}
	cout << "**********************************************************" << endl;

	//**********************************A.2***********************************
	//Initialize a European Option 
	EuroOption option(105, 100, 0.5, 0.1, 0.36, 0);

	//Calculate the exact Delta price for Call and Put Option
	cout << "Exact Delta Call Price is: " << DeltaCall(105, 100, 0.5, 0.1, 0.36, 0) << endl;
	cout << "Exact Delta Put Price is: " << DeltaPut(105, 100, 0.5, 0.1, 0.36, 0) << endl;
	//Use Approximation to Calculate Delta
	cout << "Approximate Delta Call Price with h=1 is: " << option.CallDeltaApprox(1) << endl;
	cout << "Approximate Delta Put Price with h=1 is: " << option.PutDeltaApprox(1) << endl;
	cout << "Approximate Delta Call Price with h=0.1 is: "<< option.CallDeltaApprox(0.1) << endl;
	cout << "Approximate Delta Put Price with h=0.1 is: "<< option.PutDeltaApprox(0.1) << endl;
	cout << "**********************************************************" << endl;

	//Calculate the exact Gamma for both Call & Put
	cout << "Exact Gamma Price is: " << Gamma(105, 100, 0.5, 0.1, 0.36, 0) << endl;
	//Use Approximation to Calculate Gamma
	cout << "Approximate Gamma Call with h=2 is: " << option.CallGammaApprox(2) << endl;
	cout << "Approximate Gamma Put with h=2 is: " << option.PutGammaApprox(2) << endl;
	cout << "Approximate Gamma Call with h=1 is: " << option.CallGammaApprox(1) << endl;
	cout << "Approximate Gamma Put with h=1 is: " << option.PutGammaApprox(1) << endl;

	//Increase stock price from 10 to 50 and calculate call delta price 
	vector<double> delta = option.Delta(S);
	cout << "**********************************************************" << endl;
	for (unsigned int i = 0; i < S.size(); i++){
		cout << "Stock Price: " << S[i] << " , " << "Call Delta Price: " << delta[i] << endl;
	}
}