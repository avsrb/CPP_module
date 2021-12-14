#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFINED -1000

class Point {
public:
	Point() { cout << "Вызов конструктора объекта " << this << endl; } // Конструктор - это метод класса который вызывается при создании нового обьекта
	// конструктор без аргументов является конструктором по умолчанию,
	// но мы можем записать в классе моножетво других контсрукторов с аргументами будет называтся перегрузка конструктров
	Point(int x, int y) {
		cout << "Вызов конструктора объекта с 2-мя аргументами " << this << endl;
		this->x = x;
	}
	~Point() { cout << "Вызов деструктора объекта " << this << endl; } // Деструктор - это метод класса который вызывается при удалении обьекта

private: 									//приватная область
	int	x, y;								//координата точки

public:										//публичная область
	void	setCoord(int pt_x, int pt_y) {	// метод класса
		//
		if (pt_x >= -MAX_COORD && pt_x <= MAX_COORD) this->x = pt_x;
		if (pt_y >= -MAX_COORD && pt_y <= MAX_COORD) this->y = pt_y;
	}

	int		getX() { return (x >= -MAX_COORD && x <= MAX_COORD) ? x : UN_DEFINED; }
	int		getY() { return (y >= -MAX_COORD && y <= MAX_COORD) ? y : UN_DEFINED; }
};

Point& foo(Point a) {
	cout << "x = " << a.getX() << " y = " << a.getY() << endl;
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Point	pt1;
	Point	pt(2, 3);
//	pt.setCoord(2, 3);
//	Point pt2 = foo(pt);

	return 0;
}

bool Point::operator==(const Point &rhs) const
{
	return x == rhs.x&&
		   y == rhs.y;
}

bool Point::operator!=(const Point &rhs) const
{
	return !(rhs == *this);
}
