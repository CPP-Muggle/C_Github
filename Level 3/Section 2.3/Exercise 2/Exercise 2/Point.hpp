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
	double Point::GetX();
	double Point::GetY();
	void Point::SetX(double newx);
	void Point::SetY(double newy);
	std::string Point::ToString();
	double DistanceOrigin();
	double Distance(const Point &p);
	/*We past the Point by reference so that function Distance will not make another copy of p*/
};
#endif