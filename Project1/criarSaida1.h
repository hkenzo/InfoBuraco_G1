#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for criarSaida1
	/// </summary>
	public ref class criarSaida1 : public System::Windows::Forms::Form
	{
	public:
		criarSaida1(void)
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
		~criarSaida1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_voltar;
	protected:

	private: System::Windows::Forms::Button^  bt_proximo;
	private: System::Windows::Forms::Button^  bt_cancelar;
	protected:


	private: System::Windows::Forms::TextBox^  tbox_equipe;

	private: System::Windows::Forms::Label^  lb_equipe;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_saida;

	private: System::Windows::Forms::Label^  lb_dataSaida;


	private: System::Windows::Forms::Label^  lb_criarSaida;
	private: System::Windows::Forms::TextBox^  tbox_horasEstimadas;


	private: System::Windows::Forms::Label^  lb_horasEstimadas;


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
			this->bt_voltar = (gcnew System::Windows::Forms::Button());
			this->bt_proximo = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->tbox_equipe = (gcnew System::Windows::Forms::TextBox());
			this->lb_equipe = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_saida = (gcnew System::Windows::Forms::DateTimePicker());
			this->lb_dataSaida = (gcnew System::Windows::Forms::Label());
			this->lb_criarSaida = (gcnew System::Windows::Forms::Label());
			this->tbox_horasEstimadas = (gcnew System::Windows::Forms::TextBox());
			this->lb_horasEstimadas = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_voltar
			// 
			this->bt_voltar->BackColor = System::Drawing::Color::PowderBlue;
			this->bt_voltar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_voltar->Location = System::Drawing::Point(473, 144);
			this->bt_voltar->Margin = System::Windows::Forms::Padding(2);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(94, 46);
			this->bt_voltar->TabIndex = 65;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = false;
			// 
			// bt_proximo
			// 
			this->bt_proximo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_proximo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_proximo->Location = System::Drawing::Point(473, 83);
			this->bt_proximo->Margin = System::Windows::Forms::Padding(2);
			this->bt_proximo->Name = L"bt_proximo";
			this->bt_proximo->Size = System::Drawing::Size(94, 43);
			this->bt_proximo->TabIndex = 64;
			this->bt_proximo->Text = L"Próximo";
			this->bt_proximo->UseVisualStyleBackColor = false;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelar->Location = System::Drawing::Point(473, 215);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(2);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(94, 43);
			this->bt_cancelar->TabIndex = 63;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = false;
			// 
			// tbox_equipe
			// 
			this->tbox_equipe->BackColor = System::Drawing::SystemColors::HighlightText;
			this->tbox_equipe->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tbox_equipe->Location = System::Drawing::Point(188, 165);
			this->tbox_equipe->Name = L"tbox_equipe";
			this->tbox_equipe->Size = System::Drawing::Size(77, 20);
			this->tbox_equipe->TabIndex = 62;
			// 
			// lb_equipe
			// 
			this->lb_equipe->AutoSize = true;
			this->lb_equipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_equipe->Location = System::Drawing::Point(42, 166);
			this->lb_equipe->Name = L"lb_equipe";
			this->lb_equipe->Size = System::Drawing::Size(128, 17);
			this->lb_equipe->TabIndex = 61;
			this->lb_equipe->Text = L"Equipe de trabalho";
			// 
			// dateTimePicker_saida
			// 
			this->dateTimePicker_saida->Location = System::Drawing::Point(188, 113);
			this->dateTimePicker_saida->Name = L"dateTimePicker_saida";
			this->dateTimePicker_saida->Size = System::Drawing::Size(229, 20);
			this->dateTimePicker_saida->TabIndex = 58;
			// 
			// lb_dataSaida
			// 
			this->lb_dataSaida->AutoSize = true;
			this->lb_dataSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_dataSaida->Location = System::Drawing::Point(132, 113);
			this->lb_dataSaida->Name = L"lb_dataSaida";
			this->lb_dataSaida->Size = System::Drawing::Size(38, 17);
			this->lb_dataSaida->TabIndex = 57;
			this->lb_dataSaida->Text = L"Data";
			// 
			// lb_criarSaida
			// 
			this->lb_criarSaida->AutoSize = true;
			this->lb_criarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lb_criarSaida->Location = System::Drawing::Point(243, 15);
			this->lb_criarSaida->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lb_criarSaida->Name = L"lb_criarSaida";
			this->lb_criarSaida->Size = System::Drawing::Size(101, 24);
			this->lb_criarSaida->TabIndex = 56;
			this->lb_criarSaida->Text = L"Criar Saída";
			// 
			// tbox_horasEstimadas
			// 
			this->tbox_horasEstimadas->Location = System::Drawing::Point(188, 215);
			this->tbox_horasEstimadas->Name = L"tbox_horasEstimadas";
			this->tbox_horasEstimadas->Size = System::Drawing::Size(65, 20);
			this->tbox_horasEstimadas->TabIndex = 79;
			// 
			// lb_horasEstimadas
			// 
			this->lb_horasEstimadas->AutoSize = true;
			this->lb_horasEstimadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->lb_horasEstimadas->Location = System::Drawing::Point(56, 215);
			this->lb_horasEstimadas->Name = L"lb_horasEstimadas";
			this->lb_horasEstimadas->Size = System::Drawing::Size(114, 17);
			this->lb_horasEstimadas->TabIndex = 78;
			this->lb_horasEstimadas->Text = L"Horas estimadas";
			// 
			// criarSaida1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 280);
			this->Controls->Add(this->tbox_horasEstimadas);
			this->Controls->Add(this->lb_horasEstimadas);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->bt_proximo);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->tbox_equipe);
			this->Controls->Add(this->lb_equipe);
			this->Controls->Add(this->dateTimePicker_saida);
			this->Controls->Add(this->lb_dataSaida);
			this->Controls->Add(this->lb_criarSaida);
			this->Name = L"criarSaida1";
			this->Text = L"criarSaida1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
