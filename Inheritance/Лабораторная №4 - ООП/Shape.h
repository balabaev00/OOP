#pragma once

class Shape
{
public:
	Shape();
	~Shape();
	float virtual Area() =0; // ������ �������		
	float virtual Perimeter() =0; // ������ ���������
};

