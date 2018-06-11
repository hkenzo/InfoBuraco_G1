#include "ServicoComunicacao2.h"
#include "buraco.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ServicoComunicacao1
	/// </summary>
	public ref class ServicoComunicacao1 : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacao1(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~ServicoComunicacao1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	protected:

	private: System::Windows::Forms::Button^  AdicionarFoto;
	private: System::Windows::Forms::TextBox^  posicao_leito_text;
	private: System::Windows::Forms::TextBox^  tamanho_text;
	private: System::Windows::Forms::TextBox^  regional_text;
	private: System::Windows::Forms::TextBox^  numero_text;
	private: System::Windows::Forms::TextBox^  Nome_da_rua_text;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  hora_contato_text;
	private: System::Windows::Forms::TextBox^  data_contato_text;
	private: System::Windows::Forms::TextBox^  nome_cidadao_text;
	private: System::Windows::Forms::TextBox^  comunicacao_text;
	private: System::Windows::Forms::TextBox^  tipo_comunicacao_text;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  CancelaReg;

	private: System::Windows::Forms::Button^  FinalizarRegistro;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AdicionarFoto = (gcnew System::Windows::Forms::Button());
			this->posicao_leito_text = (gcnew System::Windows::Forms::TextBox());
			this->tamanho_text = (gcnew System::Windows::Forms::TextBox());
			this->regional_text = (gcnew System::Windows::Forms::TextBox());
			this->numero_text = (gcnew System::Windows::Forms::TextBox());
			this->Nome_da_rua_text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->hora_contato_text = (gcnew System::Windows::Forms::TextBox());
			this->data_contato_text = (gcnew System::Windows::Forms::TextBox());
			this->nome_cidadao_text = (gcnew System::Windows::Forms::TextBox());
			this->comunicacao_text = (gcnew System::Windows::Forms::TextBox());
			this->tipo_comunicacao_text = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CancelaReg = (gcnew System::Windows::Forms::Button());
			this->FinalizarRegistro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(85, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 20);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Dados do buraco";
			// 
			// AdicionarFoto
			// 
			this->AdicionarFoto->Location = System::Drawing::Point(168, 187);
			this->AdicionarFoto->Name = L"AdicionarFoto";
			this->AdicionarFoto->Size = System::Drawing::Size(100, 23);
			this->AdicionarFoto->TabIndex = 38;
			this->AdicionarFoto->Text = L"Adicionar foto";
			this->AdicionarFoto->UseVisualStyleBackColor = true;
			// 
			// posicao_leito_text
			// 
			this->posicao_leito_text->Location = System::Drawing::Point(168, 109);
			this->posicao_leito_text->Name = L"posicao_leito_text";
			this->posicao_leito_text->Size = System::Drawing::Size(100, 20);
			this->posicao_leito_text->TabIndex = 37;
			this->posicao_leito_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::posicao_leito_text_TextChanged);
			// 
			// tamanho_text
			// 
			this->tamanho_text->Location = System::Drawing::Point(168, 135);
			this->tamanho_text->Name = L"tamanho_text";
			this->tamanho_text->Size = System::Drawing::Size(100, 20);
			this->tamanho_text->TabIndex = 36;
			this->tamanho_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::tamanho_text_TextChanged);
			// 
			// regional_text
			// 
			this->regional_text->Location = System::Drawing::Point(168, 161);
			this->regional_text->Name = L"regional_text";
			this->regional_text->Size = System::Drawing::Size(100, 20);
			this->regional_text->TabIndex = 35;
			this->regional_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::regional_text_TextChanged);
			// 
			// numero_text
			// 
			this->numero_text->Location = System::Drawing::Point(168, 83);
			this->numero_text->Name = L"numero_text";
			this->numero_text->Size = System::Drawing::Size(100, 20);
			this->numero_text->TabIndex = 34;
			this->numero_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::numero_text_TextChanged);
			// 
			// Nome_da_rua_text
			// 
			this->Nome_da_rua_text->Location = System::Drawing::Point(168, 59);
			this->Nome_da_rua_text->Name = L"Nome_da_rua_text";
			this->Nome_da_rua_text->Size = System::Drawing::Size(100, 20);
			this->Nome_da_rua_text->TabIndex = 33;
			this->Nome_da_rua_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::Nome_da_rua_text_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Regional";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 138);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Tamanho";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 112);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Posicao no leito carrocavel";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Numero";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 62);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Nome da rua";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Hora de Contato";
			// 
			// hora_contato_text
			// 
			this->hora_contato_text->Location = System::Drawing::Point(168, 368);
			this->hora_contato_text->Name = L"hora_contato_text";
			this->hora_contato_text->Size = System::Drawing::Size(100, 20);
			this->hora_contato_text->TabIndex = 49;
			this->hora_contato_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::hora_contato_text_TextChanged);
			// 
			// data_contato_text
			// 
			this->data_contato_text->Location = System::Drawing::Point(168, 342);
			this->data_contato_text->Name = L"data_contato_text";
			this->data_contato_text->Size = System::Drawing::Size(100, 20);
			this->data_contato_text->TabIndex = 48;
			this->data_contato_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::data_contato_text_TextChanged);
			// 
			// nome_cidadao_text
			// 
			this->nome_cidadao_text->Location = System::Drawing::Point(168, 316);
			this->nome_cidadao_text->Name = L"nome_cidadao_text";
			this->nome_cidadao_text->Size = System::Drawing::Size(100, 20);
			this->nome_cidadao_text->TabIndex = 47;
			this->nome_cidadao_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::nome_cidadao_text_TextChanged);
			// 
			// comunicacao_text
			// 
			this->comunicacao_text->Location = System::Drawing::Point(168, 290);
			this->comunicacao_text->Name = L"comunicacao_text";
			this->comunicacao_text->Size = System::Drawing::Size(100, 20);
			this->comunicacao_text->TabIndex = 46;
			this->comunicacao_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::comunicacao_text_TextChanged);
			// 
			// tipo_comunicacao_text
			// 
			this->tipo_comunicacao_text->Location = System::Drawing::Point(168, 264);
			this->tipo_comunicacao_text->Name = L"tipo_comunicacao_text";
			this->tipo_comunicacao_text->Size = System::Drawing::Size(100, 20);
			this->tipo_comunicacao_text->TabIndex = 45;
			this->tipo_comunicacao_text->TextChanged += gcnew System::EventHandler(this, &ServicoComunicacao1::tipo_comunicacao_text_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Data de contato";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Comunicacao";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Nome do cidadao";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 267);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Tipo de Comunicacao";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(78, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 20);
			this->label6->TabIndex = 51;
			this->label6->Text = L"Dados do cidadao";
			// 
			// CancelaReg
			// 
			this->CancelaReg->Location = System::Drawing::Point(49, 410);
			this->CancelaReg->Name = L"CancelaReg";
			this->CancelaReg->Size = System::Drawing::Size(75, 23);
			this->CancelaReg->TabIndex = 53;
			this->CancelaReg->Text = L"Cancelar";
			this->CancelaReg->UseVisualStyleBackColor = true;
			this->CancelaReg->Click += gcnew System::EventHandler(this, &ServicoComunicacao1::CancelaReg_Click);
			// 
			// FinalizarRegistro
			// 
			this->FinalizarRegistro->Location = System::Drawing::Point(168, 410);
			this->FinalizarRegistro->Name = L"FinalizarRegistro";
			this->FinalizarRegistro->Size = System::Drawing::Size(75, 23);
			this->FinalizarRegistro->TabIndex = 52;
			this->FinalizarRegistro->Text = L"Finalizar";
			this->FinalizarRegistro->UseVisualStyleBackColor = true;
			this->FinalizarRegistro->Click += gcnew System::EventHandler(this, &ServicoComunicacao1::FinalizarRegistro_Click);
			// 
			// ServicoComunicacao1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 445);
			this->Controls->Add(this->CancelaReg);
			this->Controls->Add(this->FinalizarRegistro);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->hora_contato_text);
			this->Controls->Add(this->data_contato_text);
			this->Controls->Add(this->nome_cidadao_text);
			this->Controls->Add(this->comunicacao_text);
			this->Controls->Add(this->tipo_comunicacao_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->AdicionarFoto);
			this->Controls->Add(this->posicao_leito_text);
			this->Controls->Add(this->tamanho_text);
			this->Controls->Add(this->regional_text);
			this->Controls->Add(this->numero_text);
			this->Controls->Add(this->Nome_da_rua_text);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Name = L"ServicoComunicacao1";
			this->Text = L"ServicoComunicacao1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProximoCidadao_Click(System::Object^  sender, System::EventArgs^  e) {
		
		ServicoComunicacao2 ^ telaNotificacaoCid = gcnew ServicoComunicacao2();
		telaNotificacaoCid->ShowDialog();
		this->Close();
	}
