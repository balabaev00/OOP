#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include "Employee.h"

using namespace std;

class Company
{
	string name; // �������� ��������
	list <Employee> employees; // ������ �� ����������� ��������
public:
	void SetName(string nName); // ���������� �������� ��������
	string GetName(); // �������� �������� ��������
	void AddEmployee(Employee employee); // �������� ���������� � ��������
	void DelEmployee(int numberCard); // �������� ����������
	Employee GetEmployee(unsigned number); // �������� ���������� � ���� ����������� ��������
	unsigned CountEmployee();
	Company();
	~Company();
};

