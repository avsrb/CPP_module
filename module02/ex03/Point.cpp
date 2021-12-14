#include "Point.hpp"

Point::Point() : m_x(0), m_y(0)
{
}

Point::~Point()
{
}

Point::Point(const Point &other) : m_x(other.m_x), m_y(other.m_y)
{
}

Point::Point(const float x, const float y) : m_x(x), m_y(y)
{
}

Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	*this = Point(other);
	return (*this);
}

bool Point::operator==(const Point &rhs) const
{
	return m_x == rhs.m_x&&
		   m_y == rhs.m_y;
}

Fixed Point::getX() const
{
	return m_x;
}

Fixed Point::getY() const
{
	return m_y;
}

std::ostream &operator<<(std::ostream &os, const Point &point)
{
	os << "m_x: " << point.getX() << " m_y: " << point.getY();
	return os;
}