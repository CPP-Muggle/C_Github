#include <sstream>
#include <iostream>
#include <boost\variant.hpp>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Visitor.hpp"

//constructors and deconstructors
Visitor::Visitor() :m_x(0), m_y(0)
{
	std::cout << "Visitor Constructed" << std::endl;
}
Visitor::~Visitor()
{
}
Visitor::Visitor(double x, double y) :m_x(x), m_y(y)
{
}
Visitor::Visitor(const Visitor &v) : m_x(v.m_x), m_y(v.m_y)
{
}

//operator () that changes the coordinates of the shape
void Visitor::operator()(Point &p) const{
	p.X(p.X() + m_x);
	p.Y(p.Y() + m_y);
}
void Visitor::operator()(Line &l) const{
	l.P1(l.P1() + Point(m_x, m_y));
	l.P2(l.P2() + Point(m_x, m_y));
}
void Visitor::operator()(Circle &c) const{
	c.CentrePoint(c.CentrePoint() + Point(m_x, m_y));
	c.Radius(c.Radius() + 1);//add 1 to radius
}