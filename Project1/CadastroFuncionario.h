#include "usuarioDAO.h"
#include <msclr\marshal_cppstd.h>
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
	private: System::Windows::Forms::TextBox^  senhabox;
	protected:

	protected:

	private: System::Windows::Forms::Label^  Usuario;
	private: System::Windows::Forms::Label^  Senha;



	private: System::Windows::Forms::Button^  cancel_cadastro_bt;




	private: System::Windows::Forms::Button^  conf_cadastro_bt;
	private: System::Windows::Forms::TextBox^  userbox;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  tipobox;

	private: System::Windows::Forms::TextBox^  nomebox;
	private: System::Windows::Forms::Label^  label2;

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
			this->senhabox = (gcnew System::Windows::Forms::TextBox());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Senha = (gcnew System::Windows::Forms::Label());
			this->cancel_cadastro_bt = (gcnew System::Windows::Forms::Button());
			this->conf_cadastro_bt = (gcnew System::Windows::Forms::Button());
			this->userbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tipobox = (gcnew System::Windows::Forms::ComboBox());
			this->nomebox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// senhabox
			// 
			this->senhabox->Location = System::Drawing::Point(199, 297);
			this->senhabox->Margin = System::Windows::Forms::Padding(4);
			this->senhabox->Name = L"senhabox";
			this->senhabox->PasswordChar = '*';
			this->senhabox->Size = System::Drawing::Size(285, 22);
			this->senhabox->TabIndex = 6;
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(41, 105);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(57, 17);
			this->Usuario->TabIndex = 7;
			this->Usuario->Text = L"Usuário";
			this->Usuario->Click += gcnew System::EventHandler(this, &CadastroFuncionario::label1_Click);
			// 
			// Senha
			// 
			this->Senha->AutoSize = true;
			this->Senha->Location = System::Drawing::Point(41, 300);
			this->Senha->Name = L"Senha";
			this->Senha->Size = System::Drawing::Size(49, 17);
			this->Senha->TabIndex = 9;
			this->Senha->Text = L"Senha";
			// 
			// cancel_cadastro_bt
			// 
			this->cancel_cadastro_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_cadastro_bt->Location = System::Drawing::Point(67, 380);
			this->cancel_cadastro_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_cadastro_bt->Name = L"cancel_cadastro_bt";
			this->cancel_cadastro_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_cadastro_bt->TabIndex = 13;
			this->cancel_cadastro_bt->Text = L"Cancelar";
			this->cancel_cadastro_bt->UseVisualStyleBackColor = false;
			this->cancel_cadastro_bt->Click += gcnew System::EventHandler(this, &CadastroFuncionario::cancel_cadastro_bt_Click);
			// 
			// conf_cadastro_bt
			// 
			this->conf_cadastro_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_cadastro_bt->Location = System::Drawing::Point(297, 380);
			this->conf_cadastro_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->conf_cadastro_bt->Name = L"conf_cadastro_bt";
			this->conf_cadastro_bt->Size = System::Drawing::Size(171, 36);
			this->conf_cadastro_bt->TabIndex = 14;
			this->conf_cadastro_bt->Text = L"Confirmar";
			this->conf_cadastro_bt->UseVisualStyleBackColor = false;
			this->conf_cadastro_bt->Click += gcnew System::EventHandler(this, &CadastroFuncionario::conf_cadastro_bt_Click);
			// 
			// userbox
			// 
			this->userbox->Location = System::Drawing::Point(199, 102);
			this->userbox->Margin = System::Windows::Forms::Padding(4);
			this->userbox->Name = L"userbox";
			this->userbox->Size = System::Drawing::Size(285, 22);
			this->userbox->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(165, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(226, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Cadastro de Funcionário";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 17);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Tipo";
			// 
			// tipobox
			// 
			this->tipobox->FormattingEnabled = true;
			this->tipobox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Serviço de Comunicação", L"Gestor", L"Despachador",
					L"Chefe da Equipe"
			});
			this->tipobox->Location = System::Drawing::Point(199, 227);
			this->tipobox->Name = L"tipobox";
			this->tipobox->Size = System::Drawing::Size(285, 24);
			this->tipobox->TabIndex = 19;
			// 
			// nomebox
			// 
			this->nomebox->Location = System::Drawing::Point(199, 163);
			this->nomebox->Margin = System::Windows::Forms::Padding(4);
			this->nomebox->Name = L"nomebox";
			this->nomebox->Size = System::Drawing::Size(285, 22);
			this->nomebox->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Nome";
			// 
			// CadastroFuncionario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(547, 458);
			this->Controls->Add(this->nomebox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tipobox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->userbox);
			this->Controls->Add(this->conf_cadastro_bt);
			this->Controls->Add(this->cancel_cadastro_bt);
			this->Controls->Add(this->Senha);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->senhabox);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
		usuarioDAO * temp = new usuarioDAO();

		string tipo = msclr::interop::marshal_as<std::string>(this->tipobox->Text);
		string nome = msclr::interop::marshal_as<std::string>(this->nomebox->Text);
		string user = msclr::interop::marshal_as<std::string>(this->userbox->Text);
		string senha = msclr::interop::marshal_as<std::string>(this->senhabox->Text);

		temp->criarUsuarioDAO(user, tipo, senha, nome);
		this->Close();
	}

	
};
}
