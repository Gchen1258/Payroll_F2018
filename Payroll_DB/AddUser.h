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
	/// Summary for AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	private:
		String^ position;
	public:
		AddUser(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddUser(String^ position)
		{
			this->position = position;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  userLabel;
	private: System::Windows::Forms::TextBox^  userField;
	private: System::Windows::Forms::TextBox^  passField;
	private: System::Windows::Forms::TextBox^  confirmField;
	protected:



	private: System::Windows::Forms::Label^  passLabel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  submitButton;

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
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->userField = (gcnew System::Windows::Forms::TextBox());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->confirmField = (gcnew System::Windows::Forms::TextBox());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Location = System::Drawing::Point(73, 42);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(58, 13);
			this->userLabel->TabIndex = 0;
			this->userLabel->Text = L"Username:";
			// 
			// userField
			// 
			this->userField->Location = System::Drawing::Point(137, 39);
			this->userField->Name = L"userField";
			this->userField->Size = System::Drawing::Size(100, 20);
			this->userField->TabIndex = 1;
			// 
			// passField
			// 
			this->passField->Location = System::Drawing::Point(137, 81);
			this->passField->Name = L"passField";
			this->passField->Size = System::Drawing::Size(100, 20);
			this->passField->TabIndex = 2;
			// 
			// confirmField
			// 
			this->confirmField->Location = System::Drawing::Point(137, 118);
			this->confirmField->Name = L"confirmField";
			this->confirmField->Size = System::Drawing::Size(100, 20);
			this->confirmField->TabIndex = 3;
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Location = System::Drawing::Point(75, 84);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(56, 13);
			this->passLabel->TabIndex = 4;
			this->passLabel->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Confirm Password:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->submitButton);
			this->panel1->Controls->Add(this->userField);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->userLabel);
			this->panel1->Controls->Add(this->passLabel);
			this->panel1->Controls->Add(this->passField);
			this->panel1->Controls->Add(this->confirmField);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(357, 237);
			this->panel1->TabIndex = 6;
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(137, 164);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(75, 23);
			this->submitButton->TabIndex = 6;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &AddUser::submitButton_Click);
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 261);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (userField->Text->Length > 0 && passField->Text->Length > 0 && confirmField->Text->Length > 0) {
			if (passField->Text == confirmField->Text) {
				SQLConnect^ db = gcnew SQLConnect();
				db->openConnection();
				db->createUser(userField->Text, passField->Text, position);
			}
		}
	}
};
}
