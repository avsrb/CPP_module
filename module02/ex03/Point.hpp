#ifndef POINT_HPP
# define POINT_HPP

#include <ostream>
#include "Fixed.hpp"

class	Point
{
private:
		Fixed const		m_x;
		Fixed const		m_y;
public:
	Point();
	~Point();
	Point(const Point &other);
	Point(const float x, const float y);

	Point&	operator=(const Point &other);
	bool	operator==(const Point &rhs) const;

	Fixed		getX() const;
	Fixed		getY() const;

};
std::ostream &operator<<(std::ostream &os, const Point &point);

# endif