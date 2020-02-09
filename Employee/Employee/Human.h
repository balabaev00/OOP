#pragma once
#include "Brain.h"
#include "Sneakers.h"

class Human
{
private:
	float health = 100; // �������� ��������
	Brain brain; // ���� ��������
	Sneakers sneaker; // ���������
	string name; // ���
	string surname; // �������
	string patronymic; // ��������
public:
	string CheckClothes(); // ���������� ������,���� ����� ���� �������
	string FIO(); // ���������� ������ ���
	unsigned GetIntellect(); // �������� �������� ����������
	void SetIntellect(unsigned nIntellect); // ���������� �������� ����������
	void SetFIO(string nSurname, string nName, string nPatronymic); // ������ ���
	Human(string nSurname, string nName, string nPatronymic);
	Human();
	~Human();
};

