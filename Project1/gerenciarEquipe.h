#pragma once
#include <iostream>
#include "criarEquipe.h"
#include "removerEquipe.h"
#include "alterarEquipe.h"
#include <string>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarEquipe
	/// </summary>
	public ref class gerenciarEquipe : public System::Windows::Forms::Form
	{
	public:
		gerenciarEquipe(void)
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
		~gerenciarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  create_equipe_bt;
	private: System::Windows::Forms::Button^  remove_equipe_bt;

	protected:


	private: System::Windows::Forms::Button^  change_equipe_bt;


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
			this->create_equipe_bt = (gcnew System::Windows::Forms::Button());
			this->remove_equipe_bt = (gcnew System::Windows::Forms::Button());
			this->change_equipe_bt = (gcnew System::Windows::Forms::Button());
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
			// create_equipe_bt
			// 
			this->create_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_equipe_bt->Location = System::Drawing::Point(558, 55);
			this->create_equipe_bt->Name = L"create_equipe_bt";
			this->create_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->create_equipe_bt->TabIndex = 1;
			this->create_equipe_bt->Text = L"Criar Equipe";
			this->create_equipe_bt->UseVisualStyleBackColor = false;
			this->create_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::create_equipt_bt_Click);
			// 
			// remove_equipe_bt
			// 
			this->remove_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_equipe_bt->Location = System::Drawing::Point(558, 232);
			this->remove_equipe_bt->Name = L"remove_equipe_bt";
			this->remove_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->remove_equipe_bt->TabIndex = 2;
			this->remove_equipe_bt->Text = L"Remover Equipe";
			this->remove_equipe_bt->UseVisualStyleBackColor = false;
			this->remove_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::remove_equipt_bt_Click);
			// 
			// change_equipe_bt
			// 
			this->change_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_equipe_bt->Location = System::Drawing::Point(558, 143);
			this->change_equipe_bt->Name = L"change_equipe_bt";
			this->change_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->change_equipe_bt->TabIndex = 3;
			this->change_equipe_bt->Text = L"Alterar Equipe";
			this->change_equipe_bt->UseVisualStyleBackColor = false;
			this->change_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::change_equipt_bt_Click);
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
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::voltar_equipt_bt_Click);
			// 
			// gerenciarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(782, 500);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_equipe_bt);
			this->Controls->Add(this->remove_equipe_bt);
			this->Controls->Add(this->create_equipe_bt);
			this->Controls->Add(this->listBox1);
			this->Name = L"gerenciarEquipe";
			this->Text = L"gerenciarEquipe";
			this->Load += gcnew System::EventHandler(this, &gerenciarEquipe::gerenciarEquipe_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarEquipe^ cria = gcnew criarEquipe();
		cria->ShowDialog();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		alterarEquipe^ altera = gcnew alterarEquipe();
		altera->ShowDialog();
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		removerEquipe^ remove = gcnew removerEquipe();
		remove->ShowDialog();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
