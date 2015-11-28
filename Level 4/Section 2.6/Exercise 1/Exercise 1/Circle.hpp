#include <sstream>
#include <iostream>
#include "Point.hpp"
#ifndef Circle_HPP
#define Circle_HPP
using namespace ShadowKnight::CAD;
namespace ShadowKnight{
	namespace CAD{
		class Circle{
		private:
			double m_radius;
			Point center;
		public:

			//constructor
			Circle();
			~Circle();
			Circle(const Circle &circle);//copy constructor
			Circle(const double radius, const Point &pt);//set constructor

			//Accessing function
			Point Circle::CentrePoint() const;//get center point
			void Circle::CentrePoint(const Point &pt);//set center point
			double Circle::Radius() const;//get radius
			void Circle::Radius(double radius);//set radius

			//Functionality
			double Circle::Diameter() const;//get diameter of the circle
			double Circle::Area() const;//get area of the circle
			double Circle::Circumference() const;//get circumference of the circle
			std::string Circle::ToString() const;//return the discription of this circle

			// Member operator overloading
			Circle& operator = (const Circle& source);

			//global operator overloading
			friend ostream& operator << (ostream& os, const Circle& p);
		};
	}
}

#endif;