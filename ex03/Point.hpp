#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& cpy);
	~Point();
	Point &operator=(const Point& rhs);
	Fixed getX() const;
	Fixed getY() const;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif

