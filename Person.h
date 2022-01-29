#pragma once
#include<string>
#include<iostream>

using namespace std;
class CPerson
{
private:
	
public:
	string m_sName;
	string m_sAddress;
	long long int m_lnPhoneNumber;
	long int m_lnAdharNumber;

	CPerson()
	{
		 m_sName="";
		 m_sAddress="";
		 m_lnPhoneNumber=0;
		 m_lnAdharNumber=0;
	}
	virtual ~CPerson()
	{

	}
	void GetPersonData();
	virtual void Display()=0;
	virtual void GetDoctorData(){}
	virtual void DisplayDoctor() {}
	virtual void GetStudentData() {}
	virtual void DisplayStudent() {}
	virtual void GetTeacherData() {}
	virtual void DisplayTeacher() {}
	
};

