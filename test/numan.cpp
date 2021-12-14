#include <iostream>
using namespace std;

#define MAX_COORD 100
#define UN_DEFINED -1000

class Human {
public:
	Human() { name = ""; }
	Human(string name) { this->name = name; }
	Human(string name, int age) : Human(name) { this->age = age; } // Делегирующий конструктор
	Human(string name, int age, float weight) : Human(name, age) { this->weight = weight; }
public:
	string	name;
	int		age;
	float	weight;
};

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

int main()
{
	setlocale(LC_ALL, "rus");
	Human h;
}