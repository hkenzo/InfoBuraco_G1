#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for alterarSaida
	/// </summary>
	public ref class alterarSaida : public System::Windows::Forms::Form
	{
	public:
		alterarSaida(void)
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
		~alterarSaida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_alterarSaida;
	private: System::Windows::Forms::Button^  bt_cancelar;
	protected:

	protected:


	private: System::Windows::Forms::ListBox^  listBox_disponiveisOS;
	private: System::Windows::Forms::Button^  bt_incluirOS;
	private: System::Windows::Forms::Button^  bt_removerOS;






	private: System::Windows::Forms::Label^  label_ordenadasOS;


	private: System::Windows::Forms::Label^  label_disponiveis_OS;
	private: System::Windows::Forms::ListBox^  listBox_ordenadasOS;
	private: System::Windows::Forms::Button^  bt_proximo;





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
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->listBox_disponiveisOS = (gcnew System::Windows::Forms::ListBox());
			this->bt_incluirOS = (gcnew System::Windows::Forms::Button());
			this->bt_removerOS = (gcnew System::Windows::Forms::Button());
			this->label_ordenadasOS = (gcnew System::Windows::Forms::Label());
			this->label_disponiveis_OS = (gcnew System::Windows::Forms::Label());
			this->listBox_ordenadasOS = (gcnew System::Windows::Forms::ListBox());
			this->bt_proximo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_alterarSaida
			// 
			this->label_alterarSaida->AutoSize = true;
			this->label_alterarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label_alterarSaida->Location = System::Drawing::Point(309, 28);
			this->label_alterarSaida->Name = L"label_alterarSaida";
			this->label_alterarSaida->Size = System::Drawing::Size(151, 29);
			this->label_alterarSaida->TabIndex = 34;
			this->label_alterarSaida->Text = L"Alterar Saída";
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelar->Location = System::Drawing::Point(584, 377);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(127, 50);
			this->bt_cancelar->TabIndex = 32;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = false;
			// 
			// listBox_disponiveisOS
			// 
			this->listBox_disponiveisOS->FormattingEnabled = true;
			this->listBox_disponiveisOS->ItemHeight = 16;
			this->listBox_disponiveisOS->Location = System::Drawing::Point(37, 148);
			this->listBox_disponiveisOS->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox_disponiveisOS->Name = L"listBox_disponiveisOS";
			this->listBox_disponiveisOS->Size = System::Drawing::Size(197, 404);
			this->listBox_disponiveisOS->TabIndex = 36;
			// 
			// bt_incluirOS
			// 
			this->bt_incluirOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_incluirOS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_incluirOS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bt_incluirOS->Location = System::Drawing::Point(255, 302);
			this->bt_incluirOS->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_incluirOS->Name = L"bt_incluirOS";
			this->bt_incluirOS->Size = System::Drawing::Size(56, 25);
			this->bt_incluirOS->TabIndex = 37;
			this->bt_incluirOS->Text = L">>";
			this->bt_incluirOS->UseVisualStyleBackColor = false;
			// 
			// bt_removerOS
			// 
			this->bt_removerOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_removerOS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_removerOS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bt_removerOS->Location = System::Drawing::Point(255, 353);
			this->bt_removerOS->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_removerOS->Name = L"bt_removerOS";
			this->bt_removerOS->Size = System::Drawing::Size(56, 25);
			this->bt_removerOS->TabIndex = 38;
			this->bt_removerOS->Text = L"<<";
			this->bt_removerOS->UseVisualStyleBackColor = false;
			// 
			// label_ordenadasOS
			// 
			this->label_ordenadasOS->AutoSize = true;
			this->label_ordenadasOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label_ordenadasOS->Location = System::Drawing::Point(373, 110);
			this->label_ordenadasOS->Name = L"label_ordenadasOS";
			this->label_ordenadasOS->Size = System::Drawing::Size(104, 18);
			this->label_ordenadasOS->TabIndex = 40;
			this->label_ordenadasOS->Text = L"OS ordenadas";
			this->label_ordenadasOS->Click += gcnew System::EventHandler(this, &alterarSaida::label1_Click);
			// 
			// label_disponiveis_OS
			// 
			this->label_disponiveis_OS->AutoSize = true;
			this->label_disponiveis_OS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label_disponiveis_OS->Location = System::Drawing::Point(80, 110);
			this->label_disponiveis_OS->Name = L"label_disponiveis_OS";
			this->label_disponiveis_OS->Size = System::Drawing::Size(107, 18);
			this->label_disponiveis_OS->TabIndex = 41;
			this->label_disponiveis_OS->Text = L"OS disponíveis";
			this->label_disponiveis_OS->Click += gcnew System::EventHandler(this, &alterarSaida::label2_Click);
			// 
			// listBox_ordenadasOS
			// 
			this->listBox_ordenadasOS->FormattingEnabled = true;
			this->listBox_ordenadasOS->ItemHeight = 16;
			this->listBox_ordenadasOS->Location = System::Drawing::Point(329, 148);
			this->listBox_ordenadasOS->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox_ordenadasOS->Name = L"listBox_ordenadasOS";
			this->listBox_ordenadasOS->Size = System::Drawing::Size(197, 404);
			this->listBox_ordenadasOS->TabIndex = 42;
			// 
			// bt_proximo
			// 
			this->bt_proximo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_proximo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_proximo->Location = System::Drawing::Point(584, 271);
			this->bt_proximo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bt_proximo->Name = L"bt_proximo";
			this->bt_proximo->Size = System::Drawing::Size(127, 50);
			this->bt_proximo->TabIndex = 43;
			this->bt_proximo->Text = L"Próximo";
			this->bt_proximo->UseVisualStyleBackColor = false;
			// 
			// alterarSaida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 618);
			this->Controls->Add(this->bt_proximo);
			this->Controls->Add(this->listBox_ordenadasOS);
			this->Controls->Add(this->label_disponiveis_OS);
			this->Controls->Add(this->label_ordenadasOS);
			this->Controls->Add(this->bt_removerOS);
			this->Controls->Add(this->bt_incluirOS);
			this->Controls->Add(this->listBox_disponiveisOS);
			this->Controls->Add(this->label_alterarSaida);
			this->Controls->Add(this->bt_cancelar);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"alterarSaida";
			this->Text = L"alterarSaida";
			this->Load += gcnew System::EventHandler(this, &alterarSaida::alterarSaida_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void alterarSaida_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
