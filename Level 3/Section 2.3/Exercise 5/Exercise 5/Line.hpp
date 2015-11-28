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
	Line();
	~Line();
	Line(const Point &pt, const Point &pt1);//pass by reference
	Line(const Line &line);//pass by reference
	Point Line::P1() const;
	void Line::P1(const Point &newp);//pass by reference
	Point Line::P2() const;
	void Line::P2(const Point &newp);//pass by reference
	std::string Line::ToString() const;
	double Line::Length() const;
};
#endif