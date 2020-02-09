#include "pch.h"
#include "Card.h"


Card::Card()
{
}

Card::Card(float nNumber)
{
	if(nNumber>0)
		this->number = nNumber;
}

void Card::SetNumber(float nNumber)
{
	if (nNumber > 0)
		this->number = nNumber;
}

float Card::GetNumber()
{
	return this->number;
}

void Card::SetDateExpire(string Date)
{
	this->dateExpire = Date;
}

string Card::GetDateExpire()
{
	return this->dateExpire;
}


Card::~Card()
{
}
