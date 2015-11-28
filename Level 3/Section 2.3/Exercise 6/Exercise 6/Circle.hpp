#include <sstream>
#include <iostream>
#include "Point.hpp"
#ifndef Circle_HPP
#define Circle_HPP
class Circle{
private:
	double m_radius;
	Point center;
public:
	Circle();
	~Circle();
	Circle(const Circle &circle);//copy constructor
	Circle(const double radius, const Point &pt);//set constructor
	Point Circle::CentrePoint() const;//get center point
	void Circle::CentrePoint(const Point &pt);//set center point
	double Circle::Radius() const;//get radius
	void Circle::Radius(double radius);//set radius
	double Circle::Diameter() const;//get diameter of the circle
	double Circle::Area() const;//get area of the circle
	double Circle::Circumference() const;//get circumference of the circle
	std::string Circle::ToString() const;//return the discription of this circle
};
#endif;