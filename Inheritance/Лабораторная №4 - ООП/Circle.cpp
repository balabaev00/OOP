#include "pch.h"
#include "Circle.h"


Circle::Circle()
{
}

Circle::~Circle()
{
}

float Circle::Area()
{
	return _r * _r * M_PI;
}

float Circle::Perimeter()
{
	return 2 * M_PI*_r;
}

void Circle::SetR(float r)
{
	if (r > 0)
		this->_r = r;
}

float Circle::GetR()
{
	return this->_r;
}

float Circle::Diameter()
{
	return _r * 2;
}