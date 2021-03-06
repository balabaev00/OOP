
#include "pch.h"
#include "Fortuneteller.h"
#include "HouseFortuneteller.h"
#include "Human.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Human *girl = new Human("Татьяна", "Петровна", 24, 1, 2000);
	Human *man = new Human("Василий", "Иванов", 12, 3, 1995);
	Human *man2 = new Human("Михаил", "Дульдович", 31, 3, 1987);
	girl->addMoney(2000);
	man->addMoney(990);
	man2->addMoney(1500);
	Fortuneteller *fort = new Fortuneteller("Махиджа", "Дальманова", 14, 7, 1977);
	Fortuneteller *fort2 = new Fortuneteller("Вадома", "Махриплаенва", 21, 12, 1965);
	fort->addVisitor(girl);
	fort->addVisitor(man);
	cout << "Счастливый день гадалки №1 : " << fort->getBestDay() << endl;
	cout << fort->strBadDays() << endl;
	cout << "Список посетителей 1:" << endl;
	vector<Human*> list = fort->getVisitors();
	for (int i = 0; i < list.size(); i++) {
		cout << list[i]->toString() << endl;
	}
	fort2->addVisitor(man2);
	cout << "Счастливый день гадалки №2 : " << fort2->getBestDay() << endl;
	cout << fort2->strBadDays() << endl;
	cout << "Список посетителей 2:" << endl;
	vector<Human*> list2 = fort2->getVisitors();
	for (int i = 0; i < list2.size(); i++) {
		cout << list2[i]->toString() << endl;
	}
	HouseFortuneteller house("Дом гадалок");
	house.addFortuneteller(fort);
	house.addFortuneteller(fort2);
	cout << "Компания : " << house.getName() << endl;
	cout << house.toString() << endl;
	cout << fort->Fortune(man, 500) << endl;
	cout << fort->Fortune(girl, 1000) << endl;
	system("pause");
}


