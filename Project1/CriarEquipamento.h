#include "equipamentoDAO.h"
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
	/// Summary for CriarEquipamento
	/// </summary>
	public ref class CriarEquipamento : public System::Windows::Forms::Form
	{
	public:
		CriarEquipamento(void)
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
		~CriarEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  custobox;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::TextBox^  tipobox;

	private: System::Windows::Forms::Label^  label5;

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
			this->custobox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->tipobox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// custobox
			// 
			this->custobox->Location = System::Drawing::Point(149, 140);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(215, 20);
			this->custobox->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 68);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Tipo de Equipamento";
			this->label1->Click += gcnew System::EventHandler(this, &CriarEquipamento::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 142);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Custo/Hora de Uso";
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(50, 309);
			this->cancel_create_equpt_bt->Margin = System::Windows::Forms::Padding(2);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(128, 29);
			this->cancel_create_equpt_bt->TabIndex = 13;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &CriarEquipamento::cancel_create_equpt_bt_Click);
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(223, 309);
			this->conf_creat_equipt_bt->Margin = System::Windows::Forms::Padding(2);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(128, 29);
			this->conf_creat_equipt_bt->TabIndex = 14;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &CriarEquipamento::conf_creat_equipt_bt_Click);
			// 
			// tipobox
			// 
			this->tipobox->Location = System::Drawing::Point(149, 66);
			this->tipobox->Name = L"tipobox";
			this->tipobox->Size = System::Drawing::Size(215, 20);
			this->tipobox->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(124, 24);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Cadastro de Equipamento";
			// 
			// CriarEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(410, 372);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tipobox);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->custobox);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CriarEquipamento";
			this->Text = L"CriarEquipamento";
			this->Load += gcnew System::EventHandler(this, &CriarEquipamento::CriarEquipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void CriarEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		equipamentoDAO * temp = new equipamentoDAO();

		string tipo = msclr::interop::marshal_as<std::string>(this->tipobox->Text);
		string custo = msclr::interop::marshal_as<std::string>(this->custobox->Text);

		temp->criarEquipamentoDAO(tipo, std::stoi(custo, nullptr, 10));
		this->Close();
	}
};
}
