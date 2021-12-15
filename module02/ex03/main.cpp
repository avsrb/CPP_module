#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const P);

int main(void)
{
	Point	A(1, 1);
	Point	B(4, 1);
	Point	C(4, 4);
	Point	P(3, 2);
	Point	P2(3, 5);

	std::cout <<	"A:\t\t"	<<	A	<< std::endl;
	std::cout <<	"B:\t\t"	<<	B	<< std::endl;
	std::cout <<	"C:\t\t"	<<	C	<< std::endl;
	std::cout <<	"Point1:\t\t"	<<	P	<< std::endl;
	std::cout <<	"Point2:\t\t"	<<	P2	<< std::endl;
	std::cout << "\033[1mResult1:\t" << (bsp(A, B, C, P) ? "ctrue" : "\033[31mfalse") << std::endl;
	std::cout << "\033[0m\033[1mResult2:\t" << (bsp(A, B, C, P2) ? "\033[32mtrue" : "\033[31mfalse") << std::endl;

	return 0;

}