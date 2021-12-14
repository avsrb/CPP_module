#include <iostream>
using namespace std;

class Point {
public:
	Point() { nCount++; }

public:
	static int	nCount;
	int			x, y;
};

int	Point::nCount = 0;

int	main()
{
	setlocale(LC_ALL, "rus");

	cout << "nCount: " << Point::nCount << endl;
	Point p1, p2, p3;
	cout << "nCount: " << Point::nCount << endl;
//	cout << "nCount: " << p1.nCount << p2.nCount << p3.nCount << endl;
}