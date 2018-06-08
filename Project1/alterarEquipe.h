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
			this->label5->Location = System::Drawing::Point(199, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Equipe";
			// 
			// idbox
			// 
			this->idbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idbox->Location = System::Drawing::Point(234, 103);
			this->idbox->Margin = System::Windows::Forms::Padding(4);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(285, 22);
			this->idbox->TabIndex = 26;
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(332, 419);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
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
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(91, 419);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 24;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &alterarEquipe::cancel_create_equpt_bt_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 22;
			this->label4->Text = L"R$ / hora [Anterior]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Nº de Profissionais [Anterior]";
			// 
			// Identificação
			// 
			this->Identificação->AutoSize = true;
			this->Identificação->Location = System::Drawing::Point(37, 106);
			this->Identificação->Name = L"Identificação";
			this->Identificação->Size = System::Drawing::Size(87, 17);
			this->Identificação->TabIndex = 19;
			this->Identificação->Text = L"Identificação";
			// 
			// numboxold
			// 
			this->numboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->numboxold->Location = System::Drawing::Point(234, 169);
			this->numboxold->Margin = System::Windows::Forms::Padding(4);
			this->numboxold->Name = L"numboxold";
			this->numboxold->Size = System::Drawing::Size(285, 22);
			this->numboxold->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Nº de Profissionais [Novo]";
			// 
			// numbox
			// 
			this->numbox->Location = System::Drawing::Point(234, 231);
			this->numbox->Margin = System::Windows::Forms::Padding(4);
			this->numbox->Name = L"numbox";
			this->numbox->Size = System::Drawing::Size(285, 22);
			this->numbox->TabIndex = 28;
			// 
			// custobox
			// 
			this->custobox->Location = System::Drawing::Point(234, 351);
			this->custobox->Margin = System::Windows::Forms::Padding(4);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(285, 22);
			this->custobox->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"R$ / hora [Nova]";
			// 
			// custoboxold
			// 
			this->custoboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custoboxold->Location = System::Drawing::Point(234, 290);
			this->custoboxold->Margin = System::Windows::Forms::Padding(4);
			this->custoboxold->Name = L"custoboxold";
			this->custoboxold->Size = System::Drawing::Size(285, 22);
			this->custoboxold->TabIndex = 23;
			// 
			// alterarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(570, 492);
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