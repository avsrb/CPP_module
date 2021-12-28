#include <iostream>
#include <string>
#include <fstream>
#include <exception>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "ru");
//	string path = "../test/main.cp";
//
//	ifstream	fin;
//	fin.exceptions(ifstream::badbit | ifstream::failbit);
//
//	try
//	{
//		cout << "Попытка открыть файл!" << endl;
//		fin.open(path);
//
//		cout << "Файл успешно открыт!" << endl;
//	}
//	catch (const ifstream::failure & ex) //
//	{
//		cout << ex.what() << endl;
//		cout << ex.code() << endl;
//		cout << "Ошибка открытия файла!";
//	}
//	fin.close();
//}

class MyException : public exception
{
public:
	MyException(char *msg):exception(msg)
	{

	}

private:
};

void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Число меньше 0!!!");
	}
	else if (value == 1)
	{
		throw MyException("Число = 13");
	}
	cout << "Value = " << value << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Foo(1);
	}
	catch(MyException &ex)
	{
		cout << "Мы поймали!" << ex.what() << endl;
	}
//	catch (const char *ex)
//	{
//		cout << ex << endl;
//	}
//	catch (...)
//	{
//		cout << "Что-то пошло не так!" << endl;
//	}
}