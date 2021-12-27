#include <iostream>
#include <fstream>


using namespace std;

int main ()
{
	setlocale(LC_ALL, "ru");

	string path = "../myFile.txt";
	ofstream fout;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла" << endl;
	}
	else
	{
		fout << "Это наши данные!";
	}
	fout.close();

}
