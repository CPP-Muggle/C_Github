#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace std;
Point::Point(){
	m_x = 0;
	m_y = 0;
	cout << "Normal Constructor Occurs" << endl;
};//Normal Constructor
Point::Point(Point &p){
	m_x = p.GetX();
	m_y = p.GetY();
	cout << "Copy Constructor Occurs" << endl;
}//Copy Constructor
Point::Point(double x, double y){
	m_x = x;
	m_y = y;
	cout << "Set Constructor Occurs" << endl;
}//Set Constructor
Point::~Point(){
	cout << "Deconstructor Occurs" << endl;
};
double Point::GetX()
{
	return m_x;
}
void Point::SetX(double newX)
{
	m_x = newX;
}
double Point::GetY()
{
	return m_y;
}

void Point::SetY(double newY)
{
	m_y = newY;
}
std::string Point::ToString()
{
	std::stringstream string;
	string << "Point (" << m_x << "," << m_y << ")" << std::endl;
	return string.str();
}
double Point::DistanceOrigin()
{
	double num = std::sqrt(m_x*m_x + m_y*m_y);
	return num;
}
double Point::Distance(const Point &p){
	double num = std::sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
	/*if we would like to change the value in p, ie substitute p.m_x with p.SetX(newx), it will result in a compliation error
	saying that: 'Point::SetX' : cannot convert 'this' pointer from 'const Point' to 'Point &*/
	return num;
}