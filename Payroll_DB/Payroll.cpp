// Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include "Database.h"
#include "Payroll.h"
#include "string"

using namespace System;
using namespace System::Windows::Forms;

//Functions from class Payroll
void Payroll::newPaycheck(int hours, float phsalary, int id)
{
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		float taxes = getTaxes(id);
		float new_salary = hours * phsalary;
		float new_income = Salary - (Salary * taxes);
		db->openConnection();
		String^ sql;
		sql = sql->Format("Insert into paycheck(idEmployee, Salary, Income, hours, pay_per_hour) Values('{0}', '{1}', '{2}', '{3}', '{4}');"
			,id, new_salary, new_income, hours, phsalary);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
	}
	db->closeConnection();
}

float Payroll::getTaxes(int id)
{
	float taxes;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// Retrieving the benefits value from the paycheck table.
		sql = sql->Format("SELECT iddeductables, totalCost FROM deductables where iddeductables = '{0}';",
			id);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			String^ Taxes = reader[1]->ToString();
			taxes = (float)(Convert::ToDouble(Taxes));
		}
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return taxes;
}

float Payroll::updateSalary(int hours, float phsalary, int id)
{
	float new_salary;
	new_salary = hours * phsalary;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		String^ newSalary = new_salary.ToString();
		db->openConnection();
		String^ sql;
		// Storing the salary values in the database.
		sql = sql->Format("Update paycheck Set Salary = '{0}', hours = '{1}', pay_per_hour = '{2}' where idEmployee='{3}';",
			new_salary, hours, phsalary, id);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return new_salary;
}

float Payroll::updateIncome(float Salary, int id)
{
	float taxes = getTaxes(id);
	float new_income = Salary - taxes;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// Storing the income values in the database.
		sql = sql->Format("Update paycheck Set Income = '{0}' where idEmployee='{1}';",
			new_income, id);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		cmd->ExecuteNonQuery();
		//Use datareader to execute your command when searching for results
		//MySqlDataReader^ reader = cmd->ExecuteReader();
		//MessageBox::Show(sql);

		//while (reader->Read())
		//{
			//reader[0] is first value you called for so in this case would be username
			//Returns an array for each row
			//String^ fnameCheck = reader[0]->ToString();
			//String^ lnameCheck = reader[1]->ToString();
			//MessageBox::Show(fnameCheck);
			//MessageBox::Show(lnameCheck);
			/*
			if (fname == fnameCheck && lname == lnameCheck)
			{
				return true;
			}
			else {
				return false;
			}
			*/
		//}
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return new_income;
}

int Payroll::getID(String^ fname, String^ lname)
{
	int ID;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// reader[0],  reader[1]
		sql = sql->Format("SELECT first_name, last_name, idEmployee FROM employee where first_name='{0}' and last_name='{1}';",
			fname, lname);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		while (reader->Read())
		{
			String^ employee_ID = reader[2]->ToString();
			ID = (int)(Convert::ToDouble(employee_ID));
		}
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	db->closeConnection();
	return ID;
}