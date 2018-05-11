#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for alterarEquipe
	/// </summary>
	public ref class alterarEquipe : public System::Windows::Forms::Form
	{
	public:
		alterarEquipe(void)
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
		~alterarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	protected:
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 25);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Equipe";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(234, 103);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(285, 22);
			this->textBox3->TabIndex = 26;
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(332, 419);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 25;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(91, 419);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 24;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &alterarEquipe::cancel_create_equpt_bt_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(234, 290);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 22);
			this->textBox2->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 22;
			this->label4->Text = L"R$ / hora [Anterior]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Nº de Profissionais [Anterior]";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(234, 169);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 22);
			this->textBox1->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Nº de Profissionais [Novo]";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(234, 231);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(285, 22);
			this->textBox4->TabIndex = 28;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(234, 351);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(285, 22);
			this->textBox5->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"R$ / hora [Nova]";
			// 
			// alterarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(570, 492);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"alterarEquipe";
			this->Text = L"alterarEquipe";
			this->Load += gcnew System::EventHandler(this, &alterarEquipe::alterarEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void alterarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
