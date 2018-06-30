#pragma once

#include <iostream>
#include "criarEquipe.h"
#include "saidaEquipamento.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for saidaEquipe
	/// </summary>
	public ref class saidaEquipe : public System::Windows::Forms::Form
	{
	public:
		saidaEquipe(void)
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
		~saidaEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected:

	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::Button^  Cancel_BT;
	private: System::Windows::Forms::Button^  create_BT;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->create_BT = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(236, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Seleção de Equipe";
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(733, 210);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 28;
			this->Confirm_Bt->Text = L"Próximo";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &saidaEquipe::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(733, 321);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 27;
			this->Cancel_BT->Text = L"Voltar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &saidaEquipe::Cancel_BT_Click);
			// 
			// create_BT
			// 
			this->create_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_BT->Location = System::Drawing::Point(733, 97);
			this->create_BT->Name = L"create_BT";
			this->create_BT->Size = System::Drawing::Size(180, 49);
			this->create_BT->TabIndex = 29;
			this->create_BT->Text = L"Criar Equipe";
			this->create_BT->UseVisualStyleBackColor = false;
			this->create_BT->Click += gcnew System::EventHandler(this, &saidaEquipe::create_BT_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(16, 67);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(666, 385);
			this->listView1->TabIndex = 30;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &saidaEquipe::checked);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id.";
			this->columnHeader1->Width = 61;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"num. profissionais";
			this->columnHeader2->Width = 128;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"custo/Hora/Equipe";
			this->columnHeader3->Width = 178;
			// 
			// saidaEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 468);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->create_BT);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Controls->Add(this->label6);
			this->Name = L"saidaEquipe";
			this->Text = L"saidaEquipe";
			this->Load += gcnew System::EventHandler(this, &saidaEquipe::saidaEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		saidaEquipamento^ next = gcnew saidaEquipamento();
		next->ShowDialog();
	}
	private: System::Void create_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		criarEquipe^ cria = gcnew criarEquipe();
		cria->ShowDialog();
	}
	private: System::Void saidaEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
}
};
}
