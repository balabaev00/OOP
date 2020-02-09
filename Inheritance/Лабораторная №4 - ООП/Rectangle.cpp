#include "pch.h"
#include "Rectangle.h"
#include <cmath>


Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

float Rectangle::Area()
{
	return _a * _b;
}

float Rectangle::Perimeter()
{
	return 2 * (_a + _b);
}

float Rectangle::GetA()
{
	return _a;
}

float Rectangle::GetB()
{
	return _b;
}

float Rectangle::Diagonal()
{
	return sqrt(_a*_b);
}

void Rectangle::SetA(float a)
{
	if (a > 0)
		_a = a;
}

void Rectangle::SetB(float b)
{
	if (b > 0)
		_b = b;
}

void Rectangle::SetAll(float a, float b)
{
	SetA(a);
	SetB(b);
}