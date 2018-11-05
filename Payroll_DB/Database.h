#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;
using namespace System::IO;
using namespace System::Diagnostics;

ref class SQLConnect
{
private:
	//Change these to match your MySQL configurations
	String^ user = "root";
	String^	pass = "123456";
	String^ database = "payroll";
	String^	server = "localhost";
	String^ port = "3306";

	//Our secret key to encrypt and decrypt our password (https://randomkeygen.com/)
	String^ secret = "FAsPJvFAv4";
	String^ createKey = "server123";

	String^ connectionString = "server=" + server +";port=" + port + ";database=" + database + ";uid="+ user +";Pwd=" + pass;
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	

public:
	SQLConnect();

	bool login(String^ user, String^ pass);
	bool createUser(String^ user, String^ pass);
	bool createEmployee(String^ first_name, String^ last_name, String^ address, String^ wage, String^ position);

	MySqlConnection^ getConnection();
	bool openConnection();
	bool closeConnection();
	void backup(String^ path);
	void restore(String^ path);

};

