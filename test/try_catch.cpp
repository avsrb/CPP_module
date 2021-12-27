#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "main.cpp";

	ifstream	fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "Попытка открыть файл!" << endl;
		fin.open(path);

		cout << "Файл успешно открыт!" << endl;
	}
	catch (const std::exception & ex) //
	{
		
	}
	fin.close();
}

