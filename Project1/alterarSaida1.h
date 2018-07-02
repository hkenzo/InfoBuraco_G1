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
	private: System::Windows::Forms::Label^  label_alterarSaida;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_Saida;
	protected:


	private: System::Windows::Forms::Label^  lb_dataSaida;
	private: System::Windows::Forms::Label^  lb_equipeAtual;
	private: System::Windows::Forms::TextBox^  textBox_equipeAtual;
	private: System::Windows::Forms::TextBox^  textBox_equipeNova;





	private: System::Windows::Forms::Label^  lb_equipeNova;
	private: System::Windows::Forms::Button^  bt_proximo;
	private: System::Windows::Forms::Button^  bt_cancelar;



	private: System::Windows::Forms::Button^  bt_confirmar;

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
			this->label_alterarSaida = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_Saida = (gcnew System::Windows::Forms::DateTimePicker());
			this->lb_dataSaida = (gcnew System::Windows::Forms::Label());
			this->lb_equipeAtual = (gcnew System::Windows::Forms::Label());
			this->textBox_equipeAtual = (gcnew System::Windows::Forms::TextBox());
			this->textBox_equipeNova = (gcnew System::Windows::Forms::TextBox());
			this->lb_equipeNova = (gcnew System::Windows::Forms::Label());
			this->bt_proximo = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->bt_confirmar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_alterarSaida
			// 
			this->label_alterarSaida->AutoSize = true;
			this->label_alterarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label_alterarSaida->Location = System::Drawing::Point(231, 9);
			this->label_alterarSaida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_alterarSaida->Name = L"label_alterarSaida";
			this->label_alterarSaida->Size = System::Drawing::Size(116, 24);
			this->label_alterarSaida->TabIndex = 35;
			this->label_alterarSaida->Text = L"Alterar Saída";
			// 
			// dateTimePicker_Saida
			// 
			this->dateTimePicker_Saida->Location = System::Drawing::Point(192, 80);
			this->dateTimePicker_Saida->Name = L"dateTimePicker_Saida";
			this->dateTimePicker_Saida->Size = System::Drawing::Size(229, 20);
			this->dateTimePicker_Saida->TabIndex = 47;
			// 
			// lb_dataSaida
			// 
			this->lb_dataSaida->AutoSize = true;
			this->lb_dataSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_dataSaida->Location = System::Drawing::Point(136, 80);
			this->lb_dataSaida->Name = L"lb_dataSaida";
			this->lb_dataSaida->Size = System::Drawing::Size(38, 17);
			this->lb_dataSaida->TabIndex = 46;
			this->lb_dataSaida->Text = L"Data";
			this->lb_dataSaida->Click += gcnew System::EventHandler(this, &alterarSaida1::label3_Click);
			// 
			// lb_equipeAtual
			// 
			this->lb_equipeAtual->AutoSize = true;
			this->lb_equipeAtual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lb_equipeAtual->Location = System::Drawing::Point(27, 139);
			this->lb_equipeAtual->Name = L"lb_equipeAtual";
			this->lb_equipeAtual->Size = System::Drawing::Size(147, 15);
			this->lb_equipeAtual->TabIndex = 48;
			this->lb_equipeAtual->Text = L"Equipe de trabalho [Atual]";
			// 
			// textBox_equipeAtual
			// 
			this->textBox_equipeAtual->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_equipeAtual->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_equipeAtual->Location = System::Drawing::Point(192, 138);
			this->textBox_equipeAtual->Name = L"textBox_equipeAtual";
			this->textBox_equipeAtual->Size = System::Drawing::Size(77, 20);
			this->textBox_equipeAtual->TabIndex = 49;
			// 
			// textBox_equipeNova
			// 
			this->textBox_equipeNova->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox_equipeNova->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox_equipeNova->Location = System::Drawing::Point(192, 194);
			this->textBox_equipeNova->Name = L"textBox_equipeNova";
			this->textBox_equipeNova->Size = System::Drawing::Size(77, 20);
			this->textBox_equipeNova->TabIndex = 51;
			// 
			// lb_equipeNova
			// 
			this->lb_equipeNova->AutoSize = true;
			this->lb_equipeNova->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lb_equipeNova->Location = System::Drawing::Point(27, 195);
			this->lb_equipeNova->Name = L"lb_equipeNova";
			this->lb_equipeNova->Size = System::Drawing::Size(148, 15);
			this->lb_equipeNova->TabIndex = 50;
			this->lb_equipeNova->Text = L"Equipe de trabalho [Novo]";
			// 
			// bt_proximo
			// 
			this->bt_proximo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_proximo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_proximo->Location = System::Drawing::Point(462, 84);
			this->bt_proximo->Margin = System::Windows::Forms::Padding(2);
			this->bt_proximo->Name = L"bt_proximo";
			this->bt_proximo->Size = System::Drawing::Size(94, 43);
			this->bt_proximo->TabIndex = 54;
			this->bt_proximo->Text = L"Próximo";
			this->bt_proximo->UseVisualStyleBackColor = false;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelar->Location = System::Drawing::Point(462, 216);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(2);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(94, 43);
			this->bt_cancelar->TabIndex = 52;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = false;
			// 
			// bt_confirmar
			// 
			this->bt_confirmar->BackColor = System::Drawing::Color::PowderBlue;
			this->bt_confirmar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_confirmar->Location = System::Drawing::Point(462, 145);
			this->bt_confirmar->Margin = System::Windows::Forms::Padding(2);
			this->bt_confirmar->Name = L"bt_confirmar";
			this->bt_confirmar->Size = System::Drawing::Size(94, 46);
			this->bt_confirmar->TabIndex = 55;
			this->bt_confirmar->Text = L"Voltar";
			this->bt_confirmar->UseVisualStyleBackColor = false;
			// 
			// alterarSaida1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 280);
			this->Controls->Add(this->bt_confirmar);
			this->Controls->Add(this->bt_proximo);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->textBox_equipeNova);
			this->Controls->Add(this->lb_equipeNova);
			this->Controls->Add(this->textBox_equipeAtual);
			this->Controls->Add(this->lb_equipeAtual);
			this->Controls->Add(this->dateTimePicker_Saida);
			this->Controls->Add(this->lb_dataSaida);
			this->Controls->Add(this->label_alterarSaida);
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
