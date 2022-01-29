#include "Doctor.h"
using namespace std;
void CDoctor::GetDoctorData()
{
	GetPersonData();
	cout << "\t\t\t\tEnter the Doctor ID : ";
	cin >> m_nDoctorId;
	cout << "\t\t\t\tEnter the Experience : ";
	cin >> m_nExperience;
	cout << "\t\t\t\tEnter Specialization : ";
	cin.ignore();
	getline(cin, m_sSpecialisation);
}

void CDoctor::Display()
{
	cout << "\t\t\t\tName : " << m_sName << endl;
	cout << "\t\t\t\tAddress : " << m_sAddress << endl;
	cout << "\t\t\t\tPhone Number : " << m_lnPhoneNumber << endl;
	cout << "\t\t\t\tAdhar Number : " << m_lnAdharNumber << endl;
	cout << "\t\t\t\tDoctor ID : "<<m_nDoctorId<<endl;
	cout << "\t\t\t\tExperience : " << m_nExperience << endl;
	cout << "\t\t\t\tSpecialization : "<<m_sSpecialisation;
}


