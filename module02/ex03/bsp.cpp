#include "Point.hpp"

bool bsp(Point const A, Point const B, Point const C, Point const P)
{
	if ((B.getX() - A.getX()) * (P.getY() - A.getY()) - (B.getY() - A.getY()) * (P.getX() - A.getX()) > 0
			 && (C.getX() - B.getX()) * (P.getY() - B.getY()) - (C.getY() - B.getY()) * (P.getX() - B.getX()) > 0
			 && (A.getX() - C.getX()) * (P.getY() - C.getY()) - (A.getY() - C.getY()) * (P.getX() - C.getX()) > 0)
	{
		return (true);
	}
	return (false);
}