#define _USE_MATH_DEFINES
#include "Circle.hpp"
#include <cmath>
#include <string>
using namespace std;

Circle::Circle() :center(0.0, 0.0), m_radius(0.0), Shape()
{
}//colon syntax

Circle::Circle(const Circle &circle) : m_radius(circle.m_radius), center(circle.center), Shape(circle)
{
}
Circle::Circle(const double radius, const Point &pt) : m_radius(radius), center(pt), Shape()
{//constant arguement
}
Circle::~Circle()
{
}
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
	std::string s = Shape::ToString();//call the ToString() method of the Shape base class
	string << s << "The center point of this circle is: " << center
		<< "Radius is: " << m_radius << endl << "Area is: " << Area() << endl << "Circumference is: " << Circumference();
	return string.str();
}
void Circle::Draw()const
{
	cout << "********************" << endl;
}
Circle& Circle::operator = (const Circle& source)
{
	if (this == &source) return *this;
	Shape::operator=(source);
	Circle temp = Circle(source.m_radius, source.center);
	*this = temp;
	cout << "Circle Assignment Operator Called" << endl;
	return *this;
}
//Global opeartor overloading
ostream& operator << (ostream& os, const Circle& p)
{
	os << p.ToString();
	return os;
}



		

