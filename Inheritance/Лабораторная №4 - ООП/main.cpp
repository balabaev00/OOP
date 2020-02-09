
#include "pch.h"
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Square a;
	a.SetA(5);
	cout << "Сторона квадрата = " << a.GetA() << endl;
	cout << "Периметр квадрата = " << a.Perimeter() << endl;
	cout << "Площадь квадрата = " << a.Area() << endl;
	Circle b;
	b.SetR(3);
	cout << "Радиус круга = " << b.GetR() << endl;
	cout << "Периметр круга = " << b.Perimeter() << endl;
	cout << "Площадь круга = " << b.Area() << endl;
	cout << "Диаметр круга = " << b.Diameter() << endl;
	Rectangle c;
	c.SetAll(5, 4);
	cout << "Стороны прямоугольника равны = " << c.GetA() << " и " << c.GetB() << endl;
	cout << "Периметр прямоугольника равен = " << c.Perimeter() << endl;
	cout << "Площадь прямоугольника равна = " << c.Area() << endl;
	cout << "Диагональ прямоугольника равна = " << c.Diagonal() << endl;
}


