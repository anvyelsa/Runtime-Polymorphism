#pragma once
#include "Person.h"
class CDoctor :public CPerson
{
private:
	int m_nDoctorId;
	int m_nExperience;
	string m_sSpecialisation;
public:
	CDoctor()
	{
		m_nDoctorId = 0;
		m_nExperience = 0;
		m_sSpecialisation = "";
	}
	~CDoctor()
	{

	}
	void GetDoctorData();
	void Display();
};

