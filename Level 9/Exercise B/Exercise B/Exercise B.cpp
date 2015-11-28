//This exercise is to design a structure to calculate Perpetual American Option Price
#include <boost/math/distributions.hpp> 
#include <boost/math/distributions/normal.hpp>
#include <iostream>
#include <vector>
#include "PAmericanOption.hpp"
#include <fstream>

using namespace std;

void main(){

	ofstream myfile;
	myfile.open("Result.txt");//print output into file
	myfile.clear();
	//Ask for input of option parameters
	double K, S, sig, r, b;
	cout << "K: "; cin >> K;
	cout << "S: "; cin >> S;
	cout << "sig: "; cin >> sig;
	cout << "r: "; cin >> r;
	cout << "b: "; cin >> b;

	//Calculate Perpetual American Call & Put Option pirze and print them out
	cout << "Price, put, " << ", S: " << PerpetualPut(S, K, r, sig, b) << endl;
	cout << "Price, call, " << ", S: " << PerpetualCall(S, K, r, sig, b) << endl;
	myfile << "Price, put, " << ", S: " << PerpetualPut(S, K, r, sig, b) << endl;
	myfile << "Price, call, " << ", S: " << PerpetualCall(S, K, r, sig, b) << endl;

	//Initial a Option 
	PAmericanOption Option(110, 100, 0.1, 0.1, 0.02);
	//Initial a Stock Array from 80 to 120
	vector<double> Stock = MeshArray(80, 120, 1);
	vector<double> prize_c;
	vector<double> prize_p;

	//Calculate Perpetual American Call & Put Option prize given different Stock Price
	prize_c = Option.PerCallOption(Stock);
	prize_p = Option.PerPutOption(Stock);

	//Print out the result
	myfile << "********************************************************" << endl;
	cout << "********************************************************" << endl;
	for (unsigned int i = 0; i < Stock.size(); i++){
		myfile << "Stock Price: " << Stock[i] << "," << "Perpetual American Call: " << prize_c[i] << endl;
		cout << "Stock Price: " << Stock[i] << "," << "Perpetual American Call: " << prize_c[i] << endl;

	}
	myfile << "********************************************************" << endl;
	cout << "********************************************************" << endl;
	for (unsigned int i = 0; i < Stock.size(); i++){
		myfile << "Stock Price: " << Stock[i] << "," << "Perpetual American Put: " << prize_p[i] << endl;
		cout << "Stock Price: " << Stock[i] << "," << "Perpetual American Put: " << prize_p[i] << endl;
	}
	myfile.close();
}