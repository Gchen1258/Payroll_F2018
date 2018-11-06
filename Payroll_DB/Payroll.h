#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Payroll
{
private:
	float Income = 0;
	float Salary = 0;
	float Paid_Perhour = 0;
	int NumHours = 0;
	float taxes = 0;
	
	//float benefits;

public:
	Payroll() {};
	float GetSalary(float Salary) { return Salary; };
	float GetIncome(float Income) { return Income; };
	bool checkName(String^ fname, String^ lname);
	bool checkID(int ID);
	float newSalary(int, float, int);
	float newIncome(float, float, float, int);

};
