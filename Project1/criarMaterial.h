//#include "gerenciarMaterial.h"
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
	/// Summary for criarMaterial
	/// </summary>
	public ref class criarMaterial : public System::Windows::Forms::Form
	{
	public:
		criarMaterial(void)
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
		~criarMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textUnidade;
	private: System::Windows::Forms::TextBox^  textPreco;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::TextBox^  textTipo;

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
			this->textUnidade = (gcnew System::Windows::Forms::TextBox());
			this->textPreco = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->textTipo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textUnidade
			// 
			this->textUnidade->Location = System::Drawing::Point(226, 187);
			this->textUnidade->Margin = System::Windows::Forms::Padding(4);
			this->textUnidade->Name = L"textUnidade";
			this->textUnidade->Size = System::Drawing::Size(285, 22);
			this->textUnidade->TabIndex = 5;
			// 
			// textPreco
			// 
			this->textPreco->Location = System::Drawing::Point(226, 253);
			this->textPreco->Margin = System::Windows::Forms::Padding(4);
			this->textPreco->Name = L"textPreco";
			this->textPreco->Size = System::Drawing::Size(285, 22);
			this->textPreco->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Tipo";
			this->label1->Click += gcnew System::EventHandler(this, &criarMaterial::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Unidade de Medida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"preço / unidade de medida";
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(66, 380);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 13;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &criarMaterial::cancel_create_equpt_bt_Click);
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(297, 380);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 14;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &criarMaterial::conf_creat_equipt_bt_Click);
			// 
			// textTipo
			// 
			this->textTipo->Location = System::Drawing::Point(226, 122);
			this->textTipo->Margin = System::Windows::Forms::Padding(4);
			this->textTipo->Name = L"textTipo";
			this->textTipo->Size = System::Drawing::Size(285, 22);
			this->textTipo->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(165, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Cadastro de Material";
			// 
			// criarMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(580, 458);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textTipo);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textPreco);
			this->Controls->Add(this->textUnidade);
			this->Name = L"criarMaterial";
			this->Text = L"criarMaterial";
			this->Load += gcnew System::EventHandler(this, &criarMaterial::criarMaterial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void criarMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		materialDAO * material = new materialDAO();

		string tipo = msclr::interop::marshal_as<std::string>(this->textTipo->Text);
		string uni = msclr::interop::marshal_as<std::string>(this->textUnidade->Text);
		string preco = msclr::interop::marshal_as<std::string>(this->textPreco->Text);

		material->criarMaterialDAO(tipo, uni, std::stoi(preco, nullptr, 10));
		this->Close();
	}
};
}
