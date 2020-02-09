#pragma once

#include <string>

using namespace std;


class Human
{
private:
	string surname;
	string name;
	int day;
	int month;
	int year;
	double countMoney;

public:
	Human();
	~Human();
	Human(string name, string surname, int day, int month, int year);
	void setName(string name, string surname);
	void setDate(int day, int month, int year);
	void addMoney(double money);
	double getMoney();
	int getDay();
	string toString();
	
};

