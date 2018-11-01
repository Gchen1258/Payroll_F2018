#pragma once

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User_Login
	/// </summary>
	public ref class User_Login : public System::Windows::Forms::Form
	{
	public:
		User_Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  LoginButton;
	private: System::Windows::Forms::Button^  RegisterButton;
	private: System::Windows::Forms::TextBox^  UserField;
	private: System::Windows::Forms::TextBox^  passField;
	protected:



	private: System::Windows::Forms::Label^  UserLabel;
	private: System::Windows::Forms::Label^  PassLabel;
	private: System::Windows::Forms::Button^  button1;

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
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->UserField = (gcnew System::Windows::Forms::TextBox());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->UserLabel = (gcnew System::Windows::Forms::Label());
			this->PassLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->Location = System::Drawing::Point(329, 79);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(75, 23);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &User_Login::LoginButton_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->Location = System::Drawing::Point(329, 117);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(75, 23);
			this->RegisterButton->TabIndex = 1;
			this->RegisterButton->Text = L"New User";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &User_Login::RegisterButton_Click);
			// 
			// UserField
			// 
			this->UserField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UserField->Location = System::Drawing::Point(174, 82);
			this->UserField->Name = L"UserField";
			this->UserField->Size = System::Drawing::Size(132, 20);
			this->UserField->TabIndex = 2;
			// 
			// passField
			// 
			this->passField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passField->Location = System::Drawing::Point(174, 120);
			this->passField->Name = L"passField";
			this->passField->PasswordChar = '*';
			this->passField->Size = System::Drawing::Size(132, 20);
			this->passField->TabIndex = 3;
			this->passField->UseSystemPasswordChar = true;
			// 
			// UserLabel
			// 
			this->UserLabel->AutoSize = true;
			this->UserLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserLabel->Location = System::Drawing::Point(93, 87);
			this->UserLabel->Name = L"UserLabel";
			this->UserLabel->Size = System::Drawing::Size(56, 15);
			this->UserLabel->TabIndex = 4;
			this->UserLabel->Text = L"User ID:";
			// 
			// PassLabel
			// 
			this->PassLabel->AutoSize = true;
			this->PassLabel->Font = (gcnew System::Drawing::Font(L"Arial Black", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassLabel->Location = System::Drawing::Point(93, 125);
			this->PassLabel->Name = L"PassLabel";
			this->PassLabel->Size = System::Drawing::Size(69, 15);
			this->PassLabel->TabIndex = 5;
			this->PassLabel->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Test Connection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &User_Login::button1_Click);
			// 
			// User_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PassLabel);
			this->Controls->Add(this->UserLabel);
			this->Controls->Add(this->passField);
			this->Controls->Add(this->UserField);
			this->Controls->Add(this->RegisterButton);
			this->Controls->Add(this->LoginButton);
			this->Name = L"User_Login";
			this->Text = L"User_Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void LoginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//SQLConnect^ sql = gcnew SQLConnect();
	//bool check = sql->login(UserField->Text, passField->Text);
	bool check = true;
	if (check)
	{
		this->Hide();
		Main^ form = gcnew Main();
		form->ShowDialog();
	}
	}
private: System::Void RegisterButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Register^ reg = gcnew Register();
	reg->ShowDialog();
	this->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	DbTest^ db = gcnew DbTest();
	db->ShowDialog();
	this->Show();
}
};
}
