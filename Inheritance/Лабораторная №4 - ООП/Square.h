#pragma once
#include "Shape.h"

class Square :
	public Shape
{
	float _a;
public:
	Square();
	~Square();
	void SetA(float a); // Setter [a]
	float GetA(); // Getter [a]
	float Area() override;
	float Perimeter() override;
};

