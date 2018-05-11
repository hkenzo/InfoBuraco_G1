#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for criarEquipe
	/// </summary>
	public ref class criarEquipe : public System::Windows::Forms::Form
	{
	public:
		criarEquipe(void)
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
		~criarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tb_nome;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

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
			this->tb_nome = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_nome
			// 
			this->tb_nome->Location = System::Drawing::Point(199, 146);
			this->tb_nome->Margin = System::Windows::Forms::Padding(4);
			this->tb_nome->Name = L"tb_nome";
			this->tb_nome->Size = System::Drawing::Size(285, 22);
			this->tb_nome->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 212);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 22);
			this->textBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nome";
			this->label1->Click += gcnew System::EventHandler(this, &criarEquipe::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nº de Profissionais";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"R$ / hora";
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(66, 380);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 13;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &criarEquipe::cancel_create_equpt_bt_Click);
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(297, 380);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 14;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 81);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(285, 22);
			this->textBox3->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(165, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Cadastro de Equipe";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"(total por Equipe)";
			this->label4->Click += gcnew System::EventHandler(this, &criarEquipe::label4_Click);
			// 
			// criarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(546, 458);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tb_nome);
			this->Name = L"criarEquipe";
			this->Text = L"criarEquipe";
			this->Load += gcnew System::EventHandler(this, &criarEquipe::criarEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void criarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
