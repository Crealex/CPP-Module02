#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int _fixedNumber;
	static const int _fract = 8;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	Fixed &operator=(const Fixed& src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif