#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace std;
Point::Point(){
	m_x = 0;
	m_y = 0;
};
Point::Point(const Point &p){
	m_x = p.X();
	m_y = p.Y();
}
Point::Point(double x, double y){
	m_x = x;
	m_y = y;
}
Point::~Point(){
};
double Point::X() const
{
	return m_x;
}
void Point::X(double newX)
{
	m_x = newX;
}

double Point::Y() const
{
	return m_y;
}

void Point::Y(double newY)
{
	m_y = newY;
}
std::string Point::ToString()const //constant function
{
	std::stringstream string;
	string << "Point (" << m_x << "," << m_y << ")" << std::endl;
	return string.str();
}
double Point::Distance()const 
{
	double num = std::sqrt(m_x*m_x + m_y*m_y);
	return num;
}
double Point::Distance(const Point &p)const 
{
	double num = std::sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
	return num;
}
Point Point::operator - () const// Negate the coordinates.
{
	return Point(-m_x, -m_y);
}
Point Point::operator * (double factor) const    // Scale the coordinates.
{
	return Point(factor*m_x, factor*m_y);
}
Point Point::operator + (const Point& p) const   // Add coordinates.
{
	return Point(m_x + p.m_x, m_y + p.m_y);
}
bool Point::operator == (const Point& p) const// Equally compare operator.
{
	return (m_x == p.X() && m_y == p.Y());
}
Point& Point::operator = (const Point& source)   // Assignment operator.
{
	m_x = source.m_x;
	m_y = source.m_y;
	return *this;
}
Point& Point::operator *= (double factor)       // Scale the coordinates & assign.
{
	Point temp = Point(m_x*factor, m_y*factor);
	(*this) = temp;
	return *this;
}
ostream& operator << (ostream& os, const Point& cmp)//print the point information
{
	os << cmp.ToString();
	return os;
}
