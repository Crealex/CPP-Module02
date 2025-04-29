
#include "Point.hpp"

// ** Constructor / Destructor ***

Point::Point(): _x(0), _y(0)
{

}

Point::Point(const float x, const float y): _x(x), _y(y)
{

}

Point::Point(const Point& cpy): _x(cpy._x), _y(cpy._y)
{

}

Point::~Point()
{

}

Point &Point::operator=(const Point&)
{
	return (*this);
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}

