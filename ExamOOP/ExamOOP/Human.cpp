#include "pch.h"
#include "Human.h"

Human::Human()
{
}

Human::~Human()
{
}

Human::Human(string name, string surname, int day, int month, int year) {
	setDate(day, month, year);
	setName(name, surname);
	this->countMoney = 0;
}

void Human::setName(string name,string surname) {
	this->name = name;
	this->surname = surname;
}

void Human::setDate(int day, int month, int year) {
	if (day > 0 && month > 0 && year > 0 && day <= 31 && month <= 12) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
}

string Human::toString()
{
	return name + " " + surname + " " + to_string(day) + "." + to_string(month) + "." + to_string(year);
}

void Human::addMoney(double money) {
	if (money > 0) {
		this->countMoney += money;
	}
}

double Human::getMoney()
{
	return this->countMoney;
}

int Human::getDay()
{
	return this->day;
}
