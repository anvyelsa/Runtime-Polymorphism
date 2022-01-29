#include "Teacher.h"

void CTeacher::GetTeacherData()
{
	GetPersonData();
	cout << "\t\t\t\tEnter the Teacher ID : ";
	cin >> m_nTeacherId;
}

void CTeacher::Display()
{
	cout << "\t\t\t\tName : " << m_sName << endl;
	cout << "\t\t\t\tAddress : " << m_sAddress << endl;
	cout << "\t\t\t\tPhone Number : " << m_lnPhoneNumber << endl;
	cout << "\t\t\t\tAdhar Number : " << m_lnAdharNumber << endl;
	cout << "\t\t\t\tTeacher Id : " << m_nTeacherId << endl;
}
