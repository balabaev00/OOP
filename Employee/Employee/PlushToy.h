#pragma once
#include "Sneakers.h"
#include <string>

using namespace std;
class PlushToy
{
private:
	Sneakers sneaker;
public:
	PlushToy();
	~PlushToy();
	string toString();
	void SetSize(float nSize);
};

