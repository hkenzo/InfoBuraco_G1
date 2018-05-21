#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ServicoComunicacao2_Pronto
	/// </summary>
	public ref class ServicoComunicacao2_Pronto : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacao2_Pronto(void)
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
		~ServicoComunicacao2_Pronto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  registrotxtOK;
	protected:
	private: System::Windows::Forms::Button^  registroOK;

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
			this->registrotxtOK = (gcnew System::Windows::Forms::Label());
			this->registroOK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// registrotxtOK
			// 
			this->registrotxtOK->AutoSize = true;
			this->registrotxtOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registrotxtOK->Location = System::Drawing::Point(4, 34);
			this->registrotxtOK->Name = L"registrotxtOK";
			this->registrotxtOK->Size = System::Drawing::Size(321, 31);
			this->registrotxtOK->TabIndex = 0;
			this->registrotxtOK->Text = L"Cadastrado com sucesso";
			// 
			// registroOK
			// 
			this->registroOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registroOK->Location = System::Drawing::Point(111, 68);
			this->registroOK->Name = L"registroOK";
			this->registroOK->Size = System::Drawing::Size(75, 44);
			this->registroOK->TabIndex = 1;
			this->registroOK->Text = L"ok";
			this->registroOK->UseVisualStyleBackColor = true;
			this->registroOK->Click += gcnew System::EventHandler(this, &ServicoComunicacao2_Pronto::registroOK_Click);
			// 
			// ServicoComunicacao2_Pronto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 126);
			this->Controls->Add(this->registroOK);
			this->Controls->Add(this->registrotxtOK);
			this->Name = L"ServicoComunicacao2_Pronto";
			this->Text = L"ServicoComunicacao2_Pronto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registroOK_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}
