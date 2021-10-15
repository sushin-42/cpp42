#include "Fixed.hpp"

const int Fixed::_fractionalBit = 8;

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const Fixed &srcObject)
{
	*this = srcObject;
}

Fixed::Fixed(const int value)
{
	_value = value << _fractionalBit;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fractionalBit));
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return (float(_value) / (1 << _fractionalBit));
}

int Fixed::toInt(void) const
{
	return (_value >> _fractionalBit);
}

Fixed &Fixed::operator=(const Fixed &srcObject)
{
	_value = srcObject.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{
}
///////////////////////////////////////ex02

bool Fixed::operator>(const Fixed &srcObject) const
{
	return (this->_value > srcObject._value);
}

bool Fixed::operator<(const Fixed &srcObject) const
{
	return (this->_value < srcObject._value);
}

bool Fixed::operator>=(const Fixed &srcObject) const
{
	return (this->_value >= srcObject._value);
}

bool Fixed::operator<=(const Fixed &srcObject) const
{
	return (this->_value <= srcObject._value);
}

bool Fixed::operator==(const Fixed &srcObject) const
{
	return (this->_value == srcObject._value);
}

bool Fixed::operator!=(const Fixed &srcObject) const
{
	return (this->_value != srcObject._value);
}

Fixed Fixed::operator+(const Fixed &srcObject)
{
	return (Fixed(this->toFloat() + srcObject.toFloat()));
}

Fixed Fixed::operator-(const Fixed &srcObject)
{
	return (Fixed(this->toFloat() - srcObject.toFloat()));
}

Fixed Fixed::operator*(const Fixed &srcObject)
{
	return (Fixed(this->toFloat() * srcObject.toFloat()));
}

Fixed Fixed::operator/(const Fixed &srcObject)
{
	return (Fixed(this->toFloat() / srcObject.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f(*this);

	this->_value++;
	return (f);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed f(*this);

	this->_value--;
	return (f);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
