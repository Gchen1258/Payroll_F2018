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
	float getTaxes(int);
	int getID(String^ fname, String^ lname);
	float newSalary(int, float, int);
	float newIncome(float, int);



};
