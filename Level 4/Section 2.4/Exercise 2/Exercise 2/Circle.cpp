#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <string>
using namespace std;
Circle::Circle(){
	m_radius = 0.0;
	center = Point(0, 0);
}
Circle::Circle(const Circle &circle){
	m_radius = circle.m_radius;
	center = circle.center;
}
Circle::Circle(const double radius, const Point &pt){//constant arguement
	m_radius = radius;
	center = pt;
}
Circle::~Circle(){}
Point Circle::CentrePoint() const{//constant function
	return center;
}
void Circle::CentrePoint(const Point &pt){//constant arguement
	center = pt;
}
double Circle::Radius() const{//constant function
	return m_radius;
}
void Circle::Radius(double radius){
	m_radius = radius;
}
double Circle::Diameter() const{//constant function
	return 2 * m_radius;
}
double Circle::Area() const{//constant function
	return M_PI*pow(m_radius, 2);
}
double Circle::Circumference() const{//constant function
	return M_PI*Diameter();
}
std::string Circle::ToString() const{//constant function
	std::stringstream string;
	string << "The center point of this circle is: " << center.ToString()
		<< "Radius is: " << m_radius << endl << "Area is: " << Area() << endl << "Circumference is: " << Circumference();
	return string.str();
}
Circle& Circle::operator = (const Circle& source)
{
	Circle temp = Circle(source.m_radius, source.center);
	*this = temp;
	return *this;
}

//Global opeartor overloading
ostream& operator << (ostream& os, const Circle& p)
{
	os << p.ToString();
	return os;
}