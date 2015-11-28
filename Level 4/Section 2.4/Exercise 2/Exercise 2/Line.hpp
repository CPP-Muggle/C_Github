#include "Point.hpp"
#include <sstream>
#include <iostream>
using namespace std;
#ifndef Line_HPP
#define Line_HPP
class Line{
private:
	Point end_point, start_point;
public:
	//constructors
	Line();                                     //default constructor
	~Line();                                    //deconstructor
	Line(const Point &pt, const Point &pt1);    //set constructor
	Line(const Line &line);                     //copy constructor

	//Accessing function
	Point Line::P1() const;                     //return start point
	void Line::P1(const Point &newp);           //set start point
	Point Line::P2() const;                     //return end point
	void Line::P2(const Point &newp);           //set end point

	//Functions
	std::string Line::ToString() const;         //print out the information of line
	double Line::Length() const;                //return the length of the line

	// Member operator overloading
	Line& operator = (const Line& source);
};
//Global opeartor overloading
ostream& operator << (ostream& os, const Line& p);
#endif