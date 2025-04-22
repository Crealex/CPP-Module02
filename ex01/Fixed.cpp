
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed(): _fixedNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _fixedNumber(n << Fixed::_fract)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _fixedNumber(roundf(n * (1 << Fixed::_fract)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	this->_fixedNumber = copy._fixedNumber;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		this->setRawBits(src.getRawBits());
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedNumber);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNumber = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_fixedNumber / (1 << Fixed::_fract));
}

int Fixed::toInt( void ) const
{
	return (this->_fixedNumber >> Fixed::_fract);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
