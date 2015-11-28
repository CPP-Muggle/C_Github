//This exercise is to test how to generate random numbers with specific distribution
#include <iostream>
#include <iomanip>
#include <boost\random.hpp>
#include <map>
#include <ctime>		// std::time
using namespace std;

void main(){
	// Throwing dice.
	// Mersenne Twister.
	boost::random::mt19937 myRng;

	// Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (time(0)));

	// Uniform in range [1,6]
	boost::random::uniform_int_distribution<int> six(1, 6);

	//We now create a map that holds the frequency of each outcome :
	map<int, long> statistics; // Structure to hold outcome + frequencies
	int outcome; // Current outcome
	int times;
	cout << "How many trials? ";
	cin >> times;

	//roll dices and count the outcome with number of times inputed by user
	for (int i = 0; i < times; i++){
		outcome = six(myRng);
		statistics[outcome-1]++;
	}

	//calculate and print out the frequencies
	for (int i = 0; i < 6; i++){
		cout << fixed << "Trial " << (i + 1) << " has " << setprecision(4) << float(statistics[i]*100.0/times) << "% outcomes" << endl;
	}	
}