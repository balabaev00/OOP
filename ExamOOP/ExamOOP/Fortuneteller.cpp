#include "pch.h"
#include "Fortuneteller.h"



Fortuneteller::Fortuneteller(string name, string surname, int day, int month, int year):Human(name,surname,day,month,year)
{
	this->count = 0;
	int count = 5;
	badDays.resize(count);
	int temp;
	for  (int i = 0; i < badDays.size(); i++) {
		temp = 1 + rand() % 30;
		if (temp != bestDay)
			badDays[i] = 1 + rand() % 30;
		else
			badDays[i] = 1 + rand() % 30;
	}
}


Fortuneteller::~Fortuneteller()
{
}

string Fortuneteller::Fortune(Human * human, double payment) {
	string temp;
	if (human->getMoney() > payment) {
		if (payment > 1000 && bestDay==human->getDay()) {
			temp = "У вас все будет хорошо, вы станете богатым!";
		}
		if (payment < 1000 && bestDay == human->getDay()) {
			temp = "Ваши жизнь будет стабильной";
		}
		if (payment > 1000 && bestDay != human->getDay()) {
			temp = "У вас будут проблемы со здоровьем";
		}
		if (payment < 1000 && bestDay != human->getDay()) {
			temp = "Вы умрете в этом году";
		}
	}
	else {
		throw - 4;
	}
}

vector<Human*> Fortuneteller::getVisitors()
{
	return this->visitors;
}

void Fortuneteller::setVisitors(vector<Human*> visitors) {
	this->visitors = visitors;
}

vector<int> Fortuneteller::getBadDays()
{
	return this->badDays;
}

string Fortuneteller::strBadDays()
{
	string temp = "Неудачные дни";
	for (int i = 0; i < badDays.size(); i++)
	{
		temp += to_string(badDays[i]) + ",";
	}
	return temp;
}

int Fortuneteller::getBestDay()
{
	return this->bestDay;
}

void Fortuneteller::addVisitor(Human * human)
{
	if (human != NULL) {
		this->visitors.push_back(human);
	}
}
