#pragma once

class Shape
{
public:
	Shape();
	~Shape();
	float virtual Area() =0; // Расчет площади		
	float virtual Perimeter() =0; // Расчет периметра
};

