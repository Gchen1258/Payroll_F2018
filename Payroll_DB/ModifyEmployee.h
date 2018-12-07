#pragma once

#include "Database.h"
//#include "SearchForm.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModifyEmployee
	/// </summary>
	public ref class ModifyEmployee : public System::Windows::Forms::Form
	{
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();

			 int userid;
	public:
		ModifyEmployee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		ModifyEmployee(int userid) {
			InitializeComponent();
			//TODO CODE FOR FILLING IN FIELDS
			//TO CHANGE EMPLOYEE PASS
			//bool check -> Check if current username and password matches
			
			
			
			
				//InitializeComponent();
				this->userid = userid;
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModifyEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Display";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModifyEmployee::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(207, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(650, 406);
			this->dataGridView1->TabIndex = 1;
			// 
			// ModifyEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 470);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"ModifyEmployee";
			this->Text = L"ModifyEmployee";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=8391";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
		//int id = Int32::Parse(idEmployee_textBox->Text);
		MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT * FROM payroll.employee  WHERE idEmployee=" + userid + "", condatabase);


		try {

			DataTable^ dt = gcnew DataTable();


			sda->SelectCommand = cmddatabase;
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;

		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
