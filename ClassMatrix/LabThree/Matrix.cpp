#include "pch.h"
#include "Matrix.h"
#include <vector>

using namespace std;


Matrix::Matrix()
{
}

Matrix::Matrix(unsigned n, unsigned m)
{
	SetN(n);
	SetM(m);
	_matrix.resize(n);
	for (unsigned i = 0; i < n; i++)
		_matrix[i].resize(m);
}

Matrix::~Matrix()
{
}

vector <vector <float> > Matrix::GetMatrix()
{
	return _matrix;
}

unsigned Matrix::GetN() const
{
	return _n;
}

unsigned Matrix::GetM() const
{
	return _m;
}

void Matrix::SetMatrix(vector <vector <float> > matrix)
{
	_matrix = matrix;
}

void Matrix::SetN(unsigned n)
{
	_n = n;
}

void Matrix::SetM(unsigned m)
{
	_m = m;
}

void Matrix::SetNxM(unsigned n,unsigned m)
{
	SetN(n);
	SetM(m);
}

void Matrix::RandMatrix()
{
	for (unsigned i = 0; i < GetN(); i++)
		for (unsigned j = 0; j < GetM(); j++)
			_matrix[i][j] = rand()%30;
}

void Matrix::AllValueMatrix(float value)
{
	for (unsigned i = 0; i < GetN(); i++)
		for (unsigned j = 0; j < GetM(); j++)
			_matrix[i][j] = value;
}

float Matrix::ValueCells(unsigned i, unsigned j)
{
	return _matrix[i][j];
}

void Matrix::ChangeValueCells(float value, unsigned i, unsigned j)
{
	_matrix[i][j] = value;
}

Matrix Matrix::operator +(const Matrix &other) const
{
	if ((this->GetN() == other.GetN()) && (this->GetM() == other.GetM()))
	{
		unsigned n = _n;
		unsigned m = _m;
		Matrix temp(n, m);
		for (unsigned i = 0; i < n; i++)
			for (unsigned j = 0; j < m; j++)
				temp._matrix[i][j] = _matrix[i][j] + other._matrix[i][j];

		return temp;
	}
}

Matrix Matrix::operator -(const Matrix &other) const
{
	if ((this->GetN() == other.GetN()) && (this->GetM() == other.GetM()))
	{
		unsigned n = _n;
		unsigned m = _m;
		Matrix temp(n, m);
		for (unsigned i = 0; i < n; i++)
			for (unsigned j = 0; j < m; j++)
				temp._matrix[i][j] = _matrix[i][j] - other._matrix[i][j];
		return temp;
	}
}

Matrix Matrix::operator *(float value) const
{
		unsigned n = _n;
		unsigned m = _m;
		Matrix temp(n, m);
		for (unsigned i = 0; i < n; i++)
			for (unsigned j = 0; j < m; j++)
				temp._matrix[i][j] = _matrix[i][j] * value;
		return temp;
}

Matrix Matrix::operator *(const Matrix &other) const
{
	if ((this->GetN() == other.GetN()) && (this->GetM() == other.GetM()))
	{
		unsigned n = _n;
		unsigned m = _m;
		Matrix temp(n, m);
		for (unsigned i = 0; i < n; i++)
			for (unsigned j = 0; j < m; j++)
			{
				temp._matrix[i][j] = 0;
				for (unsigned k = 0; k < m; k++)
					temp._matrix[i][k] += _matrix[i][j] * other._matrix[i][j];
			}
		return temp;
	}
}

void Matrix::Transpose()
{
	Matrix temp(_n, _m);
	for (unsigned i=0;i<_matrix.size();i++)
		for (unsigned j = 0; j < _matrix[i].size(); j++)
		{
			temp._matrix[i][j] = _matrix[j][i];
		}
	SetMatrix(temp._matrix);
}

void Matrix::DiagonalMatrix()
{
	for (unsigned i=0;i<_matrix.size();i++)
		for (unsigned j = 0; j < _matrix[i].size(); j++)
		{
			if (i<j || i>j)
				_matrix[i][j] = 0;
		}
}

float Matrix::Determinant()
{
	float det = 0;
	if (_n == _m)
	{
		if (_n == 1)
		{
			det = _matrix[0][0];
			return det;
		}
		if (_n == 2)
		{
			det = _matrix[0][0] * _matrix[1][1] - _matrix[0][1] * _matrix[1][0];
			return det;
		}
		if (_n == 3)
		{
			det = _matrix[0][0] * (_matrix[1][1] * _matrix[2][2] - _matrix[1][2] * _matrix[2][1]) -
				_matrix[0][1] * (_matrix[1][0] * _matrix[2][2] - _matrix[1][2] * _matrix[2][0]) +
				_matrix[0][2] * (_matrix[1][0] * _matrix[2][1] - _matrix[1][1] * _matrix[2][0]);
			return det;
		}
	}
}

Matrix Matrix::operator +=(const Matrix &other) const
{
	unsigned n = _n;
	unsigned m = _m;
	Matrix temp(n, m);
	temp = temp + other;
	return temp;
}

Matrix Matrix::operator -=(const Matrix &other) const
{
	unsigned n = _n;
	unsigned m = _m;
	Matrix temp(n, m);
	temp = temp - other;
	return temp;
}

Matrix Matrix::operator *=(const Matrix &other) const
{
	unsigned n = _n;
	unsigned m = _m;
	Matrix temp(n, m);
	temp = temp * other;
	return temp;
}

Matrix Matrix::operator *=(float value) const
{
	unsigned n = _n;
	unsigned m = _m;
	Matrix temp(n, m);
	temp = temp * value;
	return temp;
}

vector <float>  Matrix::RowAccess(unsigned row)
{
	vector <float> temp;
	temp.resize(_matrix[0].size());
	for (unsigned j = 0; j < _matrix[0].size(); j++)
	{
		temp[j] = _matrix[row][j];
	}

	return temp;
}

void Matrix::FunctionMatrix(Func f)
{
}