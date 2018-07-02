#include <iostream>
#include <string>
#include "buracos.h"
#include "buracoDAO.h"
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_confirmarPrioridade;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  prioridadeTextBox;
	private: System::Windows::Forms::ComboBox^  BuracoComboBox;
	private: System::Windows::Forms::Button^  bt_calcelarPrioridade;



	private: System::Windows::Forms::Label^  label3;

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
			this->bt_confirmarPrioridade = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->prioridadeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BuracoComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->bt_calcelarPrioridade = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_confirmarPrioridade
			// 
			this->bt_confirmarPrioridade->BackColor = System::Drawing::Color::PowderBlue;
			this->bt_confirmarPrioridade->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_confirmarPrioridade->Location = System::Drawing::Point(269, 258);
			this->bt_confirmarPrioridade->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_confirmarPrioridade->Name = L"bt_confirmarPrioridade";
			this->bt_confirmarPrioridade->Size = System::Drawing::Size(137, 57);
			this->bt_confirmarPrioridade->TabIndex = 0;
			this->bt_confirmarPrioridade->Text = L"Confirmar";
			this->bt_confirmarPrioridade->UseVisualStyleBackColor = false;
			this->bt_confirmarPrioridade->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 138);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Escolha buraco";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 180);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prioridade";
			// 
			// prioridadeTextBox
			// 
			this->prioridadeTextBox->Location = System::Drawing::Point(156, 176);
			this->prioridadeTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prioridadeTextBox->Name = L"prioridadeTextBox";
			this->prioridadeTextBox->Size = System::Drawing::Size(57, 22);
			this->prioridadeTextBox->TabIndex = 3;
			// 
			// BuracoComboBox
			// 
			this->BuracoComboBox->FormattingEnabled = true;
			this->BuracoComboBox->Location = System::Drawing::Point(156, 134);
			this->BuracoComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BuracoComboBox->Name = L"BuracoComboBox";
			this->BuracoComboBox->Size = System::Drawing::Size(92, 24);
			this->BuracoComboBox->TabIndex = 4;
			// 
			// bt_calcelarPrioridade
			// 
			this->bt_calcelarPrioridade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_calcelarPrioridade->Location = System::Drawing::Point(45, 258);
			this->bt_calcelarPrioridade->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_calcelarPrioridade->Name = L"bt_calcelarPrioridade";
			this->bt_calcelarPrioridade->Size = System::Drawing::Size(143, 57);
			this->bt_calcelarPrioridade->TabIndex = 5;
			this->bt_calcelarPrioridade->Text = L"Cancelar";
			this->bt_calcelarPrioridade->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(72, 27);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(256, 25);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Alterar Prioridade do Buraco";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 330);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bt_calcelarPrioridade);
			this->Controls->Add(this->BuracoComboBox);
			this->Controls->Add(this->prioridadeTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_confirmarPrioridade);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm1";
			this->Text = L"Aterar Prioridade";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		buracoDAO * aux = new buracoDAO;

	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
