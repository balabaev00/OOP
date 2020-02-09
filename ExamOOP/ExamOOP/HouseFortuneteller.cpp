#include "pch.h"
#include "HouseFortuneteller.h"


HouseFortuneteller::HouseFortuneteller()
{
}

HouseFortuneteller::HouseFortuneteller(string name)
{
	setName(name);
}


HouseFortuneteller::~HouseFortuneteller()
{
}

void HouseFortuneteller::addFortuneteller(Fortuneteller * fortuneteller)
{
	if (fortuneteller != NULL)
		this->fortuneteller.push_back(fortuneteller);
}

void HouseFortuneteller::addHuman(Human * human, Fortuneteller *fortuneller) {
	vector<Human*> temp = fortuneller->getVisitors();
	temp.push_back(human);
	fortuneller->setVisitors(temp);
}

void HouseFortuneteller::setName(string name)
{
	this->name = name;
}

string HouseFortuneteller::getName()
{
	return this->name;
}

string HouseFortuneteller::toString()
{
	int countHuman = 0;
	int countFort = this->fortuneteller.size();
	for (int i = 0; i < fortuneteller.size();i++) {
		countHuman += fortuneteller[i]->getVisitors().size();
	}
	return "Количество гадалок в компании : " + to_string(countFort) + ". Количество посетителей : " + to_string(countHuman);
}
