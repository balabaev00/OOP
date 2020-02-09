#include "pch.h"
#include "Doctor.h"


void Doctor::AddPatient(Patient * nPatient)
{
	m_patient.push_back(nPatient);
	nPatient->AddDoctor(this);
}

void Doctor::DelPatient(Patient * nPatient)
{
	if (nPatient == NULL)
		throw - 3;
	unsigned count = 0;
	vector <Patient*> n_patient;
	/*�������� �� ������� ����������*/
	for (unsigned i = 0; i < this->m_patient.size();i++)
	{
		if (nPatient->FIO() == m_patient[i]->FIO())
			count++;
	}
	if (count > 0)
	{
		n_patient.resize(m_patient.size() - count);
		for (unsigned i = 0; i < n_patient.size(); i++)
		{
			if (nPatient->FIO() != m_patient[i]->FIO())
			{
				n_patient[i] = m_patient[i];
			}
		}
		/*������������� ������ ��� � � ����� �������*/
		m_patient.resize(n_patient.size());
		for (unsigned i = 0; i < m_patient.size(); i++)
		{
			m_patient[i] = n_patient[i];
		}
	}
}

void Doctor::SetSpecialty(string nSpecialty)
{
	this->specialty = nSpecialty;
}

string Doctor::CheckPatient()
{
	if (m_patient.size() == 0)
	{
		return "������ " + this->FIO() + " ������������� : " + this->GetSpecialty() + " �� ����� ���������";
	}
	else 
		if (m_patient.size() > 0)
		{
			return "�� ����� � ������� " + this->FIO() + " " + to_string(m_patient.size()) + " �������(��)";
		}
	return string();
}

string Doctor::GetSpecialty()
{
	return this->specialty;
}

Doctor::Doctor()
{
}


Doctor::~Doctor()
{
}
