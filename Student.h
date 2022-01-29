#pragma once
#include "Person.h"
class CStudent : public CPerson
{
private:
	int m_nStudentID;
	double m_dCGPA;
public:
	CStudent()
	{
		m_nStudentID = 0;
		m_dCGPA = 0;
	}
	~CStudent()
	{
		
	}
	void GetStudentData();
	void Display();

};

