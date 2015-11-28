#include <sstream>
#include <iostream>
#include "Shape.hpp"
#ifndef Point_HPP
#define Point_HPP
class Point:public Shape{
private:
	double m_x, m_y;
public:
	//constructors
	Point();                       // Default constructor
	~Point();                      // Deconstructor
	Point(const Point &p);         // Copy constructor
	Point(double x, double y);     // Set constructor

	// Accessing functions
	double Point::X()const;               //return X-coordinate 
	void Point::X(double newx);           //set X-coordinate
	double Point::Y()const;               //return X-coordinate 
	void Point::Y(double newy);           //set X-coordinate  

	// Member operator overloading
	Point operator - () const;                 // Negate the coordinates.
	Point operator * (double factor) const;    // Scale the coordinates.
	Point operator + (const Point& p) const;   // Add coordinates.
	bool operator == (const Point& p) const;   // Equally compare operator.
	Point& operator = (const Point& source);   // Assignment operator.
	Point& operator *= (double factor);        // Scale the coordinates & assign.

	//Functionality
	double Distance()const;               //return distance to origin
	double Distance(const Point &p)const; //return distance to point p
	std::string Point::ToString()const;   //print out point information
	void Point::Draw()const;                          //overwrite Draw function in point

	//Global opeartor overloading
	friend ostream& operator << (ostream& os, const Point& p);
};
#endif