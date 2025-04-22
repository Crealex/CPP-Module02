
#include "Fixed.hpp"

int main( void )
{
	Fixed const a(16.5f);
	Fixed const b( 13 );

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
	return 0;
}
