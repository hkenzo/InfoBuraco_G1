#include "equipeDAO.h"
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
	/// Summary for alterarEquipe
	/// </summary>
	public ref class alterarEquipe : public System::Windows::Forms::Form
	{
	public:
		String ^ aux1;
		String^ aux2;
		String^ aux3;

	public:
		alterarEquipe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		alterarEquipe(String^ str1, String^ str2, String^ str3)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
			aux3 = str3;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~alterarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  idbox;
	protected:

	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  Identificação;
	private: System::Windows::Forms::TextBox^  numboxold;




	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  numbox;
	private: System::Windows::Forms::TextBox^  custobox;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  custoboxold;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Identificação = (gcnew System::Windows::Forms::Label());
			this->numboxold = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numbox = (gcnew System::Windows::Forms::TextBox());
			this->custobox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->custoboxold = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(149, 24);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 20);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Equipe";
			// 
			// idbox
			// 
			this->idbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idbox->Location = System::Drawing::Point(176, 84);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(215, 20);
			this->idbox->TabIndex = 26;
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(249, 340);
			this->conf_creat_equipt_bt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(128, 29);
			this->conf_creat_equipt_bt->TabIndex = 25;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &alterarEquipe::conf_creat_equipt_bt_Click);
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(68, 340);
			this->cancel_create_equpt_bt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(128, 29);
			this->cancel_create_equpt_bt->TabIndex = 24;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &alterarEquipe::cancel_create_equpt_bt_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 236);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"R$ / hora [Anterior]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 140);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Nº de Profissionais [Anterior]";
			// 
			// Identificação
			// 
			this->Identificação->AutoSize = true;
			this->Identificação->Location = System::Drawing::Point(28, 86);
			this->Identificação->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Identificação->Name = L"Identificação";
			this->Identificação->Size = System::Drawing::Size(68, 13);
			this->Identificação->TabIndex = 19;
			this->Identificação->Text = L"Identificação";
			// 
			// numboxold
			// 
			this->numboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->numboxold->Location = System::Drawing::Point(176, 137);
			this->numboxold->Name = L"numboxold";
			this->numboxold->Size = System::Drawing::Size(215, 20);
			this->numboxold->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 190);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 13);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Nº de Profissionais [Novo]";
			// 
			// numbox
			// 
			this->numbox->Location = System::Drawing::Point(176, 188);
			this->numbox->Name = L"numbox";
			this->numbox->Size = System::Drawing::Size(215, 20);
			this->numbox->TabIndex = 28;
			// 
			// custobox
			// 
			this->custobox->Location = System::Drawing::Point(176, 285);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(215, 20);
			this->custobox->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 285);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 30;
			this->label7->Text = L"R$ / hora [Nova]";
			// 
			// custoboxold
			// 
			this->custoboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custoboxold->Location = System::Drawing::Point(176, 236);
			this->custoboxold->Name = L"custoboxold";
			this->custoboxold->Size = System::Drawing::Size(215, 20);
			this->custoboxold->TabIndex = 23;
			// 
			// alterarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(428, 400);
			this->Controls->Add(this->custobox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->numbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->idbox);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->custoboxold);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Identificação);
			this->Controls->Add(this->numboxold);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"alterarEquipe";
			this->Text = L"alterarEquipe";
			this->Load += gcnew System::EventHandler(this, &alterarEquipe::alterarEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void alterarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
		this->idbox->Text = aux1;
		this->numboxold->Text = aux2;
		this->custoboxold->Text = aux3;
		this->idbox->ReadOnly = true;
		this->numboxold->ReadOnly = true;
		this->custoboxold->ReadOnly = true;
	}


	private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		equipeDAO * aux = new equipeDAO();
		string id = msclr::interop::marshal_as<std::string>(this->idbox->Text);
		string novoNum = msclr::interop::marshal_as<std::string>(this->numbox->Text);
		string novoCusto = msclr::interop::marshal_as<std::string>(this->custobox->Text);
		aux->editarEquipeDAO(std::stoi(id, nullptr, 10), std::stoi(novoNum, nullptr, 10), std::stoi(novoCusto, nullptr, 10));
		this->Close();
	}





};
}