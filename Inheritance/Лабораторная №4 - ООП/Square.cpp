#include "pch.h"
#include "Square.h"


Square::Square()
{
}

Square::~Square()
{
}

float Square::Area()
{
	return _a * _a;
}

float Square::Perimeter()
{
	return 4 * _a;
}

void Square::SetA(float a)
{
	if (a > 0)
		this->_a = a;
}

float Square::GetA()
{
	return this->_a;
}