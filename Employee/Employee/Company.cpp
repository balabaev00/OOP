
#include "pch.h"
#include "Company.h"

using namespace std;


void Company::SetName(string nName)
{
	this->name = nName;
}

string Company::GetName()
{
	return this->name;
}

void Company::AddEmployee(Employee employee)
{
	employees.push_back(employee);
}

void Company::DelEmployee(int numberCard)
{
	employees.remove_if([numberCard](Employee e)
	{
		return e.GetIdCard().GetNumber() == numberCard;
	});
}

Employee Company::GetEmployee(unsigned number)
{
	if (employees.size() == 0)
		throw - 2;
	else
	{
		auto res = find_if(employees.begin(), employees.end(), [number](Employee e)
		{
			return e.GetIdCard().GetNumber() == number;
		});
		if (res != employees.end())
			return *res;
	}
}

unsigned Company::CountEmployee()
{
	return this->employees.size();
}


Company::Company()
{
	this->name = "No Name";
}


Company::~Company()
{
}
