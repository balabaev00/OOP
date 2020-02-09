#pragma once
#include <vector>
#include "Human.h"
#include "Doctor.h"


using namespace std;

class Doctor;

class Patient :
	public Human
{
private:
	vector <Doctor *> m_doctor;
public:
	void AddDoctor(Doctor *nDoctor);
	Patient();
	~Patient();
	friend class Doctor;
};

