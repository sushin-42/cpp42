#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point(void);
	Point(Point const &srcObject);
	Point(Point const &srcObject);// working
	~Point(void);

	Fixed	getX(void)
	{
		return (_x);
	};
	Fixed	getY(void)
	{
		return (_y);
	};
};

Point::Point(void) : _x(0), _y(0){}
Point::Point(Point const &srcObject) : _x(srcObject._x), _y(srcObject._y){}

Point::~Point()
{
}

#endif
