#include "saida.h"
#include "saidaDAO.h"
#include "saidaEquipe.h"
#include "OS.h"
#include "OSDAO.h"
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
		System::Windows::Forms::ListViewItem^ listViewItem;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  databox;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->databox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(887, 201);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 31;
			this->Confirm_Bt->Text = L"Selecionar Equipe";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &saidaOS::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(887, 377);
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
			this->listView1->Location = System::Drawing::Point(12, 111);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 25);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Indicar data e selecionar OS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(127, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 17);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Data";
			// 
			// databox
			// 
			this->databox->Location = System::Drawing::Point(184, 69);
			this->databox->Name = L"databox";
			this->databox->Size = System::Drawing::Size(261, 22);
			this->databox->TabIndex = 35;
			// 
			// saidaOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 571);
			this->Controls->Add(this->databox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Name = L"saidaOS";
			this->Text = L"saidaOS";
			this->Load += gcnew System::EventHandler(this, &saidaOS::saidaOS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count != 1) {
			this->Confirm_Bt->Enabled = false;
		}
		else {
			this->Confirm_Bt->Enabled = true;
		}
	}
	private: System::Void saidaOS_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		saidaDAO * aux = new saidaDAO();

		string data = msclr::interop::marshal_as<std::string>(this->databox->Text);
		string num = msclr::interop::marshal_as<std::string>(listView1->CheckedItems[0]->SubItems[3]->Text);
		saidaEquipe ^ aux2 = gcnew saidaEquipe(this->databox->Text, listView1->CheckedItems[0]->SubItems[3]->Text);
		aux->criarSaidaDAO(data, std::stoi(num, nullptr, 10));
		aux2->ShowDialog();
		this->Close();
	}

	private: Void atualizarDashboard() {
		OSDAO * aux = new OSDAO();
		vector<OS*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->getOS();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String(std::to_string(temp2->at(j)->getEstimativaHoras()).c_str());
			String^ str2 = gcnew String(std::to_string(temp2->at(j)->getEstimativaEquipamento()).c_str());
			String^ str3 = gcnew String(std::to_string(temp2->at(j)->getEstimativaMaterial()).c_str());
			String^ str4 = gcnew String(std::to_string(temp2->at(j)->getNumOS()).c_str());
			String^ str5 = gcnew String(std::to_string(temp2->at(j)->getStatusOS()).c_str());
			String^ str6 = gcnew String(std::to_string(temp2->at(j)->getNumBuraco()).c_str());
			
			if (temp2->at(j)->getStatusOS() < 2) {
				listViewItem = gcnew Windows::Forms::ListViewItem(str1);
				listViewItem->SubItems->Add(str2);
				listViewItem->SubItems->Add(str3);
				listViewItem->SubItems->Add(str4);
				listViewItem->SubItems->Add(str5);
				listViewItem->SubItems->Add(str6);
				this->listView1->Items->Add(this->listViewItem);
			}

		}
	}


	};
}
