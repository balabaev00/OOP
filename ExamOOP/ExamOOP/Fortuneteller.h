#pragma once
#include "Human.h"
#include <vector>

class Fortuneteller :
	public Human
{
private:
	vector<Human*> visitors;
	vector<int> badDays;
	int bestDay = 1 + rand() % 30;
	int count;

public:
	Fortuneteller(string name, string surname, int day, int month, int year);
	~Fortuneteller();
	string Fortune(Human* human, double payment);
	vector<Human*> getVisitors();
	void setVisitors(vector<Human*> visitors);
	vector<int> getBadDays();
	string strBadDays();
	int getBestDay();
	void addVisitor(Human *human);

};

