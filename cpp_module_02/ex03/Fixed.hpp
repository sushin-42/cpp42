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
	// ex02
	bool	operator > (const Fixed &srcObject) const;
	bool	operator < (const Fixed &srcObject) const;
	bool	operator >= (const Fixed &srcObject) const;
	bool	operator <= (const Fixed &srcObject) const;
	bool	operator == (const Fixed &srcObject) const;
	bool	operator != (const Fixed &srcObject) const;

	Fixed	operator + (const Fixed &srcObject);
	Fixed	operator - (const Fixed &srcObject);
	Fixed	operator * (const Fixed &srcObject);
	Fixed	operator / (const Fixed &srcObject);

	Fixed 	&operator ++(void);
	Fixed	operator ++(int);
	Fixed 	&operator --(void);
	Fixed	operator --(int);

	static	Fixed		&min(Fixed &f1, Fixed &f2);
	static	const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static	Fixed		&max(Fixed &f1, Fixed &f2);
	static	const Fixed	&max(const Fixed &f1, const Fixed &f2);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);


#endif
