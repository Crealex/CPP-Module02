
#include "Point.hpp"

// Absolute value  a.x * (b.y-c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)

Fixed area_calculator(const Point a, const Point b, const  Point c)
{
	Fixed res;

	res = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (res < 0)
		res = res * -1;
	res = res / 2;
	std::cout << "area : " << res << std::endl;
	return (res);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed area_abc(area_calculator(a, b, c));
	Fixed area_pab(area_calculator(point, a, b));
	Fixed area_pbc(area_calculator(point, b, c));
	Fixed area_pac(area_calculator(point, a, c));

	if ((area_pab + area_pbc + area_pac) == area_abc)
		return (true);
	return (false);
}

//TESTING

// int main(void)
// {
// 	const Point a(12.2f, 16.2f);
// 	const Point b(15.5f, 18.8f);
// 	const Point c(34.5f, 89.2f);

// 	area_calculator(a, b, c);
// }