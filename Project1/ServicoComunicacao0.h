#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para ServicoComunicacao0
	/// </summary>
	public ref class ServicoComunicacao0 : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacao0(void)
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
		~ServicoComunicacao0()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar nova reclamacao";
			this->button1->UseVisualStyleBackColor = true;
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(42, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 63);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Visualizar OS ativas";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(156, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 63);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Notificar finalizacao de OS";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// ServicoComunicacao0
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 206);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"ServicoComunicacao0";
			this->Text = L"l";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
