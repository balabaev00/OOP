

#include "pch.h"
#include "Matrix.h"
#include <iostream>
#include <locale.h>

using namespace std;



void print(Matrix a)
{
	unsigned n = a.GetN();
	unsigned m = a.GetM();
	vector <vector <float> > matrix;
	matrix = a.GetMatrix();
	for (unsigned i = 0; i < n; i++)
	{
		for (unsigned j = 0; j < m; j++)
			cout << matrix[i][j] << "	";
		cout << endl;
	}
			
}

int main()
{
	setlocale(LC_ALL, "Rus");
	Matrix a(2,2);
	a.RandMatrix();
	cout << "Матрица A" << endl;
	print(a);
	Matrix b(2, 2);
	b.RandMatrix();
	cout << "Матрица B" << endl;
	print(b);
	Matrix c(2, 2);
	c = a + b;
	cout << "Матрица A+B" << endl;
	print(c);
	c = a * b;
	cout << "Матрица A*B" << endl;
	print(c);
	c = a - b;
	cout << "Матрица A-B" << endl;
	print(c);
	unsigned i = 1;
	unsigned j = 1;
	float data = a.ValueCells(i,j);
	a.FunctionMatrix([](float data, unsigned i, unsigned j)->float {
		if (data == 0)
			return data;
	});
}

