#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for criarSaida
	/// </summary>
	public ref class criarSaida : public System::Windows::Forms::Form
	{
	public:
		criarSaida(void)
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
		~criarSaida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_criarSaida;
	protected:

	private: System::Windows::Forms::Button^  bt_proximo;
	private: System::Windows::Forms::ListBox^  listBox_ordenadasOS;
	private: System::Windows::Forms::Label^  label_disponiveisOS;
	private: System::Windows::Forms::Label^  label_ordenadasOS;




	private: System::Windows::Forms::Button^  bt_removerOS;

	private: System::Windows::Forms::Button^  bt_incluirOS;

	private: System::Windows::Forms::ListBox^  listBox_disponiveisOS;

	private: System::Windows::Forms::Button^  bt_cancelar;

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
			this->label_criarSaida = (gcnew System::Windows::Forms::Label());
			this->bt_proximo = (gcnew System::Windows::Forms::Button());
			this->listBox_ordenadasOS = (gcnew System::Windows::Forms::ListBox());
			this->label_disponiveisOS = (gcnew System::Windows::Forms::Label());
			this->label_ordenadasOS = (gcnew System::Windows::Forms::Label());
			this->bt_removerOS = (gcnew System::Windows::Forms::Button());
			this->bt_incluirOS = (gcnew System::Windows::Forms::Button());
			this->listBox_disponiveisOS = (gcnew System::Windows::Forms::ListBox());
			this->bt_cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_criarSaida
			// 
			this->label_criarSaida->AutoSize = true;
			this->label_criarSaida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label_criarSaida->Location = System::Drawing::Point(232, 21);
			this->label_criarSaida->Name = L"label_criarSaida";
			this->label_criarSaida->Size = System::Drawing::Size(101, 24);
			this->label_criarSaida->TabIndex = 0;
			this->label_criarSaida->Text = L"Criar Saída";
			// 
			// bt_proximo
			// 
			this->bt_proximo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_proximo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_proximo->Location = System::Drawing::Point(438, 215);
			this->bt_proximo->Margin = System::Windows::Forms::Padding(2);
			this->bt_proximo->Name = L"bt_proximo";
			this->bt_proximo->Size = System::Drawing::Size(95, 41);
			this->bt_proximo->TabIndex = 51;
			this->bt_proximo->Text = L"Próximo";
			this->bt_proximo->UseVisualStyleBackColor = false;
			// 
			// listBox_ordenadasOS
			// 
			this->listBox_ordenadasOS->FormattingEnabled = true;
			this->listBox_ordenadasOS->Location = System::Drawing::Point(247, 115);
			this->listBox_ordenadasOS->Name = L"listBox_ordenadasOS";
			this->listBox_ordenadasOS->Size = System::Drawing::Size(149, 329);
			this->listBox_ordenadasOS->TabIndex = 50;
			// 
			// label_disponiveisOS
			// 
			this->label_disponiveisOS->AutoSize = true;
			this->label_disponiveisOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label_disponiveisOS->Location = System::Drawing::Point(60, 84);
			this->label_disponiveisOS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_disponiveisOS->Name = L"label_disponiveisOS";
			this->label_disponiveisOS->Size = System::Drawing::Size(88, 15);
			this->label_disponiveisOS->TabIndex = 49;
			this->label_disponiveisOS->Text = L"OS disponíveis";
			// 
			// label_ordenadasOS
			// 
			this->label_ordenadasOS->AutoSize = true;
			this->label_ordenadasOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label_ordenadasOS->Location = System::Drawing::Point(281, 84);
			this->label_ordenadasOS->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_ordenadasOS->Name = L"label_ordenadasOS";
			this->label_ordenadasOS->Size = System::Drawing::Size(86, 15);
			this->label_ordenadasOS->TabIndex = 48;
			this->label_ordenadasOS->Text = L"OS ordenadas";
			// 
			// bt_removerOS
			// 
			this->bt_removerOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_removerOS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_removerOS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bt_removerOS->Location = System::Drawing::Point(191, 282);
			this->bt_removerOS->Name = L"bt_removerOS";
			this->bt_removerOS->Size = System::Drawing::Size(42, 20);
			this->bt_removerOS->TabIndex = 47;
			this->bt_removerOS->Text = L"<<";
			this->bt_removerOS->UseVisualStyleBackColor = false;
			// 
			// bt_incluirOS
			// 
			this->bt_incluirOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_incluirOS->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_incluirOS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bt_incluirOS->Location = System::Drawing::Point(191, 240);
			this->bt_incluirOS->Name = L"bt_incluirOS";
			this->bt_incluirOS->Size = System::Drawing::Size(42, 20);
			this->bt_incluirOS->TabIndex = 46;
			this->bt_incluirOS->Text = L">>";
			this->bt_incluirOS->UseVisualStyleBackColor = false;
			// 
			// listBox_disponiveisOS
			// 
			this->listBox_disponiveisOS->FormattingEnabled = true;
			this->listBox_disponiveisOS->Location = System::Drawing::Point(28, 115);
			this->listBox_disponiveisOS->Name = L"listBox_disponiveisOS";
			this->listBox_disponiveisOS->Size = System::Drawing::Size(149, 329);
			this->listBox_disponiveisOS->TabIndex = 45;
			// 
			// bt_cancelar
			// 
			this->bt_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_cancelar->Location = System::Drawing::Point(438, 301);
			this->bt_cancelar->Margin = System::Windows::Forms::Padding(2);
			this->bt_cancelar->Name = L"bt_cancelar";
			this->bt_cancelar->Size = System::Drawing::Size(95, 41);
			this->bt_cancelar->TabIndex = 44;
			this->bt_cancelar->Text = L"Cancelar";
			this->bt_cancelar->UseVisualStyleBackColor = false;
			// 
			// criarSaida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 500);
			this->Controls->Add(this->bt_proximo);
			this->Controls->Add(this->listBox_ordenadasOS);
			this->Controls->Add(this->label_disponiveisOS);
			this->Controls->Add(this->label_ordenadasOS);
			this->Controls->Add(this->bt_removerOS);
			this->Controls->Add(this->bt_incluirOS);
			this->Controls->Add(this->listBox_disponiveisOS);
			this->Controls->Add(this->bt_cancelar);
			this->Controls->Add(this->label_criarSaida);
			this->Name = L"criarSaida";
			this->Text = L"criarSaida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
