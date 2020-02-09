#pragma once
#include <string>

using namespace std;

class Sneakers
{
private:
	string color;
	float size;
	
public:
	Sneakers();
	~Sneakers();
	void SetColor(string nColor); 
	string GetColor();
	void SetSize(float nSize);
	float GetSize();
};

