#pragma once
#include "Human.h"
#include "Card.h"
#include <string>

using namespace std;

class Employee :
	public Human
{
private:
	Card Icard; // Карта работника
public:
	Employee();
	~Employee();
	void SetIdCard(Card newCard); // Установить данные карты работника 
	Card GetIdCard(); // Получить данные карты работника 
};

