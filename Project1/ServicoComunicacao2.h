#include "ServicoComunicacao2_Pronto.h"

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para ServicoComunicacao2
	/// </summary>
	public ref class ServicoComunicacao2 : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacao2(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
		/// </summary>
		~ServicoComunicacao2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tipo_comunicacao_text;
	private: System::Windows::Forms::TextBox^  comunicacao_text;
	private: System::Windows::Forms::TextBox^  nome_cidadao_text;
	private: System::Windows::Forms::TextBox^  data_contato_text;
	private: System::Windows::Forms::TextBox^  hora_contato_text;
	private: System::Windows::Forms::Button^  FinalizarRegistro;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  AnteriorCidadao;

	private: System::Windows::Forms::Label^  label6;













	protected:

	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tipo_comunicacao_text = (gcnew System::Windows::Forms::TextBox());
			this->comunicacao_text = (gcnew System::Windows::Forms::TextBox());
			this->nome_cidadao_text = (gcnew System::Windows::Forms::TextBox());
			this->data_contato_text = (gcnew System::Windows::Forms::TextBox());
			this->hora_contato_text = (gcnew System::Windows::Forms::TextBox());
			this->FinalizarRegistro = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AnteriorCidadao = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de Comunicacao";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nome do cidadao";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Comunicacao";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Data de contato";
			// 
			// tipo_comunicacao_text
			// 
			this->tipo_comunicacao_text->Location = System::Drawing::Point(157, 60);
			this->tipo_comunicacao_text->Name = L"tipo_comunicacao_text";
			this->tipo_comunicacao_text->Size = System::Drawing::Size(100, 20);
			this->tipo_comunicacao_text->TabIndex = 5;
			// 
			// comunicacao_text
			// 
			this->comunicacao_text->Location = System::Drawing::Point(157, 86);
			this->comunicacao_text->Name = L"comunicacao_text";
			this->comunicacao_text->Size = System::Drawing::Size(100, 20);
			this->comunicacao_text->TabIndex = 6;
			// 
			// nome_cidadao_text
			// 
			this->nome_cidadao_text->Location = System::Drawing::Point(157, 112);
			this->nome_cidadao_text->Name = L"nome_cidadao_text";
			this->nome_cidadao_text->Size = System::Drawing::Size(100, 20);
			this->nome_cidadao_text->TabIndex = 7;
			// 
			// data_contato_text
			// 
			this->data_contato_text->Location = System::Drawing::Point(157, 138);
			this->data_contato_text->Name = L"data_contato_text";
			this->data_contato_text->Size = System::Drawing::Size(100, 20);
			this->data_contato_text->TabIndex = 8;
			// 
			// hora_contato_text
			// 
			this->hora_contato_text->Location = System::Drawing::Point(157, 164);
			this->hora_contato_text->Name = L"hora_contato_text";
			this->hora_contato_text->Size = System::Drawing::Size(100, 20);
			this->hora_contato_text->TabIndex = 9;
			// 
			// FinalizarRegistro
			// 
			this->FinalizarRegistro->Location = System::Drawing::Point(157, 204);
			this->FinalizarRegistro->Name = L"FinalizarRegistro";
			this->FinalizarRegistro->Size = System::Drawing::Size(75, 23);
			this->FinalizarRegistro->TabIndex = 10;
			this->FinalizarRegistro->Text = L"Finalizar";
			this->FinalizarRegistro->UseVisualStyleBackColor = true;
			this->FinalizarRegistro->Click += gcnew System::EventHandler(this, &ServicoComunicacao2::FinalizarRegistro_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Hora de Contato";
			// 
			// AnteriorCidadao
			// 
			this->AnteriorCidadao->Location = System::Drawing::Point(38, 204);
			this->AnteriorCidadao->Name = L"AnteriorCidadao";
			this->AnteriorCidadao->Size = System::Drawing::Size(75, 23);
			this->AnteriorCidadao->TabIndex = 12;
			this->AnteriorCidadao->Text = L"Cancelar";
			this->AnteriorCidadao->UseVisualStyleBackColor = true;
			this->AnteriorCidadao->Click += gcnew System::EventHandler(this, &ServicoComunicacao2::AnteriorCidadao_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(70, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Dados do cidadao";
			// 
			// ServicoComunicacao2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(311, 256);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->AnteriorCidadao);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->FinalizarRegistro);
			this->Controls->Add(this->hora_contato_text);
			this->Controls->Add(this->data_contato_text);
			this->Controls->Add(this->nome_cidadao_text);
			this->Controls->Add(this->comunicacao_text);
			this->Controls->Add(this->tipo_comunicacao_text);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ServicoComunicacao2";
			this->Text = L"ServicoComunicacao2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AnteriorCidadao_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void FinalizarRegistro_Click(System::Object^  sender, System::EventArgs^  e) {		
	//salvar dados 

	ServicoComunicacao2_Pronto ^ telaNotificacaoFim = gcnew ServicoComunicacao2_Pronto();
	telaNotificacaoFim->ShowDialog();

	this->Close();
}
};
}
