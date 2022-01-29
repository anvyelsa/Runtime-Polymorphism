#include "Person.h"

void CPerson::GetPersonData()
{
	cout << "\t\t\t\tEnter Name : ";
	cin.ignore();
	getline(cin, m_sName);
	cout << "\t\t\t\tEnter Address : ";
	getline(cin, m_sAddress);
	cout << "\t\t\t\tEnter Phone Number : ";
	cin >> m_lnPhoneNumber;
	cout << "\t\t\t\tEnter Adhar Number : ";
	cin >> m_lnAdharNumber;
}

