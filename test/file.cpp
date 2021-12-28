#include <iostream>
#include <fstream>


using namespace std;

//int main ()
//{
//	setlocale(LC_ALL, "ru");
//
//	string path = "../myFile.txt";
//	ofstream fout;
//	fout.open(path, ofstream::app);
//	if (!fout.is_open())
//	{
//		cout << "Ошибка открытия файла" << endl;
//	}
//	else
//	{
//		cout << "Введите число!" << endl;
//		int a;
//		cin >> a;
//		fout << a << endl;
//	}
//	fout.close();
//
//}

int main ()
{
	setlocale(LC_ALL, "ru");
	string path = "../myFile.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		string str;
		while (!fin.eof())
		{
//			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();

	return 0;
}