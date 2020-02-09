#include "pch.h"
#include "Sneakers.h"


Sneakers::Sneakers()
{
	this->color = "black";
	this->size = 42.5;
}


Sneakers::~Sneakers()
{
}

void Sneakers::SetColor(string nColor)
{
	this->color = nColor;
}

string Sneakers::GetColor()
{
	return this->color;
}

void Sneakers::SetSize(float nSize)
{
	if (nSize >= 34 && nSize <= 48)
		this->size = nSize;
}

float Sneakers::GetSize()
{
	return this->size;
}
