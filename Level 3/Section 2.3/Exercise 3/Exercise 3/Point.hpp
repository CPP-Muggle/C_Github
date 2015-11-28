#include <sstream>
#include <iostream>
#ifndef Point_HPP
#define Point_HPP
class Point{
private:
	double m_x, m_y;
public:
	Point();
	~Point();
	Point(Point &p);
	Point(double x, double y);
	double Point::X();
	void Point::X(double newx);
	/*We have the same function name "X" with difference input parameter to substitute GetX() and SetX(double newx)*/
	double Point::Y();
	void Point::Y(double newy);
	/*We have the same function name "Y" with difference input parameter to substitute GetY() and SetY(double newx)*/
	double Distance();
	double Distance(const Point &p);
	/*We have the same function name "Distance" with difference input parameter to substitute DistanceOrigin() and Distance(double newx)*/
	std::string Point::ToString();
};
#endif