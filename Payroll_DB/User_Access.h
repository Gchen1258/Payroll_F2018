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
	/// Summary for User_Access
	/// </summary>
	public ref class User_Access : public System::Windows::Forms::Form
	{
		MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
		String^ name = "";
		String^ username = "";
		

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  closePage;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: bool mouseDown = false;
			 Point lastLocation;
			 
	public:
		User_Access(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		User_Access(String^ username)
		{
			InitializeComponent();
			
			
			this->username = username;

			String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";



			MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

			condatabase->Open();

			MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idemployee FROM payroll.users WHERE username='" + username + "'", condatabase);

			MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
			if (myReader->Read()) {
				textBox4->Text = (myReader["idemployee"]->ToString());
			}
			condatabase->Close();

			int id = Int32::Parse(textBox4->Text);

			condatabase->Open();
			MySqlCommand^ cmddatabase1 = gcnew MySqlCommand("SELECT idemployee,first_name,last_name,address,wages FROM payroll.employee WHERE idemployee=" + id + "", condatabase);
			MySqlDataReader ^ myReader1 = cmddatabase1->ExecuteReader();
			if (myReader1->Read()) {
				textBox1->Text = (myReader1["first_name"]->ToString());
				textBox2->Text = (myReader1["last_name"]->ToString());
				textBox3->Text = (myReader1["address"]->ToString());
			}
			condatabase->Close();

			try {

				DataTable^ dt = gcnew DataTable();


				sda->SelectCommand = cmddatabase1;
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;

			}
			catch (Exception^ex) {

				MessageBox::Show(ex->Message);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~User_Access()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(User_Access::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->closePage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(246, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Address";
			this->label3->Click += gcnew System::EventHandler(this, &User_Access::label3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(667, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Password_reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &User_Access::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"change address";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &User_Access::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Id";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(85, 11);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(76, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(890, 290);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(601, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(459, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Insert new password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(737, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"reenter new password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(609, 252);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(233, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Insert new information as requested";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(663, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Reset Your Password Here";
			this->label8->Click += gcnew System::EventHandler(this, &User_Access::label8_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(114, 340);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 17;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(114, 371);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(114, 399);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(114, 427);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 345);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Street Address";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 374);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 17);
			this->label10->TabIndex = 22;
			this->label10->Text = L"City";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 402);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"State";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 432);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"ZIP";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 304);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(191, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"use below to update Address";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(355, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(724, 150);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &User_Access::dataGridView1_CellContentClick);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(680, 345);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 17);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Click Here To Reset";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(0, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1114, 514);
			this->panel1->TabIndex = 28;
			// 
			// closePage
			// 
			this->closePage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closePage.BackgroundImage")));
			this->closePage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closePage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closePage->Location = System::Drawing::Point(1074, 0);
			this->closePage->Margin = System::Windows::Forms::Padding(4);
			this->closePage->Name = L"closePage";
			this->closePage->Size = System::Drawing::Size(40, 32);
			this->closePage->TabIndex = 29;
			this->closePage->TabStop = false;
			this->closePage->Click += gcnew System::EventHandler(this, &User_Access::closePage_Click);
			// 
			// User_Access
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1116, 552);
			this->Controls->Add(this->closePage);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"User_Access";
			this->Text = L"User_Access";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Access::User_Access_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Access::User_Access_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &User_Access::User_Access_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closePage))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

	

	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

	condatabase->Open();
	
	MySqlCommand^ cmddatabase = gcnew MySqlCommand("SELECT idemployee FROM payroll.users WHERE username='" +username+ "'", condatabase);

	MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
	if (myReader->Read()) {
		textBox4->Text = (myReader["idemployee"]->ToString());
	}
	condatabase->Close();

	int id = Int32::Parse(textBox4->Text);

	condatabase->Open();
	MySqlCommand^ cmddatabase1 = gcnew MySqlCommand("SELECT idemployee,first_name,last_name,address,wages FROM payroll.employee WHERE idemployee=" +id+ "", condatabase);
	MySqlDataReader ^ myReader1 = cmddatabase1->ExecuteReader();
	if (myReader1->Read()) {
		textBox1->Text = (myReader1["first_name"]->ToString());
		textBox2->Text = (myReader1["last_name"]->ToString());
		textBox3->Text = (myReader1["address"]->ToString());
	}
	condatabase->Close();
	
	try {

		DataTable^ dt = gcnew DataTable();


		sda->SelectCommand = cmddatabase1;
		sda->Fill(dt);
		bindingSource1->DataSource = dt;
		dataGridView1->DataSource = bindingSource1;

	}
	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	int indexRow;
	indexRow = e->RowIndex;
	DataGridViewRow^ row = dataGridView1->Rows[indexRow];

	textBox4->Text = row->Cells[0]->Value->ToString();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

	
	int id = Int32::Parse(textBox4->Text);
	String^ a1 = textBox7->Text;
	String^ a2 = textBox8->Text;
	String^ a3 = textBox9->Text;
	String^ a4 = textBox10->Text;

	String^ add = a1 + ", " + a2 + ", " + a3 + ", " + a4;
	


	MySqlCommand^ cmddatabase = gcnew MySqlCommand("update payroll.employee set address='"+add+"' WHERE idEmployee=" +id+ "", condatabase);
	condatabase->Open();
	MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
	MessageBox::Show(" Address updated ");
	condatabase->Close();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=strongbad";

	MySqlConnection^ condatabase = gcnew MySqlConnection(constring);

	if (textBox6->Text->Length > 0 && textBox5->Text->Length > 0) {
		if (textBox6->Text == textBox5->Text) {
			int id = Int32::Parse(textBox4->Text);
			String^ pass = textBox6->Text;
			String^ secret = "FAsPJvFAv4";
			String^ query = query->Format("update payroll.users set pass_hash=AES_ENCRYPT('{0}','FAsPJvFAv4') WHERE idEmployee='{1}';", pass, id);
			MySqlCommand^ cmddatabase = gcnew MySqlCommand( query, condatabase);
			condatabase->Open();
			MySqlDataReader ^ myReader = cmddatabase->ExecuteReader();
			MessageBox::Show(" Password updated ");
			condatabase->Close();

		}
	}
}
private: System::Void closePage_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void User_Access_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = true;
	lastLocation = e->Location;
}
private: System::Void User_Access_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (mouseDown) {
		this->Location = Point((this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);
		this->Update();
	}
}


private: System::Void User_Access_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	mouseDown = false;
}
};
}
