#pragma once

#include "CriarEquipamento.h"
#include "saidaMaterial.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for saidaEquipamento
	/// </summary>
	public ref class saidaEquipamento : public System::Windows::Forms::Form
	{
	public:
		saidaEquipamento(void)
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
		~saidaEquipamento()
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
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  Add_BT;
	private: System::Windows::Forms::Button^  remove_BT;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Add_BT = (gcnew System::Windows::Forms::Button());
			this->remove_BT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(391, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Seleção de Equipamento";
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(748, 293);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 28;
			this->Confirm_Bt->Text = L"Próximo";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &saidaEquipamento::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(748, 404);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 27;
			this->Cancel_BT->Text = L"Voltar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::Cancel_BT_Click);
			// 
			// create_BT
			// 
			this->create_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_BT->Location = System::Drawing::Point(748, 180);
			this->create_BT->Name = L"create_BT";
			this->create_BT->Size = System::Drawing::Size(180, 49);
			this->create_BT->TabIndex = 29;
			this->create_BT->Text = L"Criar Equipamento";
			this->create_BT->UseVisualStyleBackColor = false;
			this->create_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::create_BT_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(21, 97);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(332, 436);
			this->listBox1->TabIndex = 30;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(381, 97);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(332, 436);
			this->listBox2->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Equipamentos disponíveis";
			this->label1->Click += gcnew System::EventHandler(this, &saidaEquipamento::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(445, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(209, 20);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Equipamentos adicionados";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 552);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Quantidade";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 575);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 22);
			this->textBox1->TabIndex = 35;
			// 
			// Add_BT
			// 
			this->Add_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Add_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_BT->Location = System::Drawing::Point(234, 553);
			this->Add_BT->Name = L"Add_BT";
			this->Add_BT->Size = System::Drawing::Size(119, 45);
			this->Add_BT->TabIndex = 36;
			this->Add_BT->Text = L"Adicionar";
			this->Add_BT->UseVisualStyleBackColor = false;
			this->Add_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::Add_BT_Click);
			// 
			// remove_BT
			// 
			this->remove_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_BT->Location = System::Drawing::Point(381, 553);
			this->remove_BT->Name = L"remove_BT";
			this->remove_BT->Size = System::Drawing::Size(118, 44);
			this->remove_BT->TabIndex = 37;
			this->remove_BT->Text = L"Remover";
			this->remove_BT->UseVisualStyleBackColor = false;
			this->remove_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::remove_BT_Click);
			// 
			// saidaEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 647);
			this->Controls->Add(this->remove_BT);
			this->Controls->Add(this->Add_BT);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->create_BT);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Controls->Add(this->label6);
			this->Name = L"saidaEquipamento";
			this->Text = L"saidaEquipamento";
			this->Load += gcnew System::EventHandler(this, &saidaEquipamento::saidaEquipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		//saidaEquipe^ cria = gcnew saidaEquipe();
		this->Close();
		//cria->ShowDialog();
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		//saidaMaterial^ next = gcnew saidaMaterial();
		//next->ShowDialog();
	}
	private: System::Void create_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		//CriarEquipamento^ cria = gcnew CriarEquipamento();
		//this->Close();
		//cria->ShowDialog();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Add_BT_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void remove_BT_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saidaEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
