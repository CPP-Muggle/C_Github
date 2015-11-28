#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>
using namespace std;
Point::Point(){
	m_x = 0;
	m_y = 0;
	cout << "Normal Constructor Occurs" << endl;
};
Point::Point(Point &p){
	m_x = p.X();
	m_y = p.Y();
	cout << "Copy Constructor Occurs" << endl;
}
Point::Point(double x, double y){
	m_x = x;
	m_y = y;
	cout << "Set Constructor Occurs" << endl;
}
Point::~Point(){
	cout << "Deconstructor Occurs" << endl;
};
double Point::X()const //constant function
{
	return m_x;
}
void Point::X(double newX)
{
	m_x = newX;
}
/*We have the same function name "X" with difference input parameter to substitute GetX() and SetX(double newx)*/
double Point::Y()const //constant function
{
	return m_y;
}

void Point::Y(double newY)
{
	m_y = newY;
}
/*We have the same function name "Y" with difference input parameter to substitute GetY() and SetY(double newx)*/
std::string Point::ToString()const //constant function
{
	std::stringstream string;
	string << "Point (" << m_x << "," << m_y << ")" << std::endl;
	return string.str();
}
double Point::Distance()const //constant function
{
	double num = std::sqrt(m_x*m_x + m_y*m_y);
	return num;
}
double Point::Distance(const Point &p)const //constant function
{
	double num = std::sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
	/*if we would like to change the value in p, ie substitute p.m_x with p.SetX(newx), it will result in a compliation error
	saying that: 'Point::SetX' : cannot convert 'this' pointer from 'const Point' to 'Point &*/
	return num;
}
/*We have the same function name "Distance" with difference input parameter to substitute DistanceOrigin() and Distance(double newx)*/