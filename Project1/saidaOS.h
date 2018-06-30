#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for saidaOS
	/// </summary>
	public ref class saidaOS : public System::Windows::Forms::Form
	{
	public:
		saidaOS(void)
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
		~saidaOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Confirm_Bt;
	protected:
	private: System::Windows::Forms::Button^  Cancel_BT;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  estimativaHoras;
	private: System::Windows::Forms::ColumnHeader^  estimativaEquipamento;
	private: System::Windows::Forms::ColumnHeader^  estimativaMaterial;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;

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
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->estimativaHoras = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaEquipamento = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaMaterial = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(877, 106);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 31;
			this->Confirm_Bt->Text = L"Próximo";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(877, 282);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 30;
			this->Cancel_BT->Text = L"Voltar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->estimativaHoras,
					this->estimativaEquipamento, this->estimativaMaterial, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView1->Location = System::Drawing::Point(2, 16);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(862, 459);
			this->listView1->TabIndex = 32;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &saidaOS::checked);
			// 
			// estimativaHoras
			// 
			this->estimativaHoras->Text = L"estimativaHoras";
			this->estimativaHoras->Width = 117;
			// 
			// estimativaEquipamento
			// 
			this->estimativaEquipamento->Text = L"estimativaEquipamento";
			this->estimativaEquipamento->Width = 156;
			// 
			// estimativaMaterial
			// 
			this->estimativaMaterial->Text = L"estimativaMaterial";
			this->estimativaMaterial->Width = 128;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"numOS";
			this->columnHeader4->Width = 58;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"statusOS";
			this->columnHeader5->Width = 70;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"numBuraco";
			this->columnHeader6->Width = 93;
			// 
			// saidaOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 492);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Name = L"saidaOS";
			this->Text = L"saidaOS";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
	}
	};
}
