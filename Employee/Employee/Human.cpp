#include "pch.h"
#include "Human.h"


string Human::CheckClothes()
{
	return ("Надеты кроссовки цвета : " + this->sneaker.GetColor() + ", размера : " +	to_string(this->sneaker.GetSize()));
}

string Human::FIO()
{
	return ("ФИО : " + this->surname + " " + this->name + " " + this->patronymic);
}

unsigned Human::GetIntellect()
{
	return this->brain.GetIntellect();
}

void Human::SetIntellect(unsigned nIntellect)
{
	this->brain.SetIntellect(nIntellect);
}

void Human::SetFIO(string nSurname, string nName, string nPatronymic)
{
	this->name = nName;
	this->surname = nSurname;
	this->patronymic = nPatronymic;
}

Human::Human(string nName, string nSurname, string nPatronymic)
{
	this->SetFIO(nSurname, nName, nPatronymic);
}

Human::Human()
{
	this->SetIntellect(40);
}


Human::~Human()
{
}

