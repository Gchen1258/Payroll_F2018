#pragma once

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewUser
	/// </summary>
	public ref class NewUser : public System::Windows::Forms::Form
	{
	public:
		NewUser(void)
		{
			InitializeComponent();
		}

	private:
		bool check = false;
		float wage = 120000.0;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  userField;
	protected:
	private: System::Windows::Forms::Label^  userLabel;
	private: System::Windows::Forms::Label^  PassLabel;
	private: System::Windows::Forms::TextBox^  PassField;
	private: System::Windows::Forms::TextBox^  ConfirmField;
	private: System::Windows::Forms::Label^  ConfirmPassLabel;



	private: System::Windows::Forms::GroupBox^  userInfoGB;
	private: System::Windows::Forms::TextBox^  AddrField;
	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::Label^  AddressLabel;
	private: System::Windows::Forms::TextBox^  CityField;
	private: System::Windows::Forms::TextBox^  FNameField;
	private: System::Windows::Forms::TextBox^  ZipField;
	private: System::Windows::Forms::TextBox^  LNameField;
	private: System::Windows::Forms::Label^  StateLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  ZipLabel;
	private: System::Windows::Forms::Label^  LNameLabel;
	private: System::Windows::Forms::ComboBox^  StateCBox;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->userField = (gcnew System::Windows::Forms::TextBox());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->PassLabel = (gcnew System::Windows::Forms::Label());
			this->PassField = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmField = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmPassLabel = (gcnew System::Windows::Forms::Label());
			this->userInfoGB = (gcnew System::Windows::Forms::GroupBox());
			this->AddrField = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddressLabel = (gcnew System::Windows::Forms::Label());
			this->CityField = (gcnew System::Windows::Forms::TextBox());
			this->FNameField = (gcnew System::Windows::Forms::TextBox());
			this->ZipField = (gcnew System::Windows::Forms::TextBox());
			this->LNameField = (gcnew System::Windows::Forms::TextBox());
			this->StateLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ZipLabel = (gcnew System::Windows::Forms::Label());
			this->LNameLabel = (gcnew System::Windows::Forms::Label());
			this->StateCBox = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->userInfoGB->SuspendLayout();
			this->SuspendLayout();
			// 
			// userField
			// 
			this->userField->Location = System::Drawing::Point(116, 83);
			this->userField->Name = L"userField";
			this->userField->Size = System::Drawing::Size(137, 20);
			this->userField->TabIndex = 25;
			this->userField->TextChanged += gcnew System::EventHandler(this, &NewUser::userField_TextChanged);
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Location = System::Drawing::Point(52, 90);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(55, 13);
			this->userLabel->TabIndex = 26;
			this->userLabel->Text = L"Username";
			// 
			// PassLabel
			// 
			this->PassLabel->AutoSize = true;
			this->PassLabel->Location = System::Drawing::Point(52, 115);
			this->PassLabel->Name = L"PassLabel";
			this->PassLabel->Size = System::Drawing::Size(53, 13);
			this->PassLabel->TabIndex = 23;
			this->PassLabel->Text = L"Password";
			// 
			// PassField
			// 
			this->PassField->Location = System::Drawing::Point(116, 109);
			this->PassField->Name = L"PassField";
			this->PassField->PasswordChar = '*';
			this->PassField->Size = System::Drawing::Size(137, 20);
			this->PassField->TabIndex = 21;
			this->PassField->TextChanged += gcnew System::EventHandler(this, &NewUser::PassField_TextChanged);
			// 
			// ConfirmField
			// 
			this->ConfirmField->Location = System::Drawing::Point(116, 135);
			this->ConfirmField->Name = L"ConfirmField";
			this->ConfirmField->PasswordChar = '*';
			this->ConfirmField->Size = System::Drawing::Size(137, 20);
			this->ConfirmField->TabIndex = 22;
			this->ConfirmField->TextChanged += gcnew System::EventHandler(this, &NewUser::ConfirmField_TextChanged);
			// 
			// ConfirmPassLabel
			// 
			this->ConfirmPassLabel->AutoSize = true;
			this->ConfirmPassLabel->Location = System::Drawing::Point(20, 138);
			this->ConfirmPassLabel->Name = L"ConfirmPassLabel";
			this->ConfirmPassLabel->Size = System::Drawing::Size(97, 13);
			this->ConfirmPassLabel->TabIndex = 24;
			this->ConfirmPassLabel->Text = L"Re-Type Password";
			// 
			// userInfoGB
			// 
			this->userInfoGB->Controls->Add(this->AddrField);
			this->userInfoGB->Controls->Add(this->label2);
			this->userInfoGB->Controls->Add(this->AddressLabel);
			this->userInfoGB->Controls->Add(this->CityField);
			this->userInfoGB->Controls->Add(this->FNameField);
			this->userInfoGB->Controls->Add(this->userField);
			this->userInfoGB->Controls->Add(this->userLabel);
			this->userInfoGB->Controls->Add(this->ZipField);
			this->userInfoGB->Controls->Add(this->PassLabel);
			this->userInfoGB->Controls->Add(this->LNameField);
			this->userInfoGB->Controls->Add(this->PassField);
			this->userInfoGB->Controls->Add(this->StateLabel);
			this->userInfoGB->Controls->Add(this->ConfirmField);
			this->userInfoGB->Controls->Add(this->label3);
			this->userInfoGB->Controls->Add(this->ConfirmPassLabel);
			this->userInfoGB->Controls->Add(this->ZipLabel);
			this->userInfoGB->Controls->Add(this->LNameLabel);
			this->userInfoGB->Controls->Add(this->StateCBox);
			this->userInfoGB->Location = System::Drawing::Point(69, 38);
			this->userInfoGB->Name = L"userInfoGB";
			this->userInfoGB->Size = System::Drawing::Size(579, 189);
			this->userInfoGB->TabIndex = 30;
			this->userInfoGB->TabStop = false;
			this->userInfoGB->Text = L"User Info";
			// 
			// AddrField
			// 
			this->AddrField->Location = System::Drawing::Point(359, 32);
			this->AddrField->Name = L"AddrField";
			this->AddrField->Size = System::Drawing::Size(188, 20);
			this->AddrField->TabIndex = 1;
			this->AddrField->TextChanged += gcnew System::EventHandler(this, &NewUser::AddrField_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(318, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"City";
			// 
			// AddressLabel
			// 
			this->AddressLabel->AutoSize = true;
			this->AddressLabel->Location = System::Drawing::Point(307, 39);
			this->AddressLabel->Name = L"AddressLabel";
			this->AddressLabel->Size = System::Drawing::Size(35, 13);
			this->AddressLabel->TabIndex = 5;
			this->AddressLabel->Text = L"Street";
			// 
			// CityField
			// 
			this->CityField->Location = System::Drawing::Point(359, 58);
			this->CityField->Name = L"CityField";
			this->CityField->Size = System::Drawing::Size(135, 20);
			this->CityField->TabIndex = 17;
			this->CityField->TextChanged += gcnew System::EventHandler(this, &NewUser::CityField_TextChanged);
			// 
			// FNameField
			// 
			this->FNameField->Location = System::Drawing::Point(116, 32);
			this->FNameField->Name = L"FNameField";
			this->FNameField->Size = System::Drawing::Size(137, 20);
			this->FNameField->TabIndex = 0;
			this->FNameField->TextChanged += gcnew System::EventHandler(this, &NewUser::FNameField_TextChanged);
			// 
			// ZipField
			// 
			this->ZipField->Location = System::Drawing::Point(359, 111);
			this->ZipField->Name = L"ZipField";
			this->ZipField->Size = System::Drawing::Size(135, 20);
			this->ZipField->TabIndex = 7;
			this->ZipField->TextChanged += gcnew System::EventHandler(this, &NewUser::ZipField_TextChanged);
			// 
			// LNameField
			// 
			this->LNameField->Location = System::Drawing::Point(116, 58);
			this->LNameField->Name = L"LNameField";
			this->LNameField->Size = System::Drawing::Size(137, 20);
			this->LNameField->TabIndex = 2;
			this->LNameField->TextChanged += gcnew System::EventHandler(this, &NewUser::LNameField_TextChanged);
			// 
			// StateLabel
			// 
			this->StateLabel->AutoSize = true;
			this->StateLabel->Location = System::Drawing::Point(312, 90);
			this->StateLabel->Name = L"StateLabel";
			this->StateLabel->Size = System::Drawing::Size(32, 13);
			this->StateLabel->TabIndex = 16;
			this->StateLabel->Text = L"State";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"First Name";
			// 
			// ZipLabel
			// 
			this->ZipLabel->AutoSize = true;
			this->ZipLabel->Location = System::Drawing::Point(303, 114);
			this->ZipLabel->Name = L"ZipLabel";
			this->ZipLabel->Size = System::Drawing::Size(50, 13);
			this->ZipLabel->TabIndex = 11;
			this->ZipLabel->Text = L"Zip Code";
			// 
			// LNameLabel
			// 
			this->LNameLabel->AutoSize = true;
			this->LNameLabel->Location = System::Drawing::Point(52, 58);
			this->LNameLabel->Name = L"LNameLabel";
			this->LNameLabel->Size = System::Drawing::Size(58, 13);
			this->LNameLabel->TabIndex = 4;
			this->LNameLabel->Text = L"Last Name";
			// 
			// StateCBox
			// 
			this->StateCBox->FormattingEnabled = true;
			this->StateCBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"Florida - FL", L"Georgia - GA", L"Hawaii - HI",
					L"Idaho - ID", L"Illinois - IL", L"Indiana - IN", L"Iowa - IA", L"Kansas - KS", L"Kentucky - KY", L"Louisiana - LA", L"Maine - ME",
					L"Maryland - MD", L"Massachusetts - MA", L"Michigan - MI", L"Minnesota - MN", L"Mississippi - MS", L"Missouri - MO", L"Montana - MT",
					L"Nebraska - NE", L"Nevada - NV", L"New Hampshire - NH", L"New Jersey - NJ", L"New Mexico - NM", L"New York - NY"
			});
			this->StateCBox->Location = System::Drawing::Point(359, 84);
			this->StateCBox->Name = L"StateCBox";
			this->StateCBox->Size = System::Drawing::Size(135, 21);
			this->StateCBox->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(364, 258);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(238, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewUser::button1_Click);
			// 
			// NewUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 315);
			this->Controls->Add(this->userInfoGB);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"NewUser";
			this->Text = L"NewUser";
			this->userInfoGB->ResumeLayout(false);
			this->userInfoGB->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String ^ state = StateCBox->Text;
	state = state->Substring(state->Length - 3);
	String^ address = AddrField->Text + ", " + CityField->Text + ", " + state + ", " + ZipField->Text;
	if (check)
	{
		SQLConnect^ sql = gcnew SQLConnect();
		sql->createEmployee(FNameField->Text, LNameField->Text, address, wage.ToString(), "management");
		sql->createUser(userField->Text, PassField->Text);
		this->Close();
	}
	else
	{
		MessageBox::Show("Please properly fill in all fields!");
	}
}

private: System::Void FNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void LNameField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void userField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void PassField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void ConfirmField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void AddrField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void CityField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void ZipField_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
private: System::Void wageBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->Text->Length > 0)
	{
		check = true;
	}
	else
	{
		check = false;
	}
}
};
}
