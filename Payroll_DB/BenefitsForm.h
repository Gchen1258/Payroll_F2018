#pragma once
#include "Database.h"
namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Benefits
	/// </summary>
	public ref class BenefitsForm : public System::Windows::Forms::Form
	{
	public:
		BenefitsForm(void)
		{
			InitializeComponent();
			SQLConnect^ db = gcnew SQLConnect();
			try {//Populate Names	
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
			try {//Populate Medical Insurances
				db->openConnection();
				String^ sql = "Select insuranceName from insurance where insType = 'Health';";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0}", reader[0]->ToString());
					MedInsComboBox->Items->Add(field);
				}
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();

			try {//Populate Dental Insurances
				db->openConnection();
				String^ sql = "Select insuranceName from insurance where insType = 'Dental';";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0}", reader[0]->ToString());
					DentInsComboBox->Items->Add(field);
				}
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();

			try {//Populate Optical Insurances
				db->openConnection();
				String^ sql = "Select insuranceName from insurance where insType = 'Optical';";
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
				MySqlDataReader^ reader = cmd->ExecuteReader();
				while (reader->Read())
				{
					String^ field = field->Format("{0}", reader[0]->ToString());
					OptInsComboBox->Items->Add(field);
				}
			}
			catch (MySqlException^ err) {
				MessageBox::Show(err->ToString());
			}
			db->closeConnection();
		}


		BenefitsForm(String^ ID)
		{ 
			
			InitializeComponent();
			//Pass employee's ID to query their data from the database. Unsure if String^ or int is correct for a primary key
			//employeeID = ID;
			/*Implement this query
			SELECT firstName, lastName
			FROM employees
			WHERE employees.id = employeeID
			Put those strings into Name_Label
			*/

			//Need query to get gross income as well -- unsure which table this will be in
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BenefitsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  MedInsComboBox;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  OK_Button;
	private: System::Windows::Forms::Button^  Cancel_Button;
	private: System::Windows::Forms::Button^  Apply_Button;

	private: System::Windows::Forms::Label^  Name_Label;
	private: System::Windows::Forms::Label^  Gross_Income_Label;
	private: System::Windows::Forms::Label^  Medical_Cost_Label;





	protected:

	private:
		/// <summary>
		String^ totalCostOfInsurance;
		String^ employeeID;
		String^ selectedMedicalID;
		String^ selectedOpticalID;
		String^ selectedDentalID;



	private: System::Windows::Forms::ComboBox^  SelectionMenu;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;
	private: System::Windows::Forms::Label^  medInsLabel;
	private: System::Windows::Forms::Label^  dentInsLabel;
	private: System::Windows::Forms::ComboBox^  DentInsComboBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  optInsLabel;
	private: System::Windows::Forms::ComboBox^  OptInsComboBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label11;

			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BenefitsForm::typeid));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->MedInsComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->OK_Button = (gcnew System::Windows::Forms::Button());
				 this->Cancel_Button = (gcnew System::Windows::Forms::Button());
				 this->Apply_Button = (gcnew System::Windows::Forms::Button());
				 this->Name_Label = (gcnew System::Windows::Forms::Label());
				 this->Gross_Income_Label = (gcnew System::Windows::Forms::Label());
				 this->Medical_Cost_Label = (gcnew System::Windows::Forms::Label());
				 this->SelectionMenu = (gcnew System::Windows::Forms::ComboBox());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->optInsLabel = (gcnew System::Windows::Forms::Label());
				 this->OptInsComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->dentInsLabel = (gcnew System::Windows::Forms::Label());
				 this->DentInsComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->medInsLabel = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->closePage = (gcnew System::Windows::Forms::PictureBox());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->groupBox1->SuspendLayout();
				 this->panel1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(33, 29);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(87, 13);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Employee Name:";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(33, 52);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(153, 13);
				 this->label2->TabIndex = 1;
				 this->label2->Text = L"Gross Income per Paycheck: $";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(33, 75);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(100, 13);
				 this->label3->TabIndex = 2;
				 this->label3->Text = L"Medical Insurance: ";
				 // 
				 // MedInsComboBox
				 // 
				 this->MedInsComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->MedInsComboBox->FormattingEnabled = true;
				 this->MedInsComboBox->Location = System::Drawing::Point(138, 75);
				 this->MedInsComboBox->Name = L"MedInsComboBox";
				 this->MedInsComboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->MedInsComboBox->Size = System::Drawing::Size(138, 21);
				 this->MedInsComboBox->TabIndex = 3;
				 this->MedInsComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::MedInsComboBox_SelectedIndexChanged);
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(33, 164);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(237, 13);
				 this->label4->TabIndex = 4;
				 this->label4->Text = L"Total Cost of Medical Coverage per Paycheck: $";
				 // 
				 // OK_Button
				 // 
				 this->OK_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->OK_Button->Location = System::Drawing::Point(124, 275);
				 this->OK_Button->Name = L"OK_Button";
				 this->OK_Button->Size = System::Drawing::Size(87, 23);
				 this->OK_Button->TabIndex = 6;
				 this->OK_Button->Text = L"OK";
				 this->OK_Button->UseVisualStyleBackColor = true;
				 this->OK_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::OK_Button_Click);
				 // 
				 // Cancel_Button
				 // 
				 this->Cancel_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->Cancel_Button->Location = System::Drawing::Point(217, 275);
				 this->Cancel_Button->Name = L"Cancel_Button";
				 this->Cancel_Button->Size = System::Drawing::Size(75, 23);
				 this->Cancel_Button->TabIndex = 7;
				 this->Cancel_Button->Text = L"Cancel";
				 this->Cancel_Button->UseVisualStyleBackColor = true;
				 this->Cancel_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::Cancel_Button_Click);
				 // 
				 // Apply_Button
				 // 
				 this->Apply_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->Apply_Button->Location = System::Drawing::Point(298, 275);
				 this->Apply_Button->Name = L"Apply_Button";
				 this->Apply_Button->Size = System::Drawing::Size(75, 23);
				 this->Apply_Button->TabIndex = 8;
				 this->Apply_Button->Text = L"Apply";
				 this->Apply_Button->UseVisualStyleBackColor = true;
				 this->Apply_Button->Click += gcnew System::EventHandler(this, &BenefitsForm::Apply_Button_Click);
				 // 
				 // Name_Label
				 // 
				 this->Name_Label->AutoSize = true;
				 this->Name_Label->Location = System::Drawing::Point(126, 29);
				 this->Name_Label->Name = L"Name_Label";
				 this->Name_Label->Size = System::Drawing::Size(35, 13);
				 this->Name_Label->TabIndex = 9;
				 this->Name_Label->Text = L"Name";
				 // 
				 // Gross_Income_Label
				 // 
				 this->Gross_Income_Label->AutoSize = true;
				 this->Gross_Income_Label->Location = System::Drawing::Point(192, 52);
				 this->Gross_Income_Label->Name = L"Gross_Income_Label";
				 this->Gross_Income_Label->Size = System::Drawing::Size(34, 13);
				 this->Gross_Income_Label->TabIndex = 10;
				 this->Gross_Income_Label->Text = L"Gross";
				 // 
				 // Medical_Cost_Label
				 // 
				 this->Medical_Cost_Label->AutoSize = true;
				 this->Medical_Cost_Label->Location = System::Drawing::Point(276, 164);
				 this->Medical_Cost_Label->Name = L"Medical_Cost_Label";
				 this->Medical_Cost_Label->Size = System::Drawing::Size(78, 13);
				 this->Medical_Cost_Label->TabIndex = 11;
				 this->Medical_Cost_Label->Text = L"Insurance Cost";
				 // 
				 // SelectionMenu
				 // 
				 this->SelectionMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->SelectionMenu->FormattingEnabled = true;
				 this->SelectionMenu->Location = System::Drawing::Point(298, 13);
				 this->SelectionMenu->Name = L"SelectionMenu";
				 this->SelectionMenu->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->SelectionMenu->Size = System::Drawing::Size(138, 21);
				 this->SelectionMenu->TabIndex = 15;
				 this->SelectionMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::SelectionMenu_SelectedIndexChanged);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->label11);
				 this->groupBox1->Controls->Add(this->label10);
				 this->groupBox1->Controls->Add(this->label9);
				 this->groupBox1->Controls->Add(this->label8);
				 this->groupBox1->Controls->Add(this->optInsLabel);
				 this->groupBox1->Controls->Add(this->OptInsComboBox);
				 this->groupBox1->Controls->Add(this->label6);
				 this->groupBox1->Controls->Add(this->dentInsLabel);
				 this->groupBox1->Controls->Add(this->DentInsComboBox);
				 this->groupBox1->Controls->Add(this->label5);
				 this->groupBox1->Controls->Add(this->medInsLabel);
				 this->groupBox1->Controls->Add(this->label1);
				 this->groupBox1->Controls->Add(this->label2);
				 this->groupBox1->Controls->Add(this->label3);
				 this->groupBox1->Controls->Add(this->MedInsComboBox);
				 this->groupBox1->Controls->Add(this->label4);
				 this->groupBox1->Controls->Add(this->Medical_Cost_Label);
				 this->groupBox1->Controls->Add(this->Gross_Income_Label);
				 this->groupBox1->Controls->Add(this->Name_Label);
				 this->groupBox1->Location = System::Drawing::Point(38, 44);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(398, 185);
				 this->groupBox1->TabIndex = 16;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Info";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(282, 123);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(13, 13);
				 this->label10->TabIndex = 21;
				 this->label10->Text = L"$";
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(282, 99);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(13, 13);
				 this->label9->TabIndex = 20;
				 this->label9->Text = L"$";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(282, 75);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(13, 13);
				 this->label8->TabIndex = 19;
				 this->label8->Text = L"$";
				 // 
				 // optInsLabel
				 // 
				 this->optInsLabel->AutoSize = true;
				 this->optInsLabel->Location = System::Drawing::Point(292, 124);
				 this->optInsLabel->Name = L"optInsLabel";
				 this->optInsLabel->Size = System::Drawing::Size(13, 13);
				 this->optInsLabel->TabIndex = 18;
				 this->optInsLabel->Text = L"0";
				 // 
				 // OptInsComboBox
				 // 
				 this->OptInsComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->OptInsComboBox->FormattingEnabled = true;
				 this->OptInsComboBox->Location = System::Drawing::Point(138, 123);
				 this->OptInsComboBox->Name = L"OptInsComboBox";
				 this->OptInsComboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->OptInsComboBox->Size = System::Drawing::Size(138, 21);
				 this->OptInsComboBox->TabIndex = 17;
				 this->OptInsComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::OptInsComboBox_SelectedIndexChanged);
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(33, 123);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(96, 13);
				 this->label6->TabIndex = 16;
				 this->label6->Text = L"Optical Insurance: ";
				 // 
				 // dentInsLabel
				 // 
				 this->dentInsLabel->AutoSize = true;
				 this->dentInsLabel->Location = System::Drawing::Point(292, 100);
				 this->dentInsLabel->Name = L"dentInsLabel";
				 this->dentInsLabel->Size = System::Drawing::Size(13, 13);
				 this->dentInsLabel->TabIndex = 15;
				 this->dentInsLabel->Text = L"0";
				 // 
				 // DentInsComboBox
				 // 
				 this->DentInsComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->DentInsComboBox->FormattingEnabled = true;
				 this->DentInsComboBox->Location = System::Drawing::Point(138, 99);
				 this->DentInsComboBox->Name = L"DentInsComboBox";
				 this->DentInsComboBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
				 this->DentInsComboBox->Size = System::Drawing::Size(138, 21);
				 this->DentInsComboBox->TabIndex = 14;
				 this->DentInsComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &BenefitsForm::DentInsComboBox_SelectedIndexChanged);
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(33, 99);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(94, 13);
				 this->label5->TabIndex = 13;
				 this->label5->Text = L"Dental Insurance: ";
				 // 
				 // medInsLabel
				 // 
				 this->medInsLabel->AutoSize = true;
				 this->medInsLabel->Location = System::Drawing::Point(292, 76);
				 this->medInsLabel->Name = L"medInsLabel";
				 this->medInsLabel->Size = System::Drawing::Size(13, 13);
				 this->medInsLabel->TabIndex = 12;
				 this->medInsLabel->Text = L"0";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(239, 16);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(53, 13);
				 this->label7->TabIndex = 17;
				 this->label7->Text = L"Employee";
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
					 static_cast<System::Int32>(static_cast<System::Byte>(64)));
				 this->panel1->Controls->Add(this->groupBox1);
				 this->panel1->Controls->Add(this->label7);
				 this->panel1->Controls->Add(this->OK_Button);
				 this->panel1->Controls->Add(this->Cancel_Button);
				 this->panel1->Controls->Add(this->SelectionMenu);
				 this->panel1->Controls->Add(this->Apply_Button);
				 this->panel1->Location = System::Drawing::Point(0, 27);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(503, 317);
				 this->panel1->TabIndex = 18;
				 // 
				 // closePage
				 // 
				 this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
				 this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->closePage->Location = System::Drawing::Point(473, 0);
				 this->closePage->Name = L"closePage";
				 this->closePage->Size = System::Drawing::Size(30, 26);
				 this->closePage->TabIndex = 19;
				 this->closePage->TabStop = false;
				 this->closePage->Click += gcnew System::EventHandler(this, &BenefitsForm::closePage_Click);
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(156, 86);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(0, 13);
				 this->label11->TabIndex = 22;
				 // 
				 // BenefitsForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
					 static_cast<System::Int32>(static_cast<System::Byte>(38)));
				 this->ClientSize = System::Drawing::Size(504, 343);
				 this->Controls->Add(this->closePage);
				 this->Controls->Add(this->panel1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Name = L"BenefitsForm";
				 this->Text = L"Benefits";
				 this->Load += gcnew System::EventHandler(this, &BenefitsForm::BenefitsForm_Load);
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
				 this->panel1->ResumeLayout(false);
				 this->panel1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private: System::Void OK_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		//Call calcTotalCost to ensure that we have the most current insurance selections
		this->calcTotalCost();
		//Make sure that the employee's current insurance selections do not exceed their income
		if (Convert::ToDouble(this->Gross_Income_Label->Text) < Convert::ToDouble(this->totalCostOfInsurance))
			MessageBox::Show("The cost of the currently selected insurance benefits exceeds this employee's income. Changes cannot be saved!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else
		{
			SQLConnect^ db = gcnew SQLConnect();
			db->createDeductable(employeeID, selectedMedicalID, selectedDentalID, selectedOpticalID, totalCostOfInsurance);
			BenefitsForm::Hide();
		}
	}
	private: System::Void Cancel_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		BenefitsForm::Hide();
	}
	private: System::Void Apply_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		//Call calcTotalCost to ensure that we have the most current insurance selections
		this->calcTotalCost();
		//Make sure that the employee's current insurance selections do not exceed their income
		if (Convert::ToDouble(this->Gross_Income_Label->Text) < Convert::ToDouble(this->totalCostOfInsurance))
			MessageBox::Show("The cost of the currently selected insurance benefits exceeds this employee's income. Changes cannot be saved!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else
		{
			SQLConnect^ db = gcnew SQLConnect();
			db->createDeductable(employeeID, selectedMedicalID, selectedDentalID, selectedOpticalID, totalCostOfInsurance);
		}
		
	}
	private: System::Void SelectionMenu_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Pulls our name from the ComboBox and formats it for our statement
		String^ name = SelectionMenu->Text;
		array< String^ >^ names = gcnew array< String^ >(3);
		names = name->Split(' ');
		names[0] = names[0]->TrimEnd(':');            //This gives us the employee id
		employeeID = names[0];
		name = name->Substring(name->IndexOf(":") + 1);	//Trims the id off the name
		Name_Label->Text = name;
		setInsurance(employeeID);

		//Query our data from the database
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("Select wages from employee where idEmployee={0}", names[0]);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Gross_Income_Label->Text = reader[0]->ToString();
				Gross_Income_Label->Text = Convert::ToString(Convert::ToDouble(Gross_Income_Label->Text) * 80);
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
	}
	private: System::Void MedInsComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Pulls our medical insurance name from the ComboBox and formats it for our statement
		String^ name = SelectionMenu->Text;
		array< String^ >^ names = gcnew array< String^ >(3);
		names = name->Split(' ');
		names[0] = names[0]->TrimEnd(':');            //This gives us the insurance id
		name = name->Substring(name->IndexOf(":") + 1);	//Trims the id off the name
		Name_Label->Text = name;

		//Query our data from the database
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("Select idinsurance, baseCost from insurance where insuranceName='{0}'", MedInsComboBox->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				this->selectedMedicalID = reader[0]->ToString();
				this->medInsLabel->Text = reader[1]->ToString();
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
		this->calcTotalCost();
	}
	private: System::Void DentInsComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Pulls our dental insurance name from the ComboBox and formats it for our statement
		String^ name = SelectionMenu->Text;
		array< String^ >^ names = gcnew array< String^ >(3);
		names = name->Split(' ');
		names[0] = names[0]->TrimEnd(':');            //This gives us the insurance id
		name = name->Substring(name->IndexOf(":") + 1);	//Trims the id off the name
		Name_Label->Text = name;

		//Query our data from the database
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("Select idinsurance, baseCost from insurance where insuranceName='{0}'", DentInsComboBox->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				this->selectedDentalID = reader[0]->ToString();
				this->dentInsLabel->Text = reader[1]->ToString();
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
		this->calcTotalCost();
	}
	private: System::Void OptInsComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//Pulls our dental insurance name from the ComboBox and formats it for our statement
		String^ name = SelectionMenu->Text;
		array< String^ >^ names = gcnew array< String^ >(3);
		names = name->Split(' ');
		names[0] = names[0]->TrimEnd(':');            //This gives us the insurance id
		name = name->Substring(name->IndexOf(":") + 1);	//Trims the id off the name
		Name_Label->Text = name;

		//Query our data from the database
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ query = query->Format("Select idinsurance, baseCost from insurance where insuranceName='{0}'", OptInsComboBox->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				this->selectedOpticalID = reader[0]->ToString();
				this->optInsLabel->Text = reader[1]->ToString();
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
		this->calcTotalCost();
	}
	private: void calcTotalCost() {
		//Calculates the total cost off all currently selected insurance categories and stores the value in
		//totalCostOfInsurance
		double healthValue, dentValue, optValue;
		healthValue = Convert::ToDouble(medInsLabel->Text);
		dentValue = Convert::ToDouble(dentInsLabel->Text);
		optValue = Convert::ToDouble(optInsLabel->Text);

		totalCostOfInsurance = Convert::ToString(healthValue + dentValue + optValue);
		//Display result
		this->Medical_Cost_Label->Text = "$" + Convert::ToString(totalCostOfInsurance);
	}
	private: void setInsurance(String^ empID) {
		//Takes an employee's ID and queries their currently selected insurance,
		//then sets the insurance combo boxes and cost labels to match
		//Query to use: SELECT healthInsFK, dentInsFK, optInsFK FROM deductables WHERE employeeFK = empID
		SQLConnect^ db = gcnew SQLConnect();
		//First query selected employee's saved insurance selections from the database
		try {
			db->openConnection();
			String^ query = query->Format("SELECT healthInsFK, dentInsFK, optInsFK FROM deductables WHERE employeeFK = '{0}'", Convert::ToString(empID));
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				this->selectedMedicalID = reader[0]->ToString();
				this->selectedDentalID = reader[1]->ToString();
				this->selectedOpticalID = reader[2]->ToString();
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();

		//Then set the text in the combo boxes and their corresponding labels to the correct values
		try {
			db->openConnection();
			String^ query = query->Format("SELECT i1.insuranceName, i1.baseCost, i2.insuranceName, i2.baseCost, i3.insuranceName, i3.baseCost FROM insurance AS i1, insurance as i2, insurance as i3 WHERE i1.idinsurance = '{0}' AND i2.idinsurance = '{1}' AND i3.idinsurance = '{2}'",
				this->selectedMedicalID->ToString(), this->selectedDentalID->ToString(), this->selectedOpticalID->ToString());
			MySqlCommand^ cmd = gcnew MySqlCommand(query, db->getConnection());
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				this->MedInsComboBox->Text = reader[0]->ToString();
				this->medInsLabel->Text = reader[1]->ToString();
				this->DentInsComboBox->Text = reader[2]->ToString();
				this->dentInsLabel->Text = reader[3]->ToString();
				this->OptInsComboBox->Text = reader[4]->ToString();
				this->optInsLabel->Text = reader[5]->ToString();
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();

		this->calcTotalCost();
	}


	private: System::Void BenefitsForm_Load(System::Object^  sender, System::EventArgs^  e) {
		totalCostOfInsurance = "0";
		this->Name_Label->Text = "Name";
		this->Gross_Income_Label->Text = "Gross";
		this->Medical_Cost_Label->Text = "Med Cost";
	}

	private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}


};
}

