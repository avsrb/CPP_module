#include <iostream>
using namespace std;

class Point {
public:
	Point (const Point& other) : nCoords(other.nCoords) {
		cout << "Вызов конструктора копирования объекта " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; ++i) coords[i] = other.coords[i];
	}

	Point() { cout << "Вызов конструктора объекта " << this << endl; }
	Point(int size, int *arr) : nCoords(size) {
		cout << "Вызов конструктора объекта " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; ++i) coords[i] = arr[i];
	}

	~Point() {
		cout << "Вызов деструктора объекта " << this << endl;
		delete[] coords;
	}

private:
	int*	coords;
	int		nCoords;
};

int main()
{
	setlocale(LC_ALL, "rus");

	int coords[] = {2 , 3}, size = 2;

	Point	a(size, coords);
	Point	b(a);
}