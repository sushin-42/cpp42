#include "Fixed.hpp"

const int	Fixed::_fractionalBit = 8;

Fixed::Fixed(void)
{
	_value = 0;
	std::cout << " default constructor " << std::endl;
}

Fixed::Fixed(const Fixed &srcObject)
{
	std::cout << " copy constructor " << std::endl;
	*this = srcObject;
}

int		Fixed::getRawBits(void) const
{
	std::cout << " getRawBits " << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
	std::cout << " setRawBits " << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &srcObject)
{
	std::cout << " operator " << std::endl;
	_value = srcObject.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << " destructor " << std::endl;
}
