#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for removerEquipe
	/// </summary>
	public ref class removerEquipe : public System::Windows::Forms::Form
	{
	public:
		removerEquipe(void)
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
		~removerEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Cancel_BT;
	private: System::Windows::Forms::Button^  Confirm_Bt;
	protected:

	protected:






	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;



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
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(82, 385);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 0;
			this->Cancel_BT->Text = L"Cancelar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &removerEquipe::Cancel_BT_Click);
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(378, 385);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 1;
			this->Confirm_Bt->Text = L"Confirmar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(90, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 17);
			this->label3->TabIndex = 20;
			this->label3->Text = L"R$ / Hora ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(90, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"N� de Profissionais";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(90, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Nome";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(208, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 25);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Remo��o de Equipe";
			this->label6->Click += gcnew System::EventHandler(this, &removerEquipe::label6_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(273, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 22);
			this->textBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(273, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 22);
			this->textBox2->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(273, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(309, 22);
			this->textBox3->TabIndex = 27;
			// 
			// removerEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(634, 474);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Name = L"removerEquipe";
			this->Text = L"removerEquipe";
			this->Load += gcnew System::EventHandler(this, &removerEquipe::removerEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void removerEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
