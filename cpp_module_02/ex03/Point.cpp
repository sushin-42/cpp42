#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const Point &srcObject) : _x(srcObject._x), _y(srcObject._y) {}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {}

Point::~Point() {}

Point &Point::operator=(const Point &srcObject)
{
    (void)srcObject;
    return (*this);
}

Fixed Point::getX(void) const
{
    return (this->_x);
}

Fixed Point::getY(void) const
{
    return (this->_y);
}