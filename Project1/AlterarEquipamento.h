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
	/// Summary for AlterarEquipamento
	/// </summary>
	public ref class AlterarEquipamento : public System::Windows::Forms::Form
	{
	public:
		String ^ aux1;
		String^ aux2;
		String^ aux3;

	public:
		AlterarEquipamento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AlterarEquipamento(String^ str1, String^ str2, String^ str3)
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
		~AlterarEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tipobox;
	protected:

	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::Button^  cancel_equpt_bt;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  custoboxold;

	private: System::Windows::Forms::TextBox^  idbox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  custobox;




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
			this->tipobox = (gcnew System::Windows::Forms::TextBox());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->cancel_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->custoboxold = (gcnew System::Windows::Forms::TextBox());
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->custobox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(189, 25);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Equipamento";
			// 
			// tipobox
			// 
			this->tipobox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tipobox->Location = System::Drawing::Point(235, 94);
			this->tipobox->Margin = System::Windows::Forms::Padding(4);
			this->tipobox->Name = L"tipobox";
			this->tipobox->Size = System::Drawing::Size(285, 22);
			this->tipobox->TabIndex = 26;
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(332, 418);
			this->conf_creat_equipt_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 25;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &AlterarEquipamento::conf_creat_equipt_bt_Click);
			// 
			// cancel_equpt_bt
			// 
			this->cancel_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_equpt_bt->Location = System::Drawing::Point(91, 418);
			this->cancel_equpt_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_equpt_bt->Name = L"cancel_equpt_bt";
			this->cancel_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_equpt_bt->TabIndex = 24;
			this->cancel_equpt_bt->Text = L"Cancelar";
			this->cancel_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_equpt_bt->Click += gcnew System::EventHandler(this, &AlterarEquipamento::cancel_equpt_bt_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Custo/Hora de Uso [Anterior]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Identificador";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 17);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Tipo de Equipamento";
			// 
			// custoboxold
			// 
			this->custoboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custoboxold->Location = System::Drawing::Point(235, 250);
			this->custoboxold->Margin = System::Windows::Forms::Padding(4);
			this->custoboxold->Name = L"custoboxold";
			this->custoboxold->Size = System::Drawing::Size(285, 22);
			this->custoboxold->TabIndex = 18;
			// 
			// idbox
			// 
			this->idbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idbox->Location = System::Drawing::Point(235, 167);
			this->idbox->Margin = System::Windows::Forms::Padding(4);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(285, 22);
			this->idbox->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Custo/Hora de Uso [Novo]";
			// 
			// custobox
			// 
			this->custobox->Location = System::Drawing::Point(235, 324);
			this->custobox->Margin = System::Windows::Forms::Padding(4);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(285, 22);
			this->custobox->TabIndex = 28;
			// 
			// AlterarEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(571, 492);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->custobox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tipobox);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_equpt_bt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->custoboxold);
			this->Controls->Add(this->idbox);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AlterarEquipamento";
			this->Text = L"AlterarEquipamento";
			this->Load += gcnew System::EventHandler(this, &AlterarEquipamento::AlterarEquipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void AlterarEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
		this->idbox->Text = aux2;
		this->tipobox->Text = aux1;
		this->custoboxold->Text = aux3;
		this->idbox->ReadOnly = true;
		this->tipobox->ReadOnly = true;
		this->custoboxold->ReadOnly = true;

	}
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void cancel_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	equipamentoDAO * aux = new equipamentoDAO();
	string id = msclr::interop::marshal_as<std::string>(this->idbox->Text);
	string novoCusto = msclr::interop::marshal_as<std::string>(this->custobox->Text);
	aux->alterarEquipamentoDAO(std::stoi(id, nullptr, 10), std::stoi(novoCusto, nullptr, 10));
	this->Close();
}
};
}
