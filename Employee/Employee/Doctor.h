#pragma once
#include <string>
#include <vector>
#include "Human.h"
#include "Patient.h"

using namespace std;
class Patient;

class Doctor :
	public Human
{
private:
	string specialty;
	vector <Patient*> m_patient;
public:
	void AddPatient(Patient *nPatient);
	void DelPatient(Patient *nPatient);
	void SetSpecialty(string nSpecialty);
	string CheckPatient();
	string GetSpecialty();
	Doctor();
	~Doctor();
	friend class Doctor;
	//// Шаблонная функция сортировки по возрастанию
	//template <typename T>
	//void Sort(vector<T> array)
	//{
	//	for (unsigned i=0;i<n;i++)
	//		for (unsigned j = i + 1; j < n; j++)
	//		{
	//			if (array[i] < array[j])
	//			{
	//				T temp = array[i];
	//				array[i] = array[j];
	//				array[j] = temp;
	//			}
	//		}
	//}
};

