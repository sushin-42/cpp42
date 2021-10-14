#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	const static int	_fractionalBit;
public:
	Fixed(const Fixed &srcObject);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(void);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&operator = (const Fixed &srcObject);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);


#endif
