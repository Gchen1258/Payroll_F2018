#include "stdafx.h"
#include "User_Login.h"

[System::STAThread]
INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	System::Windows::Forms::Application::Run(%PayrollDB::payroll_form());
}