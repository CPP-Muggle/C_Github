#include <sstream>
#include <iostream>
#ifndef Point_HPP
#define Point_HPP
class Point{
private:
	double m_x, m_y;
public:
	Point();//default constructor
	~Point();//deconstructor
	Point(Point &p);//copy constructor
	Point(double x, double y);//constructor
	double Point::GetX();
	double Point::GetY();
	void Point::SetX(double newx);
	void Point::SetY(double newy);
	std::string Point::ToString();
	double DistanceOrigin();
	double Distance(Point p);
};
#endif