#pragma once

class Brain
{
	unsigned intellect;
public:
	Brain();
	Brain(unsigned nIntellect);
	~Brain();
	unsigned GetIntellect(); // Геттер для интеллекта
	void SetIntellect(unsigned nIntellect); // Сеттер для интеллекта
};

