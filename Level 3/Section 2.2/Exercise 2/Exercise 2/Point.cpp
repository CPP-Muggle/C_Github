#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>
Point::Point(){
	m_x = 0;
	m_y = 0;
};//default constructor
Point::~Point(){};//deconstructor
double Point::GetX()
{
	return m_x;
}//get function of X
void Point::SetX(double newX)
{
	m_x = newX;
}//set function of X
double Point::GetY()
{
	return m_y;
}//get function of Y

void Point::SetY(double newY)
{
	m_y = newY;
}//set function of Y
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
}//distance to origin (0,0)
double Point::Distance(Point p){
	double p_x = p.GetX();
	double p_y = p.GetY();
	double num = std::sqrt((m_x - p_x)*(m_x - p_x) + (m_y - p_y)*(m_y - p_y));
	return num;
}//distance to other point