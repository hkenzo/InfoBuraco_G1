#include <iostream>
#include <stdio.h>
#include "saida.h"
#include "saidaDAO.h"
#include <msclr\marshal_cppstd.h>
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for removerSaida
	/// </summary>
	public ref class removerSaida : public System::Windows::Forms::Form
	{
	public:
		String ^ aux1;
		String^ aux2;
	public:
		removerSaida(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		removerSaida(String^ str1, String^ str2)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~removerSaida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  numbox;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^  databox;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::Button^  Cancel_BT;

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
			this->numbox = (gcnew System::Windows::Forms::TextBox());
			this->databox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// numbox
			// 
			this->numbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->numbox->Location = System::Drawing::Point(252, 168);
			this->numbox->Name = L"numbox";
			this->numbox->Size = System::Drawing::Size(309, 22);
			this->numbox->TabIndex = 38;
			// 
			// databox
			// 
			this->databox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->databox->Location = System::Drawing::Point(252, 96);
			this->databox->Name = L"databox";
			this->databox->Size = System::Drawing::Size(309, 22);
			this->databox->TabIndex = 37;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(224, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 25);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Remoção de Saida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Num. OS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 17);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Data";
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(376, 269);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 31;
			this->Confirm_Bt->Text = L"Confirmar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &removerSaida::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(80, 269);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 30;
			this->Cancel_BT->Text = L"Cancelar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			// 
			// removerSaida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 359);
			this->Controls->Add(this->numbox);
			this->Controls->Add(this->databox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Name = L"removerSaida";
			this->Text = L"removerSaida";
			this->Load += gcnew System::EventHandler(this, &removerSaida::removerSaida_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void removerSaida_Load(System::Object^  sender, System::EventArgs^  e) {
		this->databox->Text = aux1;
		this->numbox->Text = aux2;
		
		this->databox->ReadOnly = true;
		this->numbox->ReadOnly = true;
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		saidaDAO * aux = new saidaDAO();

		string data = msclr::interop::marshal_as<std::string>(this->databox->Text);
		string num = msclr::interop::marshal_as<std::string>(this->numbox->Text);
		aux->deletarSaidaDAO(data, std::stoi(num, nullptr, 10));
		this->Close();
	}

};
}
