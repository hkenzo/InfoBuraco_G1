#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para VizualizarBuracos
	/// </summary>
	public ref class VizualizarBuracos : public System::Windows::Forms::Form
	{
	public:
		VizualizarBuracos(void)
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
		~VizualizarBuracos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  finalizarConsulta;
	private: System::Windows::Forms::ComboBox^  listaOS;
	private: System::Windows::Forms::ListBox^  listaMostrarOS;
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
			this->finalizarConsulta = (gcnew System::Windows::Forms::Button());
			this->listaOS = (gcnew System::Windows::Forms::ComboBox());
			this->listaMostrarOS = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// finalizarConsulta
			// 
			this->finalizarConsulta->Location = System::Drawing::Point(12, 287);
			this->finalizarConsulta->Name = L"finalizarConsulta";
			this->finalizarConsulta->Size = System::Drawing::Size(167, 23);
			this->finalizarConsulta->TabIndex = 0;
			this->finalizarConsulta->Text = L"Fechar";
			this->finalizarConsulta->UseVisualStyleBackColor = true;
			this->finalizarConsulta->Click += gcnew System::EventHandler(this, &VizualizarBuracos::finalizarConsulta_Click);
			// 
			// listaOS
			// 
			this->listaOS->FormattingEnabled = true;
			this->listaOS->Location = System::Drawing::Point(12, 29);
			this->listaOS->Name = L"listaOS";
			this->listaOS->Size = System::Drawing::Size(167, 21);
			this->listaOS->TabIndex = 1;
			this->listaOS->SelectedIndexChanged += gcnew System::EventHandler(this, &VizualizarBuracos::listaOS_SelectedIndexChanged);
			// 
			// listaMostrarOS
			// 
			this->listaMostrarOS->FormattingEnabled = true;
			this->listaMostrarOS->Location = System::Drawing::Point(12, 56);
			this->listaMostrarOS->Name = L"listaMostrarOS";
			this->listaMostrarOS->Size = System::Drawing::Size(167, 225);
			this->listaMostrarOS->TabIndex = 2;
			this->listaMostrarOS->SelectedIndexChanged += gcnew System::EventHandler(this, &VizualizarBuracos::listaMostrarOS_SelectedIndexChanged);
			// 
			// VizualizarBuracos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(197, 332);
			this->Controls->Add(this->listaMostrarOS);
			this->Controls->Add(this->listaOS);
			this->Controls->Add(this->finalizarConsulta);
			this->Name = L"VizualizarBuracos";
			this->Text = L"VizualizarBuracos";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void finalizarConsulta_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listaMostrarOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listaOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
