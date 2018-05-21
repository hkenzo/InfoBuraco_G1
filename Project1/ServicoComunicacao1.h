#include "ServicoComunicacao2.h"

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
	private: System::Windows::Forms::Button^  ProximoCidadao;
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
			this->ProximoCidadao = (gcnew System::Windows::Forms::Button());
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
			// ProximoCidadao
			// 
			this->ProximoCidadao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->ProximoCidadao->Location = System::Drawing::Point(99, 216);
			this->ProximoCidadao->Name = L"ProximoCidadao";
			this->ProximoCidadao->Size = System::Drawing::Size(75, 23);
			this->ProximoCidadao->TabIndex = 39;
			this->ProximoCidadao->Text = L"Proximo";
			this->ProximoCidadao->UseVisualStyleBackColor = true;
			this->ProximoCidadao->Click += gcnew System::EventHandler(this, &ServicoComunicacao1::ProximoCidadao_Click);
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
			// 
			// tamanho_text
			// 
			this->tamanho_text->Location = System::Drawing::Point(168, 135);
			this->tamanho_text->Name = L"tamanho_text";
			this->tamanho_text->Size = System::Drawing::Size(100, 20);
			this->tamanho_text->TabIndex = 36;
			// 
			// regional_text
			// 
			this->regional_text->Location = System::Drawing::Point(168, 161);
			this->regional_text->Name = L"regional_text";
			this->regional_text->Size = System::Drawing::Size(100, 20);
			this->regional_text->TabIndex = 35;
			// 
			// numero_text
			// 
			this->numero_text->Location = System::Drawing::Point(168, 83);
			this->numero_text->Name = L"numero_text";
			this->numero_text->Size = System::Drawing::Size(100, 20);
			this->numero_text->TabIndex = 34;
			// 
			// Nome_da_rua_text
			// 
			this->Nome_da_rua_text->Location = System::Drawing::Point(168, 59);
			this->Nome_da_rua_text->Name = L"Nome_da_rua_text";
			this->Nome_da_rua_text->Size = System::Drawing::Size(100, 20);
			this->Nome_da_rua_text->TabIndex = 33;
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
			// ServicoComunicacao1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ProximoCidadao);
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
};
}
