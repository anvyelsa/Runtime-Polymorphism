#pragma once
#include "Person.h"
class CTeacher : public CPerson
{
private:
	int m_nTeacherId;
public:
	CTeacher()
	{
		m_nTeacherId = 0;
	}
	~CTeacher()
	{

	}
	void GetTeacherData();
	void Display();
};

