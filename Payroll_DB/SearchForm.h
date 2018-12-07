#pragma once
#ifndef MAIN_H_INCLUDED__
#define MAIN_H_INCLUDED__
#include "Database.h"
#include "ModifyEmployee.h"

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
		//MySqlCommandBuilder^ cd = gcnew MySqlCommandBuilder(sda);


	private:
		bool filled = false;
		bool mouseDown = false;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  search_by_name;
	private: System::Windows::Forms::Button^  display_deleted;

			 Point lastLocation;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::BindingSource^  bindingSource2;
			 String^ userid;
	public:
		SearchForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::BindingSource^  bindingSource1;






	private: System::Windows::Forms::TextBox^  first_name_textBox;
	private: System::Windows::Forms::TextBox^  last_name_textBox;
	private: System::Windows::Forms::TextBox^  address_textBox;
	private: System::Windows::Forms::TextBox^  wage_textBox;
	private: System::Windows::Forms::TextBox^  position_textBox;





	private: System::Windows::Forms::TextBox^  idEmployee_textBox;

	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;








	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->first_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->last_name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->address_textBox = (gcnew System::Windows::Forms::TextBox());
			this->wage_textBox = (gcnew System::Windows::Forms::TextBox());
			this->position_textBox = (gcnew System::Windows::Forms::TextBox());
			this->idEmployee_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->display_deleted = (gcnew System::Windows::Forms::Button());
			this->search_by_name = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(458, 12);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tracker Inc. Employee Roster";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(24, 94);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(24, 127);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Last Name:";
			this->label3->Click += gcnew System::EventHandler(this, &SearchForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(24, 191);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Position:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(24, 159);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 19);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(27, 223);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 19);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Wage:";
			// 
			// first_name_textBox
			// 
			this->first_name_textBox->Location = System::Drawing::Point(116, 95);
			this->first_name_textBox->Margin = System::Windows::Forms::Padding(4);
			this->first_name_textBox->Name = L"first_name_textBox";
			this->first_name_textBox->Size = System::Drawing::Size(132, 22);
			this->first_name_textBox->TabIndex = 8;
			this->first_name_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::first_name_textBox_TextChanged);
			// 
			// last_name_textBox
			// 
			this->last_name_textBox->Location = System::Drawing::Point(116, 127);
			this->last_name_textBox->Margin = System::Windows::Forms::Padding(4);
			this->last_name_textBox->Name = L"last_name_textBox";
			this->last_name_textBox->Size = System::Drawing::Size(132, 22);
			this->last_name_textBox->TabIndex = 9;
			this->last_name_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::last_name_textBox_TextChanged);
			// 
			// address_textBox
			// 
			this->address_textBox->Location = System::Drawing::Point(116, 159);
			this->address_textBox->Margin = System::Windows::Forms::Padding(4);
			this->address_textBox->Name = L"address_textBox";
			this->address_textBox->Size = System::Drawing::Size(132, 22);
			this->address_textBox->TabIndex = 10;
			this->address_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::address_textBox_TextChanged);
			// 
			// wage_textBox
			// 
			this->wage_textBox->Location = System::Drawing::Point(116, 223);
			this->wage_textBox->Margin = System::Windows::Forms::Padding(4);
			this->wage_textBox->Name = L"wage_textBox";
			this->wage_textBox->Size = System::Drawing::Size(132, 22);
			this->wage_textBox->TabIndex = 11;
			this->wage_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::wage_textBox_TextChanged);
			// 
			// position_textBox
			// 
			this->position_textBox->Location = System::Drawing::Point(116, 188);
			this->position_textBox->Margin = System::Windows::Forms::Padding(4);
			this->position_textBox->Name = L"position_textBox";
			this->position_textBox->Size = System::Drawing::Size(132, 22);
			this->position_textBox->TabIndex = 12;
			this->position_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::position_textBox_TextChanged);
			// 
			// idEmployee_textBox
			// 
			this->idEmployee_textBox->Location = System::Drawing::Point(116, 63);
			this->idEmployee_textBox->Margin = System::Windows::Forms::Padding(4);
			this->idEmployee_textBox->Name = L"idEmployee_textBox";
			this->idEmployee_textBox->Size = System::Drawing::Size(132, 22);
			this->idEmployee_textBox->TabIndex = 13;
			this->idEmployee_textBox->TextChanged += gcnew System::EventHandler(this, &SearchForm::idEmployee_textBox_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Location = System::Drawing::Point(24, 63);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"ID";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->display_deleted);
			this->panel1->Controls->Add(this->search_by_name);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->idEmployee_textBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->position_textBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->wage_textBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->address_textBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->last_name_textBox);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->first_name_textBox);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1356, 576);
			this->panel1->TabIndex = 17;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SearchForm::panel1_Paint);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(1000, 63);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(321, 480);
			this->dataGridView2->TabIndex = 24;
			// 
			// display_deleted
			// 
			this->display_deleted->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->display_deleted->Location = System::Drawing::Point(27, 467);
			this->display_deleted->Name = L"display_deleted";
			this->display_deleted->Size = System::Drawing::Size(195, 33);
			this->display_deleted->TabIndex = 22;
			this->display_deleted->Text = L"Display Deleted";
			this->display_deleted->UseVisualStyleBackColor = true;
			this->display_deleted->Click += gcnew System::EventHandler(this, &SearchForm::display_deleted_Click);
			// 
			// search_by_name
			// 
			this->search_by_name->Location = System::Drawing::Point(26, 308);
			this->search_by_name->Name = L"search_by_name";
			this->search_by_name->Size = System::Drawing::Size(197, 36);
			this->search_by_name->TabIndex = 21;
			this->search_by_name->Text = L"Search By First Name";
			this->search_by_name->UseVisualStyleBackColor = true;
			this->search_by_name->Click += gcnew System::EventHandler(this, &SearchForm::search_by_name_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(25, 350);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(197, 35);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Search By ID";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SearchForm::button5_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(26, 429);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 32);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Delete Employee";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SearchForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 391);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 32);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Modify";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SearchForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 30);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Display Full Roster";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SearchForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(333, 63);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(671, 480);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchForm::dataGridView1_CellContentClick_1);
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(1313, 0);
			this->closePage->Margin = System::Windows::Forms::Padding(4);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(40, 32);
			this->closePage->TabIndex = 17;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &SearchForm::closePage_Click);
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1356, 609);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SearchForm";
			this->Text = L"Main";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::SearchForm_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 /*private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }*/
	private: System::Void ModButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		int id = Int32::Parse(idEmployee_textBox->Text);
		ModifyEmployee^ me = gcnew ModifyEmployee(id);
		me->ShowDialog();

		// regulr user and admin access 

	}

	private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int indexRow;
		indexRow = e->RowIndex;
		DataGridViewRow^ row = dataGridView1->Rows[indexRow];
		
		idEmployee_textBox->Text = row->Cells[0]->Value->ToString();
		first_name_textBox->Text = row->Cells[1]->Value->ToString();
		last_name_textBox->Text = row->Cells[2]->Value->ToString();
		address_textBox->Text = row->Cells[3]->Value->ToString();
		wage_textBox->Text = row->Cells[4]->Value->ToString();
		
	}
	private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void searchBTN_Click(System::Object^  sender, System::EventArgs^  e) {
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ sql;
			sql = sql->Format("SELECT idEmployee, first_name, last_name, address, wages, position FROM Employee WHERE idEmployee LIKE '" + idEmployee_textBox->Text + "%'");
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
			//cmd->ExecuteNonQuery();
			MySqlDataReader^ dataset = cmd->ExecuteReader();
			int i = 0;
			while (dataset->Read()) {
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = dataset[0];
				dataGridView1->Rows[i]->Cells[1]->Value = dataset[1];
				dataGridView1->Rows[i]->Cells[2]->Value = dataset[2];
				dataGridView1->Rows[i]->Cells[3]->Value = dataset[3];
				dataGridView1->Rows[i]->Cells[4]->Value = dataset[4];
				i++;
				//dataGridView1->DataSource = dataset;
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();

	}
	private: System::Void idEmployee_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void first_name_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void last_name_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void address_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void wage_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void position_textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->Text->Length > 0)
		{
			filled = true;
		}
		else
		{
			filled = false;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SQLConnect^ db = gcnew SQLConnect();
		try {
			db->openConnection();
			String^ sql;
			sql = sql->Format("SELECT idEmployee, first_name, last_name, address, wages, position FROM Employee");
			MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
			//cmd->ExecuteNonQuery();
			MySqlDataReader^ dataset = cmd->ExecuteReader();
			int i = 0;
			while (dataset->Read()) {
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = dataset[0];
				dataGridView1->Rows[i]->Cells[1]->Value = dataset[1];
				dataGridView1->Rows[i]->Cells[2]->Value = dataset[2];
				dataGridView1->Rows[i]->Cells[3]->Value = dataset[3];
				dataGridView1->Rows[i]->Cells[4]->Value = dataset[4];
				i++;
				//dataGridView1->DataSource = dataset;
			}
		}
		catch (MySqlException^ err) {
			MessageBox::Show(err->ToString());
		}
		db->closeConnection();
	}

	private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void SearchForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
		lastLocation = e->Location;
	}
	private: System::Void SearchForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown) {
			this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
			this->Update();
		}
	}
	private: System::Void SearchForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		
		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
		
		MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idEmployee, first_name, last_name, address, wages FROM payroll.employee;", condatabase);


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

		MySqlCommand^ cmddatabase1 = gcnew MySqlCommand("SELECT username,position FROM payroll.users;", condatabase);

		try {

			DataTable^ dt1 = gcnew DataTable();
			sda->SelectCommand = cmddatabase1;
			sda->Fill(dt1);
			bindingSource2->DataSource = dt1;
			dataGridView2->DataSource = bindingSource2;

		}
		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}




	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		// modify employee data using textboxes

		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

		int id = Int32::Parse(idEmployee_textBox->Text);
		String^ Fname = first_name_textBox->Text;
		String^ Lname = last_name_textBox->Text;
		String^ add = address_textBox->Text;
		String^ pos = position_textBox->Text;
		double w = Double::Parse(wage_textBox->Text);


		MySqlCommand^ cmddatabase = gcnew MySqlCommand("update payroll.employee set idEmployee='" + id + "',first_name='" + Fname + "',last_name='" + Lname + "',address='" + add + "',position='" + pos + "',wages='" + w + "' WHERE idEmployee=" + id + "", condatabase);
		condatabase->Open();
		MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
		MessageBox::Show(" User updated ");
		condatabase->Close();


		//MySqlCommandBuilder^ cd = gcnew MySqlCommandBuilder(sda);
		//DataTable^ dt = gcnew DataTable();
			//sda->Update(dt);
			//dt->AcceptChanges();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		// Delete employee from Database while adding to deleted database

		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

		int id = Int32::Parse(idEmployee_textBox->Text);

		MySqlCommand^ cmddatabase1 = gcnew MySqlCommand("INSERT INTO  payroll.deleted (idemployee,first_name,last_name,address,wages,married) SELECT idemployee,first_name,last_name,address,wages,married FROM payroll.employee WHERE idEmployee=" + id + "", condatabase);

		MySqlCommand^ cmddatabase = gcnew MySqlCommand("delete from payroll.employee WHERE idEmployee=" + id + "", condatabase);

		// adding to database deleted
		condatabase->Open();

		MySqlDataReader ^ myReader2 = cmddatabase1->ExecuteReader();

		condatabase->Close();

		// deleting the employee
		condatabase->Open();

		MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();

		MessageBox::Show(" User Deleted ");

		condatabase->Close();




	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		// search database by employee id

		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
		int id = Int32::Parse(idEmployee_textBox->Text);
		MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idEmployee, first_name, last_name, address, wages FROM payroll.employee  WHERE idEmployee=" + id + "", condatabase);


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

		//int id = Int32::Parse(textBox4->Text);

		condatabase->Open();
		MySqlCommand^ cmddatabase1 = gcnew MySqlCommand("SELECT idemployee,first_name,last_name,address,wages FROM payroll.employee WHERE idemployee=" + id + "", condatabase);
		MySqlDataReader ^ myReader1 = cmddatabase1->ExecuteReader();
		if (myReader1->Read()) {
			idEmployee_textBox->Text = (myReader1["idemployee"]->ToString());
			first_name_textBox->Text = (myReader1["first_name"]->ToString());
			last_name_textBox->Text = (myReader1["last_name"]->ToString());
			address_textBox->Text = (myReader1["address"]->ToString());
			wage_textBox->Text = (myReader1["wages"]->ToString());
			
		}
		condatabase->Close();



	}
	private: System::Void search_by_name_Click(System::Object^  sender, System::EventArgs^  e) {
		// Search the data base using employee first name


		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);
		//int id = Int32::Parse(idEmployee_textBox->Text);
		String^ key = first_name_textBox->Text;
		MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idEmployee, first_name, last_name, address, wages FROM payroll.employee  WHERE first_name='" + key + "'", condatabase);
		//MySqlDataReader ^ myReader;

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



	private: System::Void display_deleted_Click(System::Object^  sender, System::EventArgs^  e) {

		// show deleted employee list
		String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

		MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

		MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idEmployee, first_name, last_name, address, wages FROM payroll.deleted;", condatabase);


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
	private: System::Void cell_view_Click(System::Object^  sender, System::EventArgs^  e) {


	}
	};
}
#endif