#include "Line.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace std;
Line::Line()
{
	start_point = Point(0, 0);
	end_point = Point(0, 0);
}//normal constructor
Line::Line(const Point &pt, const Point &pt1)
{
	start_point = pt;
	end_point = pt1;
}//set constructor
Line::Line(const Line &line)
{
	start_point = line.start_point;
	end_point = line.end_point;
}//copy constructor
Line::~Line(){}
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
Line& Line::operator = (const Line& source)
{
	Line temp = Line(source.start_point, source.end_point);
	(*this) = temp;
	return *this;
}
//Global opeartor overloading
ostream& operator << (ostream& os, const Line& p)
{
	os<<"The start Point is " << p.start_point << "The end point is " << p.end_point;
	return os;
}