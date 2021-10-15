#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point(void);
	Point(const Point &srcObject);
	Point(const Fixed x, const Fixed y);
	~Point(void);

	Fixed getX(void) const;
	Fixed getY(void) const;
	Point &operator=(const Point &srcObject);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
