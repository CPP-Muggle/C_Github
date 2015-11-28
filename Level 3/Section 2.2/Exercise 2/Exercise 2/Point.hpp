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
	double Point::GetX();//get function of X
	double Point::GetY();//get function of Y
	void Point::SetX(double newx);//set function of X
	void Point::SetY(double newy);//set function of Y
	std::string Point::ToString();
	double DistanceOrigin();
	double Distance(Point p);
};
#endif