#pragma once

namespace PayrollDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ModButton;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  first_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  last_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  wages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Position;

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
			this->ModButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->first_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->last_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->wages = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// ModButton
			// 
			this->ModButton->Location = System::Drawing::Point(242, 226);
			this->ModButton->Name = L"ModButton";
			this->ModButton->Size = System::Drawing::Size(75, 23);
			this->ModButton->TabIndex = 0;
			this->ModButton->Text = L"Modify";
			this->ModButton->UseVisualStyleBackColor = true;
			this->ModButton->Click += gcnew System::EventHandler(this, &Main::ModButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tracker inc. ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(57, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(57, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Last Name:";
			this->label3->Click += gcnew System::EventHandler(this, &Main::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(57, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 15);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Position:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(57, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 15);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(57, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 15);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Wage:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->first_name,
					this->last_name, this->address, this->wages, this->Position
			});
			this->dataGridView1->Location = System::Drawing::Point(163, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(535, 150);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main::dataGridView1_CellContentClick_1);
			// 
			// first_name
			// 
			this->first_name->HeaderText = L"First Name";
			this->first_name->Name = L"first_name";
			// 
			// last_name
			// 
			this->last_name->HeaderText = L"Last Name";
			this->last_name->Name = L"last_name";
			// 
			// address
			// 
			this->address->HeaderText = L"Address";
			this->address->Name = L"address";
			// 
			// wages
			// 
			this->wages->HeaderText = L"Wages";
			this->wages->Name = L"wages";
			// 
			// Position
			// 
			this->Position->HeaderText = L"Position";
			this->Position->Name = L"Position";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 376);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ModButton);
			this->Name = L"Main";
			this->Text = L"Main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void ModButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SQLConnect^ db = gcnew SQLConnect();
	try {
		db->openConnection();
		String^ sql;
		sql = sql->Format("SELECT first_name, last_name, address, wages, position FROM employee");
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
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
