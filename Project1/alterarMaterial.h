#include "material.h"
#include "MaterialDAO.h"
#include <msclr\marshal_cppstd.h>
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for alterarMaterial
	/// </summary>
	public ref class alterarMaterial : public System::Windows::Forms::Form
	{
	public:
		String ^ aux1;
		String^ aux2;
		String^ aux3;
		String^ aux4;
	public:
		alterarMaterial(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		alterarMaterial(String^ str1, String^ str2, String^ str3, String^ str4)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
			aux3 = str3;
			aux4 = str4;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~alterarMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  tipobox;
	protected:

	private: System::Windows::Forms::Button^  conf_creat_equipt_bt;
	private: System::Windows::Forms::Button^  cancel_create_equpt_bt;
	private: System::Windows::Forms::TextBox^  custobox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  unidadebox;
	private: System::Windows::Forms::TextBox^  novocustobox;





	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  idbox;
	private: System::Windows::Forms::Label^  label2;

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
			this->tipobox = (gcnew System::Windows::Forms::TextBox());
			this->conf_creat_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->cancel_create_equpt_bt = (gcnew System::Windows::Forms::Button());
			this->custobox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->unidadebox = (gcnew System::Windows::Forms::TextBox());
			this->novocustobox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->idbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(199, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 25);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Alterar Material";
			// 
			// tipobox
			// 
			this->tipobox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tipobox->Location = System::Drawing::Point(247, 145);
			this->tipobox->Margin = System::Windows::Forms::Padding(4);
			this->tipobox->Name = L"tipobox";
			this->tipobox->Size = System::Drawing::Size(285, 22);
			this->tipobox->TabIndex = 26;
			// 
			// conf_creat_equipt_bt
			// 
			this->conf_creat_equipt_bt->BackColor = System::Drawing::Color::PowderBlue;
			this->conf_creat_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->conf_creat_equipt_bt->Location = System::Drawing::Point(332, 419);
			this->conf_creat_equipt_bt->Name = L"conf_creat_equipt_bt";
			this->conf_creat_equipt_bt->Size = System::Drawing::Size(171, 36);
			this->conf_creat_equipt_bt->TabIndex = 25;
			this->conf_creat_equipt_bt->Text = L"Confirmar";
			this->conf_creat_equipt_bt->UseVisualStyleBackColor = false;
			this->conf_creat_equipt_bt->Click += gcnew System::EventHandler(this, &alterarMaterial::conf_creat_equipt_bt_Click);
			// 
			// cancel_create_equpt_bt
			// 
			this->cancel_create_equpt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cancel_create_equpt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_create_equpt_bt->Location = System::Drawing::Point(91, 419);
			this->cancel_create_equpt_bt->Name = L"cancel_create_equpt_bt";
			this->cancel_create_equpt_bt->Size = System::Drawing::Size(171, 36);
			this->cancel_create_equpt_bt->TabIndex = 24;
			this->cancel_create_equpt_bt->Text = L"Cancelar";
			this->cancel_create_equpt_bt->UseVisualStyleBackColor = false;
			this->cancel_create_equpt_bt->Click += gcnew System::EventHandler(this, &alterarMaterial::cancel_create_equpt_bt_Click);
			// 
			// custobox
			// 
			this->custobox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->custobox->Location = System::Drawing::Point(249, 283);
			this->custobox->Margin = System::Windows::Forms::Padding(4);
			this->custobox->Name = L"custobox";
			this->custobox->Size = System::Drawing::Size(285, 22);
			this->custobox->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 17);
			this->label4->TabIndex = 22;
			this->label4->Text = L"R$ / medida [Anterior]";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Unidade de Medida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 17);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Tipo";
			// 
			// unidadebox
			// 
			this->unidadebox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->unidadebox->Location = System::Drawing::Point(247, 211);
			this->unidadebox->Margin = System::Windows::Forms::Padding(4);
			this->unidadebox->Name = L"unidadebox";
			this->unidadebox->Size = System::Drawing::Size(285, 22);
			this->unidadebox->TabIndex = 18;
			// 
			// novocustobox
			// 
			this->novocustobox->Location = System::Drawing::Point(249, 348);
			this->novocustobox->Margin = System::Windows::Forms::Padding(4);
			this->novocustobox->Name = L"novocustobox";
			this->novocustobox->Size = System::Drawing::Size(285, 22);
			this->novocustobox->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"R$ / medida [Nova]";
			// 
			// idbox
			// 
			this->idbox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->idbox->Location = System::Drawing::Point(249, 84);
			this->idbox->Margin = System::Windows::Forms::Padding(4);
			this->idbox->Name = L"idbox";
			this->idbox->Size = System::Drawing::Size(285, 22);
			this->idbox->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Sequencial";
			// 
			// alterarMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(570, 492);
			this->Controls->Add(this->idbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->novocustobox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tipobox);
			this->Controls->Add(this->conf_creat_equipt_bt);
			this->Controls->Add(this->cancel_create_equpt_bt);
			this->Controls->Add(this->custobox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->unidadebox);
			this->Name = L"alterarMaterial";
			this->Text = L"alterarMaterial";
			this->Load += gcnew System::EventHandler(this, &alterarMaterial::alterarMaterial_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_create_equpt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void alterarMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
		this->tipobox->Text = aux1;
		this->idbox->Text = aux4;
		this->unidadebox->Text = aux2;
		this->custobox->Text = aux3;
		this->idbox->ReadOnly = true;
		this->unidadebox->ReadOnly = true;
		this->custobox->ReadOnly = true;
		this->tipobox->ReadOnly = true;
	}
	private: System::Void conf_creat_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		materialDAO * aux = new materialDAO();
		string id = msclr::interop::marshal_as<std::string>(this->idbox->Text);
		string novoCusto = msclr::interop::marshal_as<std::string>(this->custobox->Text);
		aux->alterarMaterialDAO(std::stoi(id, nullptr, 10), std::stoi(novoCusto, nullptr, 10));
		this->Close();
	}
};
}
