#include "pch.h"
#include "Human.h"
#include "PlushToy.h"
#include "Brain.h"
#include "Employee.h"
#include "Card.h"
#include "Company.h"
#include "Doctor.h"
#include "Patient.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Human firstHero;
	firstHero.SetFIO("Балабаев", "Михаил", "Михайлович");
	cout << "Информация про человека : " << endl;
	cout << firstHero.FIO() << endl;
	cout << "Интеллект человека = " << firstHero.GetIntellect() << endl;
	cout << firstHero.CheckClothes() << endl;

	PlushToy Toy;
	Toy.SetSize(35);
	cout << "Информация про плюшевую игрушку : " << endl;
	cout << Toy.toString() << endl;

	Card card(25531);
	card.SetDateExpire("12.12.2019");

	Employee manager;
	manager.SetFIO("Петров", "Владимир", "Иванович");
	manager.SetIdCard(card);
	cout << "Информация про менеджера : " << endl;
	cout << manager.FIO() << endl;
	cout << "Номер карты менеджера = " << manager.GetIdCard().GetNumber() << endl;
	cout << "Длительность карты менеджера до = " << manager.GetIdCard().GetDateExpire() << endl;
	cout << "Интеллект менеджера = " << manager.GetIntellect() << endl;

	Company company;
	company.SetName("Apple");
	company.AddEmployee(manager);
	cout << "Название компании : " << company.GetName() << endl;
	cout << company.GetEmployee(25531).FIO() << endl;
	cout << "Номер карты сотрудника = " << company.GetEmployee(25531).GetIdCard().GetNumber() << endl;
	cout << "Длительность карты сотрудника до = " << company.GetEmployee(25531).GetIdCard().GetDateExpire() << endl;
	cout << "Интеллект сотрудника = " << company.GetEmployee(25531).GetIntellect() << endl;
	cout << "Количество сотрудников компании : " << company.CountEmployee() << endl;
	company.DelEmployee(25531);
	cout << "Количество сотрудников компании : " << company.CountEmployee() << endl;

	Patient *p1 = new Patient();
	p1->SetFIO("Пупкин", "Игорь", "Анатольевич");
	Patient *p2 = new Patient();
	p2->SetFIO("Лавров", "Владимир", "Георгеевич");
	Patient *p3 = new Patient();
	p3->SetFIO("Забко", "Андрей", "Михайлович");

	Doctor *d1 = new Doctor();
	d1->SetFIO("Менделеев", "Алексей", "Иванович");
	d1->SetSpecialty("Дерматолог");
	Doctor *d2 = new Doctor();
	d2->SetFIO("Познер", "Кирилл", "Вячеславович");
	d2->SetSpecialty("Терапевт");

	d1->AddPatient(p1);
	d1->AddPatient(p2);
	d2->AddPatient(p3);
	cout << d1->CheckPatient() << endl;
	cout << d2->CheckPatient() << endl;

	d1->DelPatient(p2);
	cout << d1->CheckPatient() << endl;

	delete p1;
	delete p2;
	delete p3;
	delete d1;
	delete d2;


	system("pause");
}