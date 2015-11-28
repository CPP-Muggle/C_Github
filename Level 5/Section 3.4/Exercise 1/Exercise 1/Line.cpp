#include "Line.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

Line::Line() :start_point(0.0, 0.0), end_point(0.0, 0.0)
{
	cout << "Line Constructor Called" << endl;
}//colon syntax

Line::Line(const Point &pt, const Point &pt1) : start_point(pt), end_point(pt1)
{
	cout << "Line Constructor Called" << endl;
}//set constructor
Line::Line(const Line &line) : start_point(line.start_point), end_point(line.end_point)
{
	cout << "Line Constructor Called" << endl;
}//copy constructor
Line::~Line()
{
	cout << "Line Deconstructor Called" << endl;
}
Point Line::P1()const
{
	return start_point;
}
void Line::P1(const Point &newp)
{
	start_point = newp;
}
Point Line::P2() const
{
	return end_point;
}
void Line::P2(const Point &newp)
{
	end_point = newp;
}
std::string Line::ToString() const
{
	std::stringstream string;
	string << "The start Point is " << start_point.ToString() << "The end point is " << end_point.ToString();
	return string.str();
}
double Line::Length() const
{
	return start_point.Distance(end_point);
}
//member operator overloading
Line& Line::operator = (const Line& source)
{
	if (this == &source) return *this;
	Line temp = Line(source.start_point, source.end_point);
	(*this) = temp;
	cout << "Line Assignment operator Called" << endl;
	return *this;
}
//Global operator overloading
ostream& operator << (ostream& os, const Line& p)
{
	os << p.ToString();
	return os;
}
