#pragma once
#include "Human.h"
#include "Card.h"
#include <string>

using namespace std;

class Employee :
	public Human
{
private:
	Card Icard; // ����� ���������
public:
	Employee();
	~Employee();
	void SetIdCard(Card newCard); // ���������� ������ ����� ��������� 
	Card GetIdCard(); // �������� ������ ����� ��������� 
};

