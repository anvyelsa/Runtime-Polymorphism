#include "Student.h"

void CStudent::GetStudentData()
{
	GetPersonData();
	cout << "\t\t\t\tEnter the Student ID : ";
	cin >> m_nStudentID;
	cout << "\t\t\t\tEnter the CGPA : ";
	cin >> m_dCGPA;
}

void CStudent::Display()
{
	cout << "\t\t\t\tName : " << m_sName << endl;
	cout << "\t\t\t\tAddress : " << m_sAddress << endl;
	cout << "\t\t\t\tPhone Number : " << m_lnPhoneNumber << endl;
	cout << "\t\t\t\tAdhar Number : " << m_lnAdharNumber << endl;
	cout << "\t\t\t\tStudent Id : " << m_nStudentID<<endl;
	cout << "\t\t\t\tCGPA : " << m_dCGPA << endl;



}
