
#include "Fixed.hpp"

int main( void )
{
	Fixed const a(16.5f);
	Fixed const b( 13 );
	Fixed c(5);
	Fixed d(8.5f);

	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	if (a > b)
		std::cout << "a is upper than b" << std::endl;
	else
	 	std::cout << "a is smaller than b" << std::endl;
	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	else
	 	std::cout << "a is upper than b" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "----------TEST INCREMENT & DECREMENT----------" << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "----------TEST MIN & MAX----------" << std::endl;
	std::cout << "const min betwen a (" << a << ") & b (" << b << ") = " << Fixed::min(a, b) << std::endl;
	std::cout << "max betwen c (" << c << ") & d (" << d << ") = " << Fixed::max(c, d) << std::endl;
	return 0;
}
