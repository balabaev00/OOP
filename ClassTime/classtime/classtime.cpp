

#include "pch.h"
#include "Time.h"
#include "filework.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
#include <iomanip>
#include <vector>

using namespace std;

const unsigned SIZE = 3;
const string FILE_NAME = "obj.txt";

int main()
{
	setlocale(LC_ALL, "Rus");
	Time obj_a;
	obj_a.setTime(23, 30, 26);
	cout << "Текущее время - " << obj_a.hours() << ":" << obj_a.minutes() << ":" << obj_a.seconds() << endl;
	cout << "Время в часах - " << obj_a.timeTohour() << endl;
	cout << "Время в минутах - " << obj_a.timeTominute() << endl;
	cout << "Время в секундах - " << obj_a.timeTosecond() << endl;
	Time obj_b;
	obj_b.setTime(22,40,35);
	Time obj_c;
	obj_c = obj_a + obj_b;
	cout << "Результат сложение времени - " << obj_c.hours() << ":" << obj_c.minutes() << ":" << obj_c.seconds() << endl;
	obj_c = obj_a - obj_b;
	cout << "Результат вычитания времени - " << obj_c.hours() << ":" << obj_c.minutes() << ":" << obj_c.seconds() << endl;
	cout << "Преобразования в строку = " << obj_c.toString() << endl;
	obj_c.toString();

	/*Работа с файлами*/
	/*vector <Time> array_obj;
	objTofile(obj_a, FILE_NAME);
	objTofile(obj_b, FILE_NAME);
	objTofile(obj_c, FILE_NAME);
	array_obj = fileToobj(FILE_NAME);
	cout << "Время считанное из файла : " << endl;
	for (unsigned i=0;i<array_obj.size();i++)
		cout << array_obj[i].hours() << ":" << array_obj[i].minutes() << ":" << array_obj[i].seconds() << endl;*/

	Time *array = new Time[SIZE];
	int h = 1;
	for (unsigned i = 0; i < SIZE; i++)
	{
		array[i].setTime(h,h,h);
		h++;
	}


	cout << "Динамическое время :" << endl;
	for (unsigned i = 0; i < SIZE; i++)
	{
		cout << array[i].toString() << endl;
	}

	delete [] array;

	system("pause");
}


