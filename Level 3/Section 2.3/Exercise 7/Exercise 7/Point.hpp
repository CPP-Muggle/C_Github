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
	Point(const Point &p);
	Point(double x, double y);
	double Point::X()const;//constant function
	void Point::X(double newx){ m_x = newx; }
	/*Default Inline for setter function of X*/
	double Point::Y() const;//constant function
	void Point::Y(double newy){ m_y = newy; }
	/*Default Inline for setter function of Y*/
	double Distance()const;//constant function
	double Distance(const Point &p)const;//constant function
	/*We have the same function name "Distance" with difference input parameter to substitute DistanceOrigin() and Distance(double newx)*/
	std::string Point::ToString() const;//constant function
};
#endif
inline double Point::X()const{
	return m_x;
}/*Normal Inline for getter function of X*/
inline double Point::Y()const{
	return m_y;
}/*Normal Inline for getter function of Y*/