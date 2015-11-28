#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <string>
Point::Point(){
	m_x = 0;
	m_y = 0;
};//default constructor
Point::~Point(){};
double Point::GetX()
{
	return m_x;
}//getter function of X
void Point::SetX(double newX)
{
	m_x = newX;
}//setter function of X
double Point::GetY()
{
	return m_y;
}//getter function of Y

void Point::SetY(double newY)
{
	m_y = newY;
}//setter function of Y
std::string Point::ToString()
{
	std::stringstream string;
	string<<"Point (" << m_x << "," << m_y << ")" << std::endl;
	return string.str();
}//function that discribes the point