#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed(void)
{
	std::cout << " default constructor " << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &srcObject)
{
	std::cout << " copy constructor " << std::endl;
	*this = srcObject;
}

Fixed::Fixed(const int value)
{
	std::cout << " int value constructor " << std::endl;
	_value = value << _fractionalBit;
}

Fixed::Fixed(const float value)
{
	std::cout << " float value constructor " << std::endl;
	_value = roundf( value * ( 1 << _fractionalBit) );
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ( float(_value) / (1 << _fractionalBit) );
}

int		Fixed::toInt(void) const
{
	return ( _value >> _fractionalBit );
}

Fixed	&Fixed::operator = (const Fixed &srcObject)
{
	std::cout << " operator " << std::endl;
	_value = srcObject.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	std::cout << " destructor " << std::endl;
}
