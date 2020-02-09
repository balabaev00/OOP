#pragma once
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include "Employee.h"

using namespace std;

class Company
{
	string name; // Название компании
	list <Employee> employees; // Массив из сотрудников компании
public:
	void SetName(string nName); // Установить название компании
	string GetName(); // Получить название компании
	void AddEmployee(Employee employee); // Добавить сотрудника в компанию
	void DelEmployee(int numberCard); // Удаление сотрудника
	Employee GetEmployee(unsigned number); // Получить информацию о всех сотрудниках компании
	unsigned CountEmployee();
	Company();
	~Company();
};

