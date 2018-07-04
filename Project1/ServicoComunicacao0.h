#include "ServicoComunicacao1.h"
#include "ServicoComunicacaoNotificar.h"
#include "VizualizarBuracos.h"

#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ServicoComunicacao0
	/// </summary>
	public ref class ServicoComunicacao0 : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacao0(void)
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
		~ServicoComunicacao0()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  VisualizarOS;
	private: System::Windows::Forms::Button^  NotificarFinalizado;
	private: System::Windows::Forms::Button^  RegistrarNotificacao;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->VisualizarOS = (gcnew System::Windows::Forms::Button());
			this->NotificarFinalizado = (gcnew System::Windows::Forms::Button());
			this->RegistrarNotificacao = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Servico de Comunicacao";
			// 
			// VisualizarOS
			// 
			this->VisualizarOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->VisualizarOS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->VisualizarOS->Location = System::Drawing::Point(42, 131);
			this->VisualizarOS->Name = L"VisualizarOS";
			this->VisualizarOS->Size = System::Drawing::Size(104, 63);
			this->VisualizarOS->TabIndex = 4;
			this->VisualizarOS->Text = L"Visualizar buracos";
			this->VisualizarOS->UseVisualStyleBackColor = false;
			this->VisualizarOS->Click += gcnew System::EventHandler(this, &ServicoComunicacao0::VisualizarOS_Click);
			// 
			// NotificarFinalizado
			// 
			this->NotificarFinalizado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->NotificarFinalizado->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NotificarFinalizado->Location = System::Drawing::Point(156, 131);
			this->NotificarFinalizado->Name = L"NotificarFinalizado";
			this->NotificarFinalizado->Size = System::Drawing::Size(104, 63);
			this->NotificarFinalizado->TabIndex = 5;
			this->NotificarFinalizado->Text = L"Notificar finalizacao de OS";
			this->NotificarFinalizado->UseVisualStyleBackColor = false;
			this->NotificarFinalizado->Click += gcnew System::EventHandler(this, &ServicoComunicacao0::NotificarFinalizado_Click);
			// 
			// RegistrarNotificacao
			// 
			this->RegistrarNotificacao->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->RegistrarNotificacao->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegistrarNotificacao->ForeColor = System::Drawing::SystemColors::WindowText;
			this->RegistrarNotificacao->Location = System::Drawing::Point(42, 60);
			this->RegistrarNotificacao->Name = L"RegistrarNotificacao";
			this->RegistrarNotificacao->Size = System::Drawing::Size(218, 65);
			this->RegistrarNotificacao->TabIndex = 6;
			this->RegistrarNotificacao->Text = L"Registrar Notificacao";
			this->RegistrarNotificacao->UseVisualStyleBackColor = false;
			this->RegistrarNotificacao->Click += gcnew System::EventHandler(this, &ServicoComunicacao0::RegistrarNotificacao_Click);
			// 
			// ServicoComunicacao0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 206);
			this->Controls->Add(this->RegistrarNotificacao);
			this->Controls->Add(this->NotificarFinalizado);
			this->Controls->Add(this->VisualizarOS);
			this->Controls->Add(this->label1);
			this->Name = L"ServicoComunicacao0";
			this->Text = L"l";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void VisualizarOS_Click(System::Object^  sender, System::EventArgs^  e) {
	VizualizarBuracos^ tela = gcnew VizualizarBuracos();
	tela->ShowDialog();
}
private: System::Void NotificarFinalizado_Click(System::Object^  sender, System::EventArgs^  e) {
	ServicoComunicacaoNotificar ^ telaNotificar = gcnew ServicoComunicacaoNotificar();
	telaNotificar->ShowDialog();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RegistrarNotificacao_Click(System::Object^  sender, System::EventArgs^  e) {
	ServicoComunicacao1^ telaNotificacao = gcnew ServicoComunicacao1();
	telaNotificacao->ShowDialog();
}
};
}
