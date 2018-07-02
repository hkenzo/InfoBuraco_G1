#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for alterarSaida2
	/// </summary>
	public ref class alterarSaida2 : public System::Windows::Forms::Form
	{
	public:
		alterarSaida2(void)
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
		~alterarSaida2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_voltar;
	protected:

	private: System::Windows::Forms::Button^  bt_finalizar;
	private: System::Windows::Forms::Button^  bt_cancelar;
	protected:


	private: System::Windows::Forms::Label^  lb_alterarSaida;
	private: System::Windows::Forms::Label^  lb_tipoEquipamento;
	private: System::Windows::Forms::ComboBox^  comboBox_tipoEquipamento;
	private: System::Windows::Forms::Label^  lb_qtdEquipamentoAtual;
	private: System::Windows::Forms::TextBox^  tbox_qtdEquipamentoAtual;
	private: System::Windows::Forms::TextBox^  tbox_qtdEquipamentoNovo;







	private: System::Windows::Forms::Label^  lb_qtdEquipamentoNovo;






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
			this->bt_finalizar = (gcnew System::Windows::Forms::Button());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->lb_alterarSaida = (gcnew System::Windows::Forms::Label());
			this->lb_tipoEquipamento = (gcnew System::Windows::Forms::Label());
			this->comboBox_tipoEquipamento = (gcnew System::Windows::Forms::ComboBox());
			this->lb_qtdEquipamentoAtual = (gcnew System::Windows::Forms::Label());
			this->tbox_qtdEquipamentoAtual = (gcnew System::Windows::Forms::TextBox());
			this->tbox_qtdEquipamentoNovo = (gcnew System::Windows::Forms::TextBox());
			this->lb_qtdEquipamentoNovo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_voltar
			// 
			this->bt_voltar->BackColor = System::Drawing::Color::PowderBlue;
			this->bt_voltar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_voltar->Location = System::Drawing::Point(338, 144);
			this->bt_voltar->Margin = System::Windows::Forms::Padding(2);
			this->bt_voltar->Name = L"bt_voltar";
			this->bt_voltar->Size = System::Drawing::Size(94, 46);
			this->bt_voltar->TabIndex = 58;
			this->bt_voltar->Text = L"Voltar";
			this->bt_voltar->UseVisualStyleBackColor = false;
			// 
			// bt_finalizar
			// 
			this->bt_finalizar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_finalizar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_finalizar->Location = System::Drawing::Point(338, 83);
			this->bt_finalizar->Margin = System::Windows::Forms::Padding(2);
			this->bt_finalizar->Name = L"bt_finalizar";
			this->bt_finalizar->Size = System::Drawing::Size(94, 43);
			this->bt_finalizar->TabIndex = 57;
			this->bt_finalizar->Text = L"Finalizar";
			this->bt_finalizar->UseVisualStyleBackColor = false;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelar->Location = System::Drawing::Point(338, 215);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(2);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(94, 43);
			this->bt_cancelar->TabIndex = 56;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = false;
			// 
			// lb_alterarSaida
			// 
			this->lb_alterarSaida->AutoSize = true;
			this->lb_alterarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lb_alterarSaida->Location = System::Drawing::Point(175, 9);
			this->lb_alterarSaida->Name = L"lb_alterarSaida";
			this->lb_alterarSaida->Size = System::Drawing::Size(116, 24);
			this->lb_alterarSaida->TabIndex = 59;
			this->lb_alterarSaida->Text = L"Alterar Saída";
			this->lb_alterarSaida->Click += gcnew System::EventHandler(this, &alterarSaida2::label1_Click);
			// 
			// lb_tipoEquipamento
			// 
			this->lb_tipoEquipamento->AutoSize = true;
			this->lb_tipoEquipamento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lb_tipoEquipamento->Location = System::Drawing::Point(29, 87);
			this->lb_tipoEquipamento->Name = L"lb_tipoEquipamento";
			this->lb_tipoEquipamento->Size = System::Drawing::Size(125, 15);
			this->lb_tipoEquipamento->TabIndex = 60;
			this->lb_tipoEquipamento->Text = L"Tipo de Equipamento";
			// 
			// comboBox_tipoEquipamento
			// 
			this->comboBox_tipoEquipamento->FormattingEnabled = true;
			this->comboBox_tipoEquipamento->Location = System::Drawing::Point(170, 85);
			this->comboBox_tipoEquipamento->Name = L"comboBox_tipoEquipamento";
			this->comboBox_tipoEquipamento->Size = System::Drawing::Size(141, 21);
			this->comboBox_tipoEquipamento->TabIndex = 61;
			// 
			// lb_qtdEquipamentoAtual
			// 
			this->lb_qtdEquipamentoAtual->AutoSize = true;
			this->lb_qtdEquipamentoAtual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lb_qtdEquipamentoAtual->Location = System::Drawing::Point(47, 158);
			this->lb_qtdEquipamentoAtual->Name = L"lb_qtdEquipamentoAtual";
			this->lb_qtdEquipamentoAtual->Size = System::Drawing::Size(107, 15);
			this->lb_qtdEquipamentoAtual->TabIndex = 62;
			this->lb_qtdEquipamentoAtual->Text = L"Quantidade [Atual]";
			// 
			// tbox_qtdEquipamentoAtual
			// 
			this->tbox_qtdEquipamentoAtual->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tbox_qtdEquipamentoAtual->Location = System::Drawing::Point(170, 158);
			this->tbox_qtdEquipamentoAtual->Name = L"tbox_qtdEquipamentoAtual";
			this->tbox_qtdEquipamentoAtual->Size = System::Drawing::Size(65, 20);
			this->tbox_qtdEquipamentoAtual->TabIndex = 63;
			// 
			// tbox_qtdEquipamentoNovo
			// 
			this->tbox_qtdEquipamentoNovo->Location = System::Drawing::Point(170, 201);
			this->tbox_qtdEquipamentoNovo->Name = L"tbox_qtdEquipamentoNovo";
			this->tbox_qtdEquipamentoNovo->Size = System::Drawing::Size(65, 20);
			this->tbox_qtdEquipamentoNovo->TabIndex = 65;
			// 
			// lb_qtdEquipamentoNovo
			// 
			this->lb_qtdEquipamentoNovo->AutoSize = true;
			this->lb_qtdEquipamentoNovo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->lb_qtdEquipamentoNovo->Location = System::Drawing::Point(47, 202);
			this->lb_qtdEquipamentoNovo->Name = L"lb_qtdEquipamentoNovo";
			this->lb_qtdEquipamentoNovo->Size = System::Drawing::Size(108, 15);
			this->lb_qtdEquipamentoNovo->TabIndex = 64;
			this->lb_qtdEquipamentoNovo->Text = L"Quantidade [Novo]";
			this->lb_qtdEquipamentoNovo->Click += gcnew System::EventHandler(this, &alterarSaida2::label4_Click);
			// 
			// alterarSaida2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 282);
			this->Controls->Add(this->tbox_qtdEquipamentoNovo);
			this->Controls->Add(this->lb_qtdEquipamentoNovo);
			this->Controls->Add(this->tbox_qtdEquipamentoAtual);
			this->Controls->Add(this->lb_qtdEquipamentoAtual);
			this->Controls->Add(this->comboBox_tipoEquipamento);
			this->Controls->Add(this->lb_tipoEquipamento);
			this->Controls->Add(this->lb_alterarSaida);
			this->Controls->Add(this->bt_voltar);
			this->Controls->Add(this->bt_finalizar);
			this->Controls->Add(this->bt_cancelar);
			this->Name = L"alterarSaida2";
			this->Text = L"alterarSaida2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
