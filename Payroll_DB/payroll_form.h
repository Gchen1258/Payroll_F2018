#pragma once
#include "Payroll.h"
#include "Database.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for payroll_form
	/// </summary>
	public ref class payroll_form : public System::Windows::Forms::Form
	{
	private: 
		bool check = false;
		bool mouseDown = false;
		Point lastLocation;
	public:
		payroll_form(void)
		{
			InitializeComponent();
			SQLConnect^ db = gcnew SQLConnect();
			try {
				db->openConnection();
				String^ sql = "Select idEmployee, first_name, last_name from employee;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0}: {1} {2}", reader[0]->ToString(), reader[1]->ToString(), reader[2]->ToString());
					SelectionMenu->Items->Add(field);
				}
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~payroll_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  Salary_Label;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  Id_Label;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  Name_Label;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  SelectionMenu;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(payroll_form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Salary_Label = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Id_Label = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Name_Label = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SelectionMenu = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Paid per-hour:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Number of hours:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Salary";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Income";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"sumbit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &payroll_form::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(114, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(114, 18);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 71);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Taxes:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(114, 71);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox5_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(12, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(231, 210);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Inputs";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &payroll_form::groupBox1_Enter);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(114, 97);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 14;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox9_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(5, 97);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Benifits:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(114, 148);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 14;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox8_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(5, 152);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 13);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Last Name:";
			this->label14->Click += gcnew System::EventHandler(this, &payroll_form::label14_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(114, 175);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(114, 123);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &payroll_form::textBox6_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 175);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"ID:";
			this->label13->Click += gcnew System::EventHandler(this, &payroll_form::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 123);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"First Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(325, 189);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(231, 69);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Outputs";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Salary_Label);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->Id_Label);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->Name_Label);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(325, 62);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(276, 103);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Paycheck";
			// 
			// Salary_Label
			// 
			this->Salary_Label->AutoSize = true;
			this->Salary_Label->Location = System::Drawing::Point(163, 27);
			this->Salary_Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Salary_Label->Name = L"Salary_Label";
			this->Salary_Label->Size = System::Drawing::Size(27, 13);
			this->Salary_Label->TabIndex = 14;
			this->Salary_Label->Text = L"paid";
			this->Salary_Label->Click += gcnew System::EventHandler(this, &payroll_form::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(99, 27);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Salary:";
			this->label10->Click += gcnew System::EventHandler(this, &payroll_form::label10_Click);
			// 
			// Id_Label
			// 
			this->Id_Label->AutoSize = true;
			this->Id_Label->Location = System::Drawing::Point(163, 75);
			this->Id_Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Id_Label->Name = L"Id_Label";
			this->Id_Label->Size = System::Drawing::Size(15, 13);
			this->Id_Label->TabIndex = 14;
			this->Id_Label->Text = L"id";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(99, 75);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"ID:";
			// 
			// Name_Label
			// 
			this->Name_Label->AutoSize = true;
			this->Name_Label->Location = System::Drawing::Point(163, 57);
			this->Name_Label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Name_Label->Name = L"Name_Label";
			this->Name_Label->Size = System::Drawing::Size(35, 13);
			this->Name_Label->TabIndex = 14;
			this->Name_Label->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(99, 57);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Employee:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(359, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Employee";
			this->label16->Click += gcnew System::EventHandler(this, &payroll_form::label16_Click);
			// 
			// SelectionMenu
			// 
			this->SelectionMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SelectionMenu->FormattingEnabled = true;
			this->SelectionMenu->Location = System::Drawing::Point(418, 27);
			this->SelectionMenu->Name = L"SelectionMenu";
			this->SelectionMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->SelectionMenu->Size = System::Drawing::Size(138, 21);
			this->SelectionMenu->TabIndex = 18;
			this->SelectionMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &payroll_form::SelectionMenu_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->SelectionMenu);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(655, 312);
			this->panel1->TabIndex = 20;
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(625, 0);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(30, 26);
			this->closePage->TabIndex = 21;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &payroll_form::closePage_Click);
			this->closePage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_form::closePage_MouseDown);
			this->closePage->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_form::closePage_MouseMove);
			this->closePage->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &payroll_form::closePage_MouseUp);
			// 
			// payroll_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(656, 340);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"payroll_form";
			this->Text = L"payroll_form";
			this->Load += gcnew System::EventHandler(this, &payroll_form::payroll_form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void payroll_form_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (check) {
		bool IDTrue = false;
		bool NameTrue = false;		

		Payroll obj_payroll;//Object of payroll class.
		//Storing the values from the input text boxes.
		String^ t1 = textBox1->Text;
		String^ t2 = textBox2->Text;
		String^ t3 = textBox5->Text;
		String^ t4 = textBox6->Text;
		String^ t5 = textBox8->Text;
		String^ t6 = textBox7->Text;
		String^ t7 = textBox9->Text;
		//Converting the string values to float and int variables.
		float paid = (float)(Convert::ToDouble(t1));
		int hours = (int)(Convert::ToDouble(t2));
		float taxes = (float)(Convert::ToDouble(t3));
		float benefits = (float)(Convert::ToDouble(t7));
		int ID = (int)(Convert::ToDouble(t6));
		//Calculating the salary and storing it in the salary textbox.
		float salary = obj_payroll.newSalary(hours, paid, ID);
		textBox3->Text = salary.ToString();
		Salary_Label->Text = salary.ToString();
		//Calculating the income and storing it in the income textbox.
		float income = obj_payroll.newIncome(salary, taxes, benefits, ID);
		textBox4->Text = income.ToString();

		//Checking to see if the employee is in the database.
		NameTrue = obj_payroll.checkName(t4, t5);
		IDTrue = obj_payroll.checkID(ID);

		if (NameTrue == true)
			Name_Label->Text = (t4 + " " + t5);
		else
			MessageBox::Show("Error: Employee name is not register in the database");

		if (IDTrue == true)
			Id_Label->Text = ID.ToString();
		else
			MessageBox::Show("Error: Employee ID is not register in the database");


	}
	else {
		MessageBox::Show("Error!!!!");
	}
}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else {
		check = false;
	}
}

private: System::Void SelectionMenu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//Pulls our name from the ComboBox and formats it for our statement
	String^ fullname = SelectionMenu->Text;
	array< String^ >^ names = gcnew array< String^ >(3);
	names = fullname->Split(' ');
	names[0] = names[0]->TrimEnd(':');            //This gives us the employee id
	fullname = fullname->Substring(fullname->IndexOf(":") + 1);	//Trims the id off the name
	Name_Label->Text = fullname;
	Id_Label->Text = names[0];

	//Query our data from the database
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ query = query->Format("Select wages from employee where idEmployee={0}", names[0]);
		MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			Salary_Label->Text = reader[0]->ToString();
		}
	}
	catch (MySqlException^ err) {
		MessageBox::Show(err->ToString());
	}
	db->closeConnection();
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void closePage_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void closePage_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}
private: System::Void closePage_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
