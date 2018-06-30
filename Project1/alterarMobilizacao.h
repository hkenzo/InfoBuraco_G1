#include "mobilizacao.h"
#include "mobilizacaoDAO.h"
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
	/// Summary for alterarMobilizacao
	/// </summary>
	public ref class alterarMobilizacao : public System::Windows::Forms::Form
	{
	public:
		String ^ aux1;
	private: System::Windows::Forms::Label^  label1;
	public:
	private: System::Windows::Forms::TextBox^  idbox;
			 String^ aux2;
	public:
		alterarMobilizacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		alterarMobilizacao(String^ str1, String^ str2)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~alterarMobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	protected:

	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  custoboxold;




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
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->custoboxold = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->custobox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 25);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Mobilização";
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(353, 294);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 25;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &alterarMobilizacao::conf_creat_equipt_bt_Click);
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(112, 294);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 24;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &alterarMobilizacao::cancel_create_equpt_bt_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Custo por Km [Anterior]";
			// 
			// custoboxold
			// 
			this->custoboxold->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custoboxold->Location = System::Drawing::Point(274, 175);
			this->custoboxold->Margin = System::Windows::Forms::Padding(4);
			this->custoboxold->Name = L"custoboxold";
			this->custoboxold->Size = System::Drawing::Size(285, 22);
			this->custoboxold->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(63, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Custo por Km [Novo]";
			// 
			// custobox
			// 
			this->custobox->Location = System::Drawing::Point(274, 237);
			this->custobox->Margin = System::Windows::Forms::Padding(4);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(285, 22);
			this->custobox->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Sequencial";
			// 
			// idbox
			// 
			this->idbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idbox->Location = System::Drawing::Point(274, 109);
			this->idbox->Margin = System::Windows::Forms::Padding(4);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(285, 22);
			this->idbox->TabIndex = 30;
			// 
			// alterarMobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(668, 367);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->idbox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->custobox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->custoboxold);
			this->Name = L"alterarMobilizacao";
			this->Text = L"alterarMobilizacao";
			this->Load += gcnew System::EventHandler(this, &alterarMobilizacao::alterarMobilizacao_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void alterarMobilizacao_Load(System::Object^  sender, System::EventArgs^  e) {
		this->idbox->Text = aux2;
		this->custoboxold->Text = aux1;
		this->idbox->ReadOnly = true;
		this->custoboxold->ReadOnly = true;

	}
	private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		mobilizacaoDAO * aux = new mobilizacaoDAO();
		string id = msclr::interop::marshal_as<std::string>(this->idbox->Text);
		string novoCusto = msclr::interop::marshal_as<std::string>(this->custobox->Text);
		aux->alterarMobilizacaoDAO(std::stoi(novoCusto, nullptr, 10), std::stoi(id, nullptr, 10));
		this->Close();
	}
};
}
