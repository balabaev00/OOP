#pragma once
#include "Brain.h"
#include "Sneakers.h"

class Human
{
private:
	float health = 100; // Здоровье человека
	Brain brain; // Мозг человека
	Sneakers sneaker; // Кроссовки
	string name; // Имя
	string surname; // Фамилия
	string patronymic; // Отчество
public:
	string CheckClothes(); // Возвращает размер,цвет обуви если имеется
	string FIO(); // Возвращает строку ФИО
	unsigned GetIntellect(); // Получить значение интеллекта
	void SetIntellect(unsigned nIntellect); // Установить значение интеллекта
	void SetFIO(string nSurname, string nName, string nPatronymic); // Сеттер ФИО
	Human(string nSurname, string nName, string nPatronymic);
	Human();
	~Human();
};

