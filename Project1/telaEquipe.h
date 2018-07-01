#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaEquipe
	/// </summary>
	public ref class telaEquipe : public System::Windows::Forms::Form
	{
	public:
		telaEquipe(void)
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
		~telaEquipe()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  AltStatus;
	private: System::Windows::Forms::Button^  Visu_button;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  OS;
	private: System::Windows::Forms::ColumnHeader^  Endereço;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;

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
			this->AltStatus = (gcnew System::Windows::Forms::Button());
			this->Visu_button = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->OS = (gcnew System::Windows::Forms::ColumnHeader());
			this->Endereço = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// AltStatus
			// 
			this->AltStatus->Location = System::Drawing::Point(230, 56);
			this->AltStatus->Name = L"AltStatus";
			this->AltStatus->Size = System::Drawing::Size(149, 39);
			this->AltStatus->TabIndex = 1;
			this->AltStatus->Text = L"Alterar Status";
			this->AltStatus->UseVisualStyleBackColor = true;
			// 
			// Visu_button
			// 
			this->Visu_button->Location = System::Drawing::Point(230, 117);
			this->Visu_button->Name = L"Visu_button";
			this->Visu_button->Size = System::Drawing::Size(149, 42);
			this->Visu_button->TabIndex = 2;
			this->Visu_button->Text = L"Visualizar";
			this->Visu_button->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->OS, this->Endereço,
					this->columnHeader1
			});
			this->listView1->Location = System::Drawing::Point(13, 25);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(211, 224);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// telaEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 261);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Visu_button);
			this->Controls->Add(this->AltStatus);
			this->Name = L"telaEquipe";
			this->Text = L"telaEquipe";
			this->Load += gcnew System::EventHandler(this, &telaEquipe::telaEquipe_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void telaEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
