#include "pch.h"
#include "Employee.h"


Employee::Employee()
{
	this->SetIntellect(60);
}


Employee::~Employee()
{
}

void Employee::SetIdCard(Card newCard)
{
	this->Icard = newCard;
}

Card Employee::GetIdCard()
{
	return this->Icard;
}
