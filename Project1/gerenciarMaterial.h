#pragma once
#include <iostream>
#include "criarMaterial.h"
#include "removerMaterial.h"
#include "alterarMaterial.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarMaterial
	/// </summary>
	public ref class gerenciarMaterial : public System::Windows::Forms::Form
	{
	public:
		gerenciarMaterial(void)
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
		~gerenciarMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  create_Material_bt;
	private: System::Windows::Forms::Button^  remove_Material_bt;

	protected:


	private: System::Windows::Forms::Button^  change_Material_bt;


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
			this->create_Material_bt = (gcnew System::Windows::Forms::Button());
			this->remove_Material_bt = (gcnew System::Windows::Forms::Button());
			this->change_Material_bt = (gcnew System::Windows::Forms::Button());
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
			// create_Material_bt
			// 
			this->create_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_Material_bt->Location = System::Drawing::Point(558, 55);
			this->create_Material_bt->Name = L"create_Material_bt";
			this->create_Material_bt->Size = System::Drawing::Size(180, 49);
			this->create_Material_bt->TabIndex = 1;
			this->create_Material_bt->Text = L"Criar Material";
			this->create_Material_bt->UseVisualStyleBackColor = false;
			this->create_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::create_equipt_bt_Click);
			// 
			// remove_Material_bt
			// 
			this->remove_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_Material_bt->Location = System::Drawing::Point(558, 232);
			this->remove_Material_bt->Name = L"remove_Material_bt";
			this->remove_Material_bt->Size = System::Drawing::Size(180, 49);
			this->remove_Material_bt->TabIndex = 2;
			this->remove_Material_bt->Text = L"Remover Material";
			this->remove_Material_bt->UseVisualStyleBackColor = false;
			this->remove_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::remove_equipt_bt_Click);
			// 
			// change_Material_bt
			// 
			this->change_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_Material_bt->Location = System::Drawing::Point(558, 143);
			this->change_Material_bt->Name = L"change_Material_bt";
			this->change_Material_bt->Size = System::Drawing::Size(180, 49);
			this->change_Material_bt->TabIndex = 3;
			this->change_Material_bt->Text = L"Alterar Material";
			this->change_Material_bt->UseVisualStyleBackColor = false;
			this->change_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::change_equipt_bt_Click);
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
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::voltar_equipt_bt_Click);
			// 
			// gerenciarMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(782, 500);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_Material_bt);
			this->Controls->Add(this->remove_Material_bt);
			this->Controls->Add(this->create_Material_bt);
			this->Controls->Add(this->listBox1);
			this->Name = L"gerenciarMaterial";
			this->Text = L"gerenciarMaterial";
			this->Load += gcnew System::EventHandler(this, &gerenciarMaterial::gerenciarMaterial_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarMaterial^ cria = gcnew criarMaterial();
		cria->ShowDialog();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		alterarMaterial^ altera = gcnew alterarMaterial();
		altera->ShowDialog();
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		removerMaterial^ remove = gcnew removerMaterial();
		remove->ShowDialog();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
