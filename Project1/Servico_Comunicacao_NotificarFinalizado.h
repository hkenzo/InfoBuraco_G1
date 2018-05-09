#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Servico_Comunicacao_NotificarFinalizado
	/// </summary>
	public ref class Servico_Comunicacao_NotificarFinalizado : public System::Windows::Forms::Form
	{
	public:
		Servico_Comunicacao_NotificarFinalizado(void)
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
		~Servico_Comunicacao_NotificarFinalizado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  infoCidadao;
	private: System::Windows::Forms::ComboBox^  selecionaOS;
	private: System::Windows::Forms::Button^  termino;
	protected:


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
			this->infoCidadao = (gcnew System::Windows::Forms::ListBox());
			this->selecionaOS = (gcnew System::Windows::Forms::ComboBox());
			this->termino = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// infoCidadao
			// 
			this->infoCidadao->FormattingEnabled = true;
			this->infoCidadao->Location = System::Drawing::Point(12, 84);
			this->infoCidadao->Name = L"infoCidadao";
			this->infoCidadao->Size = System::Drawing::Size(350, 108);
			this->infoCidadao->TabIndex = 1;
			// 
			// selecionaOS
			// 
			this->selecionaOS->FormattingEnabled = true;
			this->selecionaOS->Location = System::Drawing::Point(12, 26);
			this->selecionaOS->Name = L"selecionaOS";
			this->selecionaOS->Size = System::Drawing::Size(350, 21);
			this->selecionaOS->TabIndex = 2;
			this->selecionaOS->SelectedIndexChanged += gcnew System::EventHandler(this, &Servico_Comunicacao_NotificarFinalizado::selecionaOS_SelectedIndexChanged);
			// 
			// termino
			// 
			this->termino->Location = System::Drawing::Point(141, 218);
			this->termino->Name = L"termino";
			this->termino->Size = System::Drawing::Size(75, 23);
			this->termino->TabIndex = 3;
			this->termino->Text = L"Fechar";
			this->termino->UseVisualStyleBackColor = true;
			// 
			// Servico_Comunicacao_NotificarFinalizado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 253);
			this->Controls->Add(this->termino);
			this->Controls->Add(this->selecionaOS);
			this->Controls->Add(this->infoCidadao);
			this->Name = L"Servico_Comunicacao_NotificarFinalizado";
			this->Text = L"Servico_Comunicacao_NotificarFinalizado";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void selecionaOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	};
}
