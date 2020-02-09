#pragma once

#include <iostream>
#include <vector>

using namespace std;
using Func = float(*)(float data,unsigned i, unsigned j);

class Matrix
{
	vector <vector <float> > _matrix; // �������
	unsigned _n; // ���������� �����
	unsigned _m; // ���������� ��������
public:
	Matrix(); // ����������� �����������
	Matrix(unsigned n, unsigned m); // ����������� ��� �������� ���������� �������
	~Matrix(); // ����������
	vector <vector <float> > GetMatrix(); // �������� �������
	unsigned GetN() const; // �������� ���������� �����
	unsigned GetM() const; // �������� ���������� ��������
	void SetMatrix(vector <vector <float> > matrix); // ���������� �������
	void SetN(unsigned n); // ���������� �������� n
	void SetM(unsigned m); // ���������� �������� m
	void SetNxM(unsigned n,unsigned m); // ���������� �������� NxM
	void RandMatrix(); // ���������� ������� ���������� �������
	void AllValueMatrix(float value); // ���������� ������� ����� ������
	float ValueCells(unsigned i, unsigned j); // ��������� �������� �� ������������ ������
	void ChangeValueCells(float value, unsigned i, unsigned j); // ��������� �������� ������
	Matrix operator +(const Matrix &other) const; // �������� �������� ������
	Matrix operator -(const Matrix &other) const; // �������� ��������� ������
	Matrix operator *(float Value) const; // �������� ��������� ������� �� �����
	Matrix operator *(const Matrix &other) const; // �������� ��������� ������� �� �������
	void Transpose(); // ���������������� �������
	void DiagonalMatrix(); // �������� ������������ ������� 
	float Determinant(); // ������ ������������
	Matrix operator +=(const Matrix &other) const; // �������� �������� ������
	Matrix operator -=(const Matrix &other) const; // �������� ��������� ������
	Matrix operator *=(float Value) const; // �������� ��������� ������� �� �����
	Matrix operator *=(const Matrix &other) const; // �������� ��������� ������� �� �������
	vector <float> RowAccess(unsigned row); // ������ � ������� �������
	void FunctionMatrix(Func f); // ������ �������
};


