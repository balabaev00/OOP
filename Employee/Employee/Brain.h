#pragma once

class Brain
{
	unsigned intellect;
public:
	Brain();
	Brain(unsigned nIntellect);
	~Brain();
	unsigned GetIntellect(); // ������ ��� ����������
	void SetIntellect(unsigned nIntellect); // ������ ��� ����������
};

