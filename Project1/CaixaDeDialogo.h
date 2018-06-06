#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CaixaDeDialogo
	/// </summary>
	public ref class CaixaDeDialogo : public System::Windows::Forms::Form
	{
	public:
		CaixaDeDialogo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ Nome {
			String^ get() {
				return tb_nome->Text;
			}
			void set(String^ nome) {
				tb_nome->Text = nome;
			}
		}
		property String^ Telefone {
			String^ get() {
				return tb_telefone->Text;
			}
			void set(String^ telefone) {
				tb_telefone->Text = telefone;
			}
		}
		property int Escolaridade {
			int get() {
				return cb_escolaridade->SelectedIndex;
			}
			void set(int escolaridade) {
				cb_escolaridade->SelectedIndex = escolaridade;				
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CaixaDeDialogo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_titulo;
	private: System::Windows::Forms::Label^  lb_nome;
	private: System::Windows::Forms::Label^  lb_telefone;
	private: System::Windows::Forms::Label^  lb_escolaridade;
	private: System::Windows::Forms::TextBox^  tb_nome;
	private: System::Windows::Forms::TextBox^  tb_telefone;
	private: System::Windows::Forms::ComboBox^  cb_escolaridade;


	private: System::Windows::Forms::Button^  bt_ok;
	private: System::Windows::Forms::Button^  bt_cancelar;

	protected:

	protected:

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
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->lb_nome = (gcnew System::Windows::Forms::Label());
			this->lb_telefone = (gcnew System::Windows::Forms::Label());
			this->lb_escolaridade = (gcnew System::Windows::Forms::Label());
			this->tb_nome = (gcnew System::Windows::Forms::TextBox());
			this->tb_telefone = (gcnew System::Windows::Forms::TextBox());
			this->cb_escolaridade = (gcnew System::Windows::Forms::ComboBox());
			this->bt_ok = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->Location = System::Drawing::Point(128, 32);
			this->lb_titulo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(110, 17);
			this->lb_titulo->TabIndex = 0;
			this->lb_titulo->Text = L"Dados Pessoais";
			this->lb_titulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lb_nome
			// 
			this->lb_nome->AutoSize = true;
			this->lb_nome->Location = System::Drawing::Point(59, 80);
			this->lb_nome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_nome->Name = L"lb_nome";
			this->lb_nome->Size = System::Drawing::Size(49, 17);
			this->lb_nome->TabIndex = 1;
			this->lb_nome->Text = L"Nome:";
			this->lb_nome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_telefone
			// 
			this->lb_telefone->AutoSize = true;
			this->lb_telefone->Location = System::Drawing::Point(40, 137);
			this->lb_telefone->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_telefone->Name = L"lb_telefone";
			this->lb_telefone->Size = System::Drawing::Size(68, 17);
			this->lb_telefone->TabIndex = 2;
			this->lb_telefone->Text = L"Telefone:";
			this->lb_telefone->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_escolaridade
			// 
			this->lb_escolaridade->AutoSize = true;
			this->lb_escolaridade->Location = System::Drawing::Point(40, 187);
			this->lb_escolaridade->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lb_escolaridade->Name = L"lb_escolaridade";
			this->lb_escolaridade->Size = System::Drawing::Size(59, 17);
			this->lb_escolaridade->TabIndex = 3;
			this->lb_escolaridade->Text = L"Função:";
			this->lb_escolaridade->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lb_escolaridade->Click += gcnew System::EventHandler(this, &CaixaDeDialogo::lb_escolaridade_Click);
			// 
			// tb_nome
			// 
			this->tb_nome->Location = System::Drawing::Point(132, 80);
			this->tb_nome->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb_nome->Name = L"tb_nome";
			this->tb_nome->Size = System::Drawing::Size(132, 22);
			this->tb_nome->TabIndex = 4;
			this->tb_nome->TextChanged += gcnew System::EventHandler(this, &CaixaDeDialogo::tb_nome_TextChanged);
			// 
			// tb_telefone
			// 
			this->tb_telefone->Location = System::Drawing::Point(132, 137);
			this->tb_telefone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tb_telefone->Name = L"tb_telefone";
			this->tb_telefone->Size = System::Drawing::Size(132, 22);
			this->tb_telefone->TabIndex = 5;
			// 
			// cb_escolaridade
			// 
			this->cb_escolaridade->FormattingEnabled = true;
			this->cb_escolaridade->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1º Grau", L"2º Grau", L"3º Grau", L"Pós-Graduação" });
			this->cb_escolaridade->Location = System::Drawing::Point(132, 187);
			this->cb_escolaridade->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cb_escolaridade->Name = L"cb_escolaridade";
			this->cb_escolaridade->Size = System::Drawing::Size(132, 24);
			this->cb_escolaridade->TabIndex = 6;
			// 
			// bt_ok
			// 
			this->bt_ok->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->bt_ok->Location = System::Drawing::Point(63, 425);
			this->bt_ok->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_ok->Name = L"bt_ok";
			this->bt_ok->Size = System::Drawing::Size(100, 28);
			this->bt_ok->TabIndex = 7;
			this->bt_ok->Text = L"Ok";
			this->bt_ok->UseVisualStyleBackColor = true;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bt_cancelar->Location = System::Drawing::Point(187, 425);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(100, 28);
			this->bt_cancelar->TabIndex = 8;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = true;
			// 
			// CaixaDeDialogo
			// 
			this->AcceptButton = this->bt_ok;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->bt_cancelar;
			this->ClientSize = System::Drawing::Size(379, 468);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->bt_ok);
			this->Controls->Add(this->cb_escolaridade);
			this->Controls->Add(this->tb_telefone);
			this->Controls->Add(this->tb_nome);
			this->Controls->Add(this->lb_escolaridade);
			this->Controls->Add(this->lb_telefone);
			this->Controls->Add(this->lb_nome);
			this->Controls->Add(this->lb_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"CaixaDeDialogo";
			this->Text = L"Dados Pessoais";
			this->Load += gcnew System::EventHandler(this, &CaixaDeDialogo::CaixaDeDialogo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void lb_escolaridade_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CaixaDeDialogo_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tb_nome_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
