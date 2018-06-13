#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for alterarSaida1
	/// </summary>
	public ref class alterarSaida1 : public System::Windows::Forms::Form
	{
	public:
		alterarSaida1(void)
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
		~alterarSaida1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::Button^  Confirm_Bt;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(231, 9);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 24);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Alterar Saída";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(192, 80);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(229, 20);
			this->dateTimePicker1->TabIndex = 47;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(136, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 17);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Data";
			this->label3->Click += gcnew System::EventHandler(this, &alterarSaida1::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(27, 139);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 15);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Equipe de trabalho [Atual]";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox1->Location = System::Drawing::Point(192, 138);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(77, 20);
			this->textBox1->TabIndex = 49;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox2->Location = System::Drawing::Point(192, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(77, 20);
			this->textBox2->TabIndex = 51;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(27, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 15);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Equipe de trabalho [Novo]";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(462, 84);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 43);
			this->button3->TabIndex = 54;
			this->button3->Text = L"Próximo";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(462, 216);
			this->cancel_create_equpt_bt->Margin = System::Windows::Forms::Padding(2);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(94, 43);
			this->cancel_create_equpt_bt->TabIndex = 52;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(462, 145);
			this->Confirm_Bt->Margin = System::Windows::Forms::Padding(2);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(94, 46);
			this->Confirm_Bt->TabIndex = 55;
			this->Confirm_Bt->Text = L"Voltar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			// 
			// alterarSaida1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 280);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Name = L"alterarSaida1";
			this->Text = L"alterarSaida1";
			this->Load += gcnew System::EventHandler(this, &alterarSaida1::alterarSaida1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void alterarSaida1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
