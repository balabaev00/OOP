#include "pch.h"
#include "PlushToy.h"


PlushToy::PlushToy()
{
}


PlushToy::~PlushToy()
{
}

string PlushToy::toString()
{
	return ("������ ��������� ����� : " + this->sneaker.GetColor() + ", ������� : " + to_string(this->sneaker.GetSize()));
}

void PlushToy::SetSize(float nSize)
{
	if (nSize >= 34 && nSize <= 49)
		this->sneaker.SetSize(nSize);
}
