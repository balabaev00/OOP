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
	firstHero.SetFIO("��������", "������", "����������");
	cout << "���������� ��� �������� : " << endl;
	cout << firstHero.FIO() << endl;
	cout << "��������� �������� = " << firstHero.GetIntellect() << endl;
	cout << firstHero.CheckClothes() << endl;

	PlushToy Toy;
	Toy.SetSize(35);
	cout << "���������� ��� �������� ������� : " << endl;
	cout << Toy.toString() << endl;

	Card card(25531);
	card.SetDateExpire("12.12.2019");

	Employee manager;
	manager.SetFIO("������", "��������", "��������");
	manager.SetIdCard(card);
	cout << "���������� ��� ��������� : " << endl;
	cout << manager.FIO() << endl;
	cout << "����� ����� ��������� = " << manager.GetIdCard().GetNumber() << endl;
	cout << "������������ ����� ��������� �� = " << manager.GetIdCard().GetDateExpire() << endl;
	cout << "��������� ��������� = " << manager.GetIntellect() << endl;

	Company company;
	company.SetName("Apple");
	company.AddEmployee(manager);
	cout << "�������� �������� : " << company.GetName() << endl;
	cout << company.GetEmployee(25531).FIO() << endl;
	cout << "����� ����� ���������� = " << company.GetEmployee(25531).GetIdCard().GetNumber() << endl;
	cout << "������������ ����� ���������� �� = " << company.GetEmployee(25531).GetIdCard().GetDateExpire() << endl;
	cout << "��������� ���������� = " << company.GetEmployee(25531).GetIntellect() << endl;
	cout << "���������� ����������� �������� : " << company.CountEmployee() << endl;
	company.DelEmployee(25531);
	cout << "���������� ����������� �������� : " << company.CountEmployee() << endl;

	Patient *p1 = new Patient();
	p1->SetFIO("������", "�����", "�����������");
	Patient *p2 = new Patient();
	p2->SetFIO("������", "��������", "����������");
	Patient *p3 = new Patient();
	p3->SetFIO("�����", "������", "����������");

	Doctor *d1 = new Doctor();
	d1->SetFIO("���������", "�������", "��������");
	d1->SetSpecialty("����������");
	Doctor *d2 = new Doctor();
	d2->SetFIO("������", "������", "������������");
	d2->SetSpecialty("��������");

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