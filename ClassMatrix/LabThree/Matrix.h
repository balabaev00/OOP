#pragma once

#include <iostream>
#include <vector>

using namespace std;
using Func = float(*)(float data,unsigned i, unsigned j);

class Matrix
{
	vector <vector <float> > _matrix; // Матрица
	unsigned _n; // Количество строк
	unsigned _m; // Количество столбцов
public:
	Matrix(); // Стандартный конструктор
	Matrix(unsigned n, unsigned m); // Конструктор для создания двумерного массива
	~Matrix(); // Деструктор
	vector <vector <float> > GetMatrix(); // Получить матрицу
	unsigned GetN() const; // Получить количество строк
	unsigned GetM() const; // Получить количество столбцов
	void SetMatrix(vector <vector <float> > matrix); // Установить матрицу
	void SetN(unsigned n); // Установить значение n
	void SetM(unsigned m); // Установить значение m
	void SetNxM(unsigned n,unsigned m); // Установить значение NxM
	void RandMatrix(); // Заполнение матрицы случайными числами
	void AllValueMatrix(float value); // Заполнение матрицы одним числом
	float ValueCells(unsigned i, unsigned j); // Получение значения из определенной ячейки
	void ChangeValueCells(float value, unsigned i, unsigned j); // Изменение значения ячейки
	Matrix operator +(const Matrix &other) const; // Оператор сложения матриц
	Matrix operator -(const Matrix &other) const; // Оператор вычитания матриц
	Matrix operator *(float Value) const; // Оператор умножения матрицы на число
	Matrix operator *(const Matrix &other) const; // Оператор умножения матрицы на матрицу
	void Transpose(); // Транспонирование матрицы
	void DiagonalMatrix(); // Создание диагональной матрицы 
	float Determinant(); // Расчет определителя
	Matrix operator +=(const Matrix &other) const; // Оператор сложения матриц
	Matrix operator -=(const Matrix &other) const; // Оператор вычитания матриц
	Matrix operator *=(float Value) const; // Оператор умножения матрицы на число
	Matrix operator *=(const Matrix &other) const; // Оператор умножения матрицы на матрицу
	vector <float> RowAccess(unsigned row); // Доступ к строкам матрицы
	void FunctionMatrix(Func f); // Лямбда функция
};


