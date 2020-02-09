#pragma once
#include <math.h>
#define _USE_MATH_DEFINES
#include "Shape.h"

//#define M_PI
const float M_PI = 3.14159265358979323846;


class Circle :
	public Shape
{
	float _r;
	/*float pi = 3.14159265358979323846;*/
public:
	Circle();
	~Circle();
	float Area() override;
	float Perimeter() override;
	float Diameter();
	void SetR(float r);
	float GetR();
};

