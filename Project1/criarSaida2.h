#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for criarSaida2
	/// </summary>
	public ref class criarSaida2 : public System::Windows::Forms::Form
	{
	public:
		criarSaida2(void)
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
		~criarSaida2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_qtdEquipamento;
	private: System::Windows::Forms::Label^  label_qtdEquipamento;
	protected:


	protected:

	private: System::Windows::Forms::ComboBox^  comboBox_tipoEquipamento;

	private: System::Windows::Forms::Label^  label_tipoEquipamento;
	private: System::Windows::Forms::Label^  lb_adiocionarSaida;


	private: System::Windows::Forms::Button^  bt_voltarEquipamento;
	private: System::Windows::Forms::Button^  bt_finalizarEquipamento;



	private: System::Windows::Forms::Button^  bt_cancelarEquipamento;



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
			this->textBox_qtdEquipamento = (gcnew System::Windows::Forms::TextBox());
			this->label_qtdEquipamento = (gcnew System::Windows::Forms::Label());
			this->comboBox_tipoEquipamento = (gcnew System::Windows::Forms::ComboBox());
			this->label_tipoEquipamento = (gcnew System::Windows::Forms::Label());
			this->lb_adiocionarSaida = (gcnew System::Windows::Forms::Label());
			this->bt_voltarEquipamento = (gcnew System::Windows::Forms::Button());
			this->bt_finalizarEquipamento = (gcnew System::Windows::Forms::Button());
			this->bt_cancelarEquipamento = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_qtdEquipamento
			// 
			this->textBox_qtdEquipamento->Location = System::Drawing::Point(179, 159);
			this->textBox_qtdEquipamento->Name = L"textBox_qtdEquipamento";
			this->textBox_qtdEquipamento->Size = System::Drawing::Size(65, 20);
			this->textBox_qtdEquipamento->TabIndex = 75;
			// 
			// label_qtdEquipamento
			// 
			this->label_qtdEquipamento->AutoSize = true;
			this->label_qtdEquipamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_qtdEquipamento->Location = System::Drawing::Point(79, 158);
			this->label_qtdEquipamento->Name = L"label_qtdEquipamento";
			this->label_qtdEquipamento->Size = System::Drawing::Size(82, 17);
			this->label_qtdEquipamento->TabIndex = 74;
			this->label_qtdEquipamento->Text = L"Quantidade";
			// 
			// comboBox_tipoEquipamento
			// 
			this->comboBox_tipoEquipamento->FormattingEnabled = true;
			this->comboBox_tipoEquipamento->Location = System::Drawing::Point(179, 105);
			this->comboBox_tipoEquipamento->Name = L"comboBox_tipoEquipamento";
			this->comboBox_tipoEquipamento->Size = System::Drawing::Size(141, 21);
			this->comboBox_tipoEquipamento->TabIndex = 71;
			// 
			// label_tipoEquipamento
			// 
			this->label_tipoEquipamento->AutoSize = true;
			this->label_tipoEquipamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_tipoEquipamento->Location = System::Drawing::Point(18, 106);
			this->label_tipoEquipamento->Name = L"label_tipoEquipamento";
			this->label_tipoEquipamento->Size = System::Drawing::Size(143, 17);
			this->label_tipoEquipamento->TabIndex = 70;
			this->label_tipoEquipamento->Text = L"Tipo de Equipamento";
			// 
			// lb_adiocionarSaida
			// 
			this->lb_adiocionarSaida->AutoSize = true;
			this->lb_adiocionarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lb_adiocionarSaida->Location = System::Drawing::Point(184, 20);
			this->lb_adiocionarSaida->Name = L"lb_adiocionarSaida";
			this->lb_adiocionarSaida->Size = System::Drawing::Size(142, 24);
			this->lb_adiocionarSaida->TabIndex = 69;
			this->lb_adiocionarSaida->Text = L"Adicionar Saída";
			// 
			// bt_voltarEquipamento
			// 
			this->bt_voltarEquipamento->BackColor = System::Drawing::Color::PowderBlue;
			this->bt_voltarEquipamento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_voltarEquipamento->Location = System::Drawing::Point(372, 143);
			this->bt_voltarEquipamento->Margin = System::Windows::Forms::Padding(2);
			this->bt_voltarEquipamento->Name = L"bt_voltarEquipamento";
			this->bt_voltarEquipamento->Size = System::Drawing::Size(94, 46);
			this->bt_voltarEquipamento->TabIndex = 68;
			this->bt_voltarEquipamento->Text = L"Voltar";
			this->bt_voltarEquipamento->UseVisualStyleBackColor = false;
			// 
			// bt_finalizarEquipamento
			// 
			this->bt_finalizarEquipamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_finalizarEquipamento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_finalizarEquipamento->Location = System::Drawing::Point(372, 82);
			this->bt_finalizarEquipamento->Margin = System::Windows::Forms::Padding(2);
			this->bt_finalizarEquipamento->Name = L"bt_finalizarEquipamento";
			this->bt_finalizarEquipamento->Size = System::Drawing::Size(94, 43);
			this->bt_finalizarEquipamento->TabIndex = 67;
			this->bt_finalizarEquipamento->Text = L"Finalizar";
			this->bt_finalizarEquipamento->UseVisualStyleBackColor = false;
			// 
			// bt_cancelarEquipamento
			// 
			this->bt_cancelarEquipamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelarEquipamento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelarEquipamento->Location = System::Drawing::Point(372, 214);
			this->bt_cancelarEquipamento->Margin = System::Windows::Forms::Padding(2);
			this->bt_cancelarEquipamento->Name = L"bt_cancelarEquipamento";
			this->bt_cancelarEquipamento->Size = System::Drawing::Size(94, 43);
			this->bt_cancelarEquipamento->TabIndex = 66;
			this->bt_cancelarEquipamento->Text = L"Cancelar";
			this->bt_cancelarEquipamento->UseVisualStyleBackColor = false;
			// 
			// criarSaida2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(503, 284);
			this->Controls->Add(this->textBox_qtdEquipamento);
			this->Controls->Add(this->label_qtdEquipamento);
			this->Controls->Add(this->comboBox_tipoEquipamento);
			this->Controls->Add(this->label_tipoEquipamento);
			this->Controls->Add(this->lb_adiocionarSaida);
			this->Controls->Add(this->bt_voltarEquipamento);
			this->Controls->Add(this->bt_finalizarEquipamento);
			this->Controls->Add(this->bt_cancelarEquipamento);
			this->Name = L"criarSaida2";
			this->Text = L"criarSaida2";
			this->Load += gcnew System::EventHandler(this, &criarSaida2::criarSaida2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void criarSaida2_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
