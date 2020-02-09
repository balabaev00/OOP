#pragma once
#include "Shape.h"

class Rectangle :
	public Shape
{
	float _a;
	float _b;
public:
	Rectangle();
	~Rectangle();
	float Area();
	float Perimeter();
	void SetA(float a);
	void SetB(float b);
	void SetAll(float a, float b);
	float GetA();
	float GetB();
	float Diagonal();
};

