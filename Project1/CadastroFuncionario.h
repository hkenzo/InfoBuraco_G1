#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CadastroFuncionario
	/// </summary>
	public ref class CadastroFuncionario : public System::Windows::Forms::Form
	{
	public:
		CadastroFuncionario(void)
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
		~CadastroFuncionario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  Usuario;
	private: System::Windows::Forms::Label^  Senha;



	private: System::Windows::Forms::Button^  cancel_cadastro_bt;




	private: System::Windows::Forms::Button^  conf_cadastro_bt;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Senha = (gcnew System::Windows::Forms::Label());
			this->cancel_cadastro_bt = (gcnew System::Windows::Forms::Button());
			this->conf_cadastro_bt = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 20);
			this->textBox1->TabIndex = 6;
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(31, 68);
			this->Usuario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(43, 13);
			this->Usuario->TabIndex = 7;
			this->Usuario->Text = L"Usuario";
			this->Usuario->Click += gcnew System::EventHandler(this, &CadastroFuncionario::label1_Click);
			// 
			// Senha
			// 
			this->Senha->AutoSize = true;
			this->Senha->Location = System::Drawing::Point(31, 142);
			this->Senha->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Senha->Name = L"Senha";
			this->Senha->Size = System::Drawing::Size(38, 13);
			this->Senha->TabIndex = 9;
			this->Senha->Text = L"Senha";
			// 
			// cancel_cadastro_bt
			// 
			this->cancel_cadastro_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_cadastro_bt->Location = System::Drawing::Point(50, 309);
			this->cancel_cadastro_bt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cancel_cadastro_bt->Name = L"cancel_cadastro_bt";
			this->cancel_cadastro_bt->Size = System::Drawing::Size(128, 29);
			this->cancel_cadastro_bt->TabIndex = 13;
			this->cancel_cadastro_bt->Text = L"Cancelar";
			this->cancel_cadastro_bt->UseVisualStyleBackColor = false;
			this->cancel_cadastro_bt->Click += gcnew System::EventHandler(this, &CadastroFuncionario::cancel_cadastro_bt_Click);
			// 
			// conf_cadastro_bt
			// 
			this->conf_cadastro_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_cadastro_bt->Location = System::Drawing::Point(223, 309);
			this->conf_cadastro_bt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->conf_cadastro_bt->Name = L"conf_cadastro_bt";
			this->conf_cadastro_bt->Size = System::Drawing::Size(128, 29);
			this->conf_cadastro_bt->TabIndex = 14;
			this->conf_cadastro_bt->Text = L"Confirmar";
			this->conf_cadastro_bt->UseVisualStyleBackColor = false;
			this->conf_cadastro_bt->Click += gcnew System::EventHandler(this, &CadastroFuncionario::conf_cadastro_bt_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(149, 66);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(215, 20);
			this->textBox3->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(124, 24);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Cadastro de Equipamento";
			// 
			// CadastroFuncionario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(410, 372);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->conf_cadastro_bt);
			this->Controls->Add(this->cancel_cadastro_bt);
			this->Controls->Add(this->Senha);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CadastroFuncionario";
			this->Text = L"CadastroFuncionario";
			this->Load += gcnew System::EventHandler(this, &CadastroFuncionario::CadastroFuncionario_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void CadastroFuncionario_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancel_cadastro_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void conf_cadastro_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
