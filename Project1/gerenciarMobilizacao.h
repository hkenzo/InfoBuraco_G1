#pragma once
#include <iostream>
#include "criarMobilizacao.h"
#include "removerMobilizacao.h"
#include "alterarMobilizacao.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarMobilizacao
	/// </summary>
	public ref class gerenciarMobilizacao : public System::Windows::Forms::Form
	{
	public:
		gerenciarMobilizacao(void)
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
		~gerenciarMobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  create_Mobilizacao_bt;
	private: System::Windows::Forms::Button^  remove_Mobilizacao_bt;

	protected:


	private: System::Windows::Forms::Button^  change_Mobilizacao_bt;


	private: System::Windows::Forms::Button^  voltar_equipt_bt;



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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->create_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->remove_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->change_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(29, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(495, 436);
			this->listBox1->TabIndex = 0;
			// 
			// create_Mobilizacao_bt
			// 
			this->create_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_Mobilizacao_bt->Location = System::Drawing::Point(558, 55);
			this->create_Mobilizacao_bt->Name = L"create_Mobilizacao_bt";
			this->create_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->create_Mobilizacao_bt->TabIndex = 1;
			this->create_Mobilizacao_bt->Text = L"Criar Mobilização";
			this->create_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->create_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::create_equipt_bt_Click);
			// 
			// remove_Mobilizacao_bt
			// 
			this->remove_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_Mobilizacao_bt->Location = System::Drawing::Point(558, 232);
			this->remove_Mobilizacao_bt->Name = L"remove_Mobilizacao_bt";
			this->remove_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->remove_Mobilizacao_bt->TabIndex = 2;
			this->remove_Mobilizacao_bt->Text = L"Remover Mobilização";
			this->remove_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->remove_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::remove_equipt_bt_Click);
			// 
			// change_Mobilizacao_bt
			// 
			this->change_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_Mobilizacao_bt->Location = System::Drawing::Point(558, 143);
			this->change_Mobilizacao_bt->Name = L"change_Mobilizacao_bt";
			this->change_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->change_Mobilizacao_bt->TabIndex = 3;
			this->change_Mobilizacao_bt->Text = L"Alterar Mobilização";
			this->change_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->change_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::change_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(558, 323);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(180, 49);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::voltar_equipt_bt_Click);
			// 
			// gerenciarMobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(782, 500);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_Mobilizacao_bt);
			this->Controls->Add(this->remove_Mobilizacao_bt);
			this->Controls->Add(this->create_Mobilizacao_bt);
			this->Controls->Add(this->listBox1);
			this->Name = L"gerenciarMobilizacao";
			this->Text = L"gerenciarMobilizacao";
			this->Load += gcnew System::EventHandler(this, &gerenciarMobilizacao::gerenciarMobilizacao_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarMobilizacao_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarMobilizacao^ cria = gcnew criarMobilizacao();
		cria->ShowDialog();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		alterarMobilizacao^ altera = gcnew alterarMobilizacao();
		altera->ShowDialog();
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		removerMobilizacao^ remove = gcnew removerMobilizacao();
		remove->ShowDialog();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
