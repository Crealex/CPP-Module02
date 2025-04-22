#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedNumber;
	static const int _fract;
public:
	// *** Constructor / destructor ***
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& copy);
	~Fixed();
	// *** Overload operator ***
	Fixed	&operator=(const Fixed& src);
	bool	operator>(const Fixed& rhs) const;
	bool	operator<(const Fixed& rhs) const;
	bool	operator>=(const Fixed& rhs) const;
	bool	operator<=(const Fixed& rhs) const;
	bool	operator==(const Fixed& rhs) const;
	bool	operator!=(const Fixed& rhs) const;
	Fixed	operator+(const Fixed& rhs) const;
	Fixed	operator-(const Fixed& rhs) const;
	Fixed	operator*(const Fixed& rhs) const;
	Fixed	operator/(const Fixed& rhs) const;
	// *** Member functions ***
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed& fixed);

#endif
