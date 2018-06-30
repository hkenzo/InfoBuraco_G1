#include <iostream>
#include <stdio.h>
#include "material.h"
#include "MaterialDAO.h"
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
	/// Summary for removerMaterial
	/// </summary>
	public ref class removerMaterial : public System::Windows::Forms::Form
	{
	public:
		String^ aux1;
		String^ aux2;
		String^ aux3;
	private: System::Windows::Forms::Label^  label1;
	public:
		String ^ aux4;
	
			 

	public:
		removerMaterial(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		removerMaterial(String^ str1, String^ str2, String^ str3, String^ str4)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
			aux3 = str3;
			aux4 = str4;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~removerMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Cancel_BT;
	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::TextBox^  idBox;
	protected:

	protected:






	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tipoBox;
	private: System::Windows::Forms::TextBox^  unidadeBox;
	private: System::Windows::Forms::TextBox^  custoBox;






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
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tipoBox = (gcnew System::Windows::Forms::TextBox());
			this->unidadeBox = (gcnew System::Windows::Forms::TextBox());
			this->custoBox = (gcnew System::Windows::Forms::TextBox());
			this->idBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(82, 385);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 0;
			this->Cancel_BT->Text = L"Cancelar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &removerMaterial::Cancel_BT_Click);
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(378, 385);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 1;
			this->Confirm_Bt->Text = L"Confirmar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &removerMaterial::Confirm_Bt_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 298);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"R$ / medida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Unidade de Medida";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(89, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Tipo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(208, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(196, 25);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Remoção de Material";
			this->label6->Click += gcnew System::EventHandler(this, &removerMaterial::label6_Click);
			// 
			// tipoBox
			// 
			this->tipoBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tipoBox->Location = System::Drawing::Point(272, 156);
			this->tipoBox->Name = L"tipoBox";
			this->tipoBox->Size = System::Drawing::Size(309, 22);
			this->tipoBox->TabIndex = 25;
			// 
			// unidadeBox
			// 
			this->unidadeBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->unidadeBox->Location = System::Drawing::Point(272, 223);
			this->unidadeBox->Name = L"unidadeBox";
			this->unidadeBox->Size = System::Drawing::Size(309, 22);
			this->unidadeBox->TabIndex = 26;
			// 
			// custoBox
			// 
			this->custoBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custoBox->Location = System::Drawing::Point(272, 295);
			this->custoBox->Name = L"custoBox";
			this->custoBox->Size = System::Drawing::Size(309, 22);
			this->custoBox->TabIndex = 27;
			// 
			// idBox
			// 
			this->idBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idBox->Location = System::Drawing::Point(272, 86);
			this->idBox->Name = L"idBox";
			this->idBox->Size = System::Drawing::Size(309, 22);
			this->idBox->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Sequencial";
			this->label1->Click += gcnew System::EventHandler(this, &removerMaterial::label1_Click_1);
			// 
			// removerMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(634, 474);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->idBox);
			this->Controls->Add(this->custoBox);
			this->Controls->Add(this->unidadeBox);
			this->Controls->Add(this->tipoBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Location = System::Drawing::Point(89, 86);
			this->Name = L"removerMaterial";
			this->Text = L"removerMaterial";
			this->Load += gcnew System::EventHandler(this, &removerMaterial::removerMaterial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void removerMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
		this->tipoBox->Text = aux1;
		this->unidadeBox->Text = aux2;
		this->custoBox->Text = aux3;
		this->idBox->Text = aux4;
		this->idBox->ReadOnly = true;
		this->unidadeBox->ReadOnly = true;
		this->custoBox->ReadOnly = true;
		this->tipoBox->ReadOnly = true;
	}
	
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
	materialDAO * aux = new materialDAO();

	string id = msclr::interop::marshal_as<std::string>(this->idBox->Text);
	aux->deletarMaterialDAO(std::stoi(id, nullptr, 10));
	this->Close();
	}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}
