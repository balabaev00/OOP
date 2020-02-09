#pragma once

#include <string>

using namespace std;

class Card
{
private:
	float number; // ����� �����
	string dateExpire; // ���� ���������
public:	
	Card();
	Card(float nNumber);
	void SetNumber(float nNumber); // ������ ��� ������ �����
	float GetNumber(); // ������ ��� ������ �����
	void SetDateExpire(string Date); // ������ ��� ���� ��������� �����
	string GetDateExpire(); // ������ ��� ���� ��������� �����
	~Card();
};