private: System::Void Nome_da_rua_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numero_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void posicao_leito_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tamanho_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void regional_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void FinalizarRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
	string nomRua0 = msclr::interop::marshal_as<std::string>(this->Nome_da_rua_text->Text);
	string numRua0 = msclr::interop::marshal_as<std::string>(this->numero_text->Text);
	string posRua0 = msclr::interop::marshal_as<std::string>(this->posicao_leito_text->Text);
	string tamanho0 = msclr::interop::marshal_as<std::string>(this->tamanho_text->Text);
	string regional0 = msclr::interop::marshal_as<std::string>(this->regional_text->Text);

	string tipoCom0 = msclr::interop::marshal_as<std::string>(this->tipo_comunicacao_text->Text);
	string Com0 = msclr::interop::marshal_as<std::string>(this->comunicacao_text->Text);
	string nomCid0 = msclr::interop::marshal_as<std::string>(this->nome_cidadao_text->Text);
	string dataCont0 = msclr::interop::marshal_as<std::string>(this->data_contato_text->Text);
	string horaCont0 = msclr::interop::marshal_as<std::string>(this->hora_contato_text->Text);
	
	buraco *bur = new buraco;
	bur->setBuraco(nomRua0, std::stoi(numRua0, nullptr, 10), posRua0, std::stoi(tamanho0, nullptr, 10), regional0, tipoCom0, Com0, nomCid0, dataCont0, horaCont0);

	ServicoComunicacao2_Pronto ^ telaNotificacaoFim = gcnew ServicoComunicacao2_Pronto();
	telaNotificacaoFim->ShowDialog();

	this->Close();
}
private: System::Void CancelaReg_Click(System::Object^  sender, System::EventArgs^  e) {
	
	this->Close();
}
private: System::Void tipo_comunicacao_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comunicacao_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void nome_cidadao_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void data_contato_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void hora_contato_text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
