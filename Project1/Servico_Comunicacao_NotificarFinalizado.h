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
	private: System::Windows::Forms::Button^  limparNotificar;
	private: System::Windows::Forms::Button^  marcarNotificado;
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
			this->limparNotificar = (gcnew System::Windows::Forms::Button());
			this->marcarNotificado = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// infoCidadao
			// 
			this->infoCidadao->FormattingEnabled = true;
			this->infoCidadao->Location = System::Drawing::Point(12, 84);
			this->infoCidadao->Name = L"infoCidadao";
			this->infoCidadao->Size = System::Drawing::Size(350, 108);
			this->infoCidadao->TabIndex = 1;
			this->infoCidadao->SelectedIndexChanged += gcnew System::EventHandler(this, &Servico_Comunicacao_NotificarFinalizado::infoCidadao_SelectedIndexChanged);
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
			this->termino->Location = System::Drawing::Point(239, 218);
			this->termino->Name = L"termino";
			this->termino->Size = System::Drawing::Size(110, 23);
			this->termino->TabIndex = 3;
			this->termino->Text = L"Fechar";
			this->termino->UseVisualStyleBackColor = true;
			this->termino->Click += gcnew System::EventHandler(this, &Servico_Comunicacao_NotificarFinalizado::termino_Click);
			// 
			// limparNotificar
			// 
			this->limparNotificar->Location = System::Drawing::Point(129, 218);
			this->limparNotificar->Name = L"limparNotificar";
			this->limparNotificar->Size = System::Drawing::Size(104, 23);
			this->limparNotificar->TabIndex = 4;
			this->limparNotificar->Text = L"Limpar tela";
			this->limparNotificar->UseVisualStyleBackColor = true;
			this->limparNotificar->Click += gcnew System::EventHandler(this, &Servico_Comunicacao_NotificarFinalizado::limparNotificar_Click);
			// 
			// marcarNotificado
			// 
			this->marcarNotificado->Location = System::Drawing::Point(26, 218);
			this->marcarNotificado->Name = L"marcarNotificado";
			this->marcarNotificado->Size = System::Drawing::Size(97, 23);
			this->marcarNotificado->TabIndex = 5;
			this->marcarNotificado->Text = L"Notificado";
			this->marcarNotificado->UseVisualStyleBackColor = true;
			this->marcarNotificado->Click += gcnew System::EventHandler(this, &Servico_Comunicacao_NotificarFinalizado::marcarNotificado_Click);
			// 
			// Servico_Comunicacao_NotificarFinalizado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 253);
			this->Controls->Add(this->marcarNotificado);
			this->Controls->Add(this->limparNotificar);
			this->Controls->Add(this->termino);
			this->Controls->Add(this->selecionaOS);
			this->Controls->Add(this->infoCidadao);
			this->Name = L"Servico_Comunicacao_NotificarFinalizado";
			this->Text = L"Servico_Comunicacao_NotificarFinalizado";
			this->ResumeLayout(false);
			
			// for (all OS where finalizada = 1 e notificado = 0) selecionaOS->Items->Add(OS->identificacao)
			for (int i = 3; i > 0; i--) {
				this->selecionaOS->Items->Add(i);
			}
		}

		

#pragma endregion
	private: System::Void selecionaOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//String ^ osnum = comboBox1->SelectedItem->ToString() ;
		//this->infoCidadao->Items->Add(OS->tipoComunicacao);
		//this->infoCidadao->Items->Add(OS->Comunicacao);
		//this->infoCidadao->Items->Add(OS->nomeCidadao);
		//this->infoCidadao->Items->Add(OS->dataContato);
		//this->infoCidadao->Items->Add(OS->nomeRua)
		//show tipo, comunicacao, nome cidadao, buraco... when osnum = osnum;
		String ^ selec;
		selec = selecionaOS->SelectedItem->ToString();
		
		
		if (selec == "1")
			this->infoCidadao->Items->Add("1");
		if (selec == "2")
			this->infoCidadao->Items->Add("2");
		if (selec == "3")
			this->infoCidadao->Items->Add("3");


	}
	private: System::Void infoCidadao_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void termino_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void limparNotificar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->infoCidadao->Items->Clear();
	}

	private: System::Void marcarNotificado_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ selec;
		selec = selecionaOS->SelectedItem->ToString();
		
		// os cujo osnum -> notificado = 1;
		this->selecionaOS->Items->Remove(selecionaOS->SelectedItem);
	}

	};
}
