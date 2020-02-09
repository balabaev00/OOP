#pragma once

#include <string>

using namespace std;

class Card
{
private:
	float number; // Номер карты
	string dateExpire; // Дата окончания
public:	
	Card();
	Card(float nNumber);
	void SetNumber(float nNumber); // Сеттер для номера карты
	float GetNumber(); // Геттер для номера карты
	void SetDateExpire(string Date); // Сеттер для даты окончания карты
	string GetDateExpire(); // Геттер для даты окончания карты
	~Card();
};

