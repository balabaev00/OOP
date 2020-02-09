#include "pch.h"
#include "Patient.h"


void Patient::AddDoctor(Doctor * nDoctor)
{
	m_doctor.push_back(nDoctor);
}

Patient::Patient()
{
}


Patient::~Patient()
{
}
