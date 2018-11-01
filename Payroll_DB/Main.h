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
			SQLConnect^ sql = gcnew SQLConnect();
			employeeDataGrid->DataSource = sql->fillEmployee();
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
	private: System::Windows::Forms::DataGridView^  employeeDataGrid;
	protected:

	protected:

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
			this->employeeDataGrid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// employeeDataGrid
			// 
			this->employeeDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->employeeDataGrid->Location = System::Drawing::Point(29, 22);
			this->employeeDataGrid->Name = L"employeeDataGrid";
			this->employeeDataGrid->Size = System::Drawing::Size(556, 329);
			this->employeeDataGrid->TabIndex = 0;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 376);
			this->Controls->Add(this->employeeDataGrid);
			this->Name = L"Main";
			this->Text = L"Main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
