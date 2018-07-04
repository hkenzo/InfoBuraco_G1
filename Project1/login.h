#include "usuarioDAO.h"
#include "Despachador.h"
#include "ServicoComunicacao0.h"
#include "CadastroFuncionario.h"
#include "ChefeEquipeTrabalho.h"
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
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
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



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  userbox;
	private: System::Windows::Forms::Button^  change_Mobilizacao_bt;
	private: System::Windows::Forms::Label^  erroSenha;
	private: System::Windows::Forms::Label^  erroUser;








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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userbox = (gcnew System::Windows::Forms::TextBox());
			this->change_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->erroSenha = (gcnew System::Windows::Forms::Label());
			this->erroUser = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// senhabox
			// 
			this->senhabox->Location = System::Drawing::Point(210, 191);
			this->senhabox->Margin = System::Windows::Forms::Padding(4);
			this->senhabox->Name = L"senhabox";
			this->senhabox->PasswordChar = '*';
			this->senhabox->Size = System::Drawing::Size(285, 22);
			this->senhabox->TabIndex = 6;
			this->senhabox->TextChanged += gcnew System::EventHandler(this, &login::senhabox_TextChanged);
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(52, 128);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(57, 17);
			this->Usuario->TabIndex = 7;
			this->Usuario->Text = L"Usuário";
			this->Usuario->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// Senha
			// 
			this->Senha->AutoSize = true;
			this->Senha->Location = System::Drawing::Point(52, 194);
			this->Senha->Name = L"Senha";
			this->Senha->Size = System::Drawing::Size(49, 17);
			this->Senha->TabIndex = 9;
			this->Senha->Text = L"Senha";
			this->Senha->Click += gcnew System::EventHandler(this, &login::Senha_Click);
			// 
			// cancel_cadastro_bt
			// 
			this->cancel_cadastro_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_cadastro_bt->Location = System::Drawing::Point(46, 261);
			this->cancel_cadastro_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_cadastro_bt->Name = L"cancel_cadastro_bt";
			this->cancel_cadastro_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_cadastro_bt->TabIndex = 13;
			this->cancel_cadastro_bt->Text = L"Cancelar";
			this->cancel_cadastro_bt->UseVisualStyleBackColor = false;
			this->cancel_cadastro_bt->Click += gcnew System::EventHandler(this, &login::cancel_cadastro_bt_Click);
			// 
			// conf_cadastro_bt
			// 
			this->conf_cadastro_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_cadastro_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_cadastro_bt->Location = System::Drawing::Point(472, 261);
			this->conf_cadastro_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->conf_cadastro_bt->Name = L"conf_cadastro_bt";
			this->conf_cadastro_bt->Size = System::Drawing::Size(171, 36);
			this->conf_cadastro_bt->TabIndex = 14;
			this->conf_cadastro_bt->Text = L"Confirmar";
			this->conf_cadastro_bt->UseVisualStyleBackColor = false;
			this->conf_cadastro_bt->Click += gcnew System::EventHandler(this, &login::conf_cadastro_bt_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(250, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 36);
			this->label5->TabIndex = 16;
			this->label5->Text = L"INFOBURACO";
			this->label5->Click += gcnew System::EventHandler(this, &login::label5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(333, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Login";
			// 
			// userbox
			// 
			this->userbox->Location = System::Drawing::Point(210, 125);
			this->userbox->Margin = System::Windows::Forms::Padding(4);
			this->userbox->Name = L"userbox";
			this->userbox->Size = System::Drawing::Size(285, 22);
			this->userbox->TabIndex = 15;
			// 
			// change_Mobilizacao_bt
			// 
			this->change_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_Mobilizacao_bt->Location = System::Drawing::Point(256, 261);
			this->change_Mobilizacao_bt->Name = L"change_Mobilizacao_bt";
			this->change_Mobilizacao_bt->Size = System::Drawing::Size(186, 36);
			this->change_Mobilizacao_bt->TabIndex = 18;
			this->change_Mobilizacao_bt->Text = L"Cadastrar";
			this->change_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->change_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &login::change_Mobilizacao_bt_Click);
			// 
			// erroSenha
			// 
			this->erroSenha->AutoSize = true;
			this->erroSenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->erroSenha->ForeColor = System::Drawing::Color::Red;
			this->erroSenha->Location = System::Drawing::Point(511, 194);
			this->erroSenha->Name = L"erroSenha";
			this->erroSenha->Size = System::Drawing::Size(124, 17);
			this->erroSenha->TabIndex = 19;
			this->erroSenha->Text = L"Senha Incorreta";
			this->erroSenha->Click += gcnew System::EventHandler(this, &login::label2_Click);
			// 
			// erroUser
			// 
			this->erroUser->AutoSize = true;
			this->erroUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->erroUser->ForeColor = System::Drawing::Color::Red;
			this->erroUser->Location = System::Drawing::Point(511, 125);
			this->erroUser->Name = L"erroUser";
			this->erroUser->Size = System::Drawing::Size(183, 17);
			this->erroUser->TabIndex = 20;
			this->erroUser->Text = L"Usuário não encontrado";
			this->erroUser->Click += gcnew System::EventHandler(this, &login::label3_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(700, 340);
			this->Controls->Add(this->erroUser);
			this->Controls->Add(this->erroSenha);
			this->Controls->Add(this->change_Mobilizacao_bt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->userbox);
			this->Controls->Add(this->conf_cadastro_bt);
			this->Controls->Add(this->cancel_cadastro_bt);
			this->Controls->Add(this->Senha);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->senhabox);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
		this->erroUser->Visible = false;
		this->erroSenha->Visible = false;
	}
	private: System::Void cancel_cadastro_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void conf_cadastro_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		usuarioDAO * temp = new usuarioDAO();
		vector<usuario*>* temp2;
		string user = msclr::interop::marshal_as<std::string>(this->userbox->Text);

		temp2 = temp->buscarUsuario(user);
		if (temp2->size() == 0) {
			this->erroUser->Visible = true;
		}
		else {
			this->erroUser->Visible = false;
			for (int j = 0; j < temp2->size(); j++) {
				String^ str2 = gcnew String((temp2->at(j)->getSenha()).c_str());
				string tipo = temp2->at(j)->getTipo();
				if (str2 == this->senhabox->Text) {
					this->erroSenha->Visible = false;
					if (tipo == "Servico de Comunicacao") {
						ServicoComunicacao0^ aux = gcnew ServicoComunicacao0();
						aux->ShowDialog();
						this->Close();
					}
					else if (tipo == "Gestor") {

					}
					else if (tipo == "Chefe da Equipe") {
						ChefeEquipeTrabalho^ aux = gcnew ChefeEquipeTrabalho();
						aux->ShowDialog();
						this->Close();
					}
					else if (tipo == "Despachador") {
						Despachador^ aux = gcnew Despachador();
						aux->ShowDialog();
						this->Close();
						
					}

				}
				else {
					this->erroSenha->Visible = true;
				}
			}
		}
	}


	private: System::Void Senha_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void senhabox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void change_Mobilizacao_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	CadastroFuncionario^ aux = gcnew CadastroFuncionario();
	aux->ShowDialog();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
