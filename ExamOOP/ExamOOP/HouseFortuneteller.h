#pragma once

#include "Fortuneteller.h"
class HouseFortuneteller
{
private:
	vector<Fortuneteller*> fortuneteller;
	string name;
	
public:
	HouseFortuneteller();
	HouseFortuneteller(string name);
	~HouseFortuneteller();
	void addFortuneteller(Fortuneteller *fortuneteller);
	void addHuman(Human *human, Fortuneteller *fortuneller);
	void setName(string name);
	string getName();
	string toString();
};

