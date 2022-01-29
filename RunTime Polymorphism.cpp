// RunTime Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Person.h"
#include"Doctor.h"
#include"Student.h"
#include"Teacher.h"
using namespace std;
int main()
{
	cout << "\t\t\t**********************Doctor*********************\n\n" << endl;
    CPerson *pPerson = new CDoctor();
	pPerson->GetDoctorData();
	cout << "\n\n\t\t\t**************************************************\n" << endl;
	pPerson->Display();
	cout << "\n\n\t\t\t**************************************************\n\n" << endl;
	cout << "\n\n\t\t\t**********************Student*********************\n\n" << endl;
	pPerson = new CStudent;
	pPerson->GetStudentData();
	cout << "\n\n\t\t\t**************************************************\n" << endl;
	pPerson->Display();
	cout << "\n\n\t\t\t**************************************************\n" << endl;
	cout << "\n\n\t\t\t**********************Teacher*********************\n\n" << endl;
	pPerson = new CTeacher;
	pPerson->GetTeacherData();
	cout << "\n\n\t\t\t**************************************************\n" << endl;
	pPerson->Display();
	cout << "\n\n\t\t\t**************************************************\n\n" << endl;
}

