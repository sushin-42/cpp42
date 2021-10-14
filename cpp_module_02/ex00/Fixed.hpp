#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_value;
	const static int	_fractionalBit;
public:
	Fixed(const Fixed &srcObject);
	Fixed(void);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&operator = (const Fixed &srcObject);
};


#endif
