#include <sstream>
#include <iostream>
#include <boost\variant.hpp>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
using namespace std;
#ifndef Visitor_HPP
#define Visitor_HPP

class Visitor : public boost::static_visitor <> {
private:
	double m_x, m_y;
public:
	//constructors and deconstructors
	Visitor();
	~Visitor();
	Visitor(double x, double y);
	Visitor(const Visitor &v);

	//operator () that changes the coordinates of the shape
	void Visitor::operator()(Point &p) const;
	void Visitor::operator()(Line &l) const;
	void Visitor::operator()(Circle &c) const;
};
#endif