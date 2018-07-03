#pragma once
#include "OS.h"
#include "OSDAO.h"
#include "buracos.h"
#include "buracoDAO.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <stdlib.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChefeEquipeTrabalho
	/// </summary>
	public ref class ChefeEquipeTrabalho : public System::Windows::Forms::Form
	{
	public:
		String ^ nomeEquipe;
		ChefeEquipeTrabalho(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		ChefeEquipeTrabalho(String^ str1)
		{
			InitializeComponent();
			nomeEquipe = str1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChefeEquipeTrabalho()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;

	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::Button^  fechar_bt;
	private: System::Windows::Forms::Button^  alterarStatus_bt;
	private: System::Windows::Forms::Button^  atualizar_bt;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buraco_bt;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->fechar_bt = (gcnew System::Windows::Forms::Button());
			this->alterarStatus_bt = (gcnew System::Windows::Forms::Button());
			this->atualizar_bt = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buraco_bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader12, this->columnHeader13,
					this->columnHeader14, this->columnHeader1, this->columnHeader2, this->columnHeader3
			});
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->Location = System::Drawing::Point(2, 8);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(492, 223);
			this->listView1->TabIndex = 10;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &ChefeEquipeTrabalho::listView1_ItemChecked);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::listView1_SelectedIndexChanged);
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"EstimativaHoras";
			this->columnHeader12->Width = 90;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"EstimativaEquip";
			this->columnHeader13->Width = 89;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"EstimativaMaterial";
			this->columnHeader14->Width = 96;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"NumeroOS";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"StatusOS";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"NumeroBuraco";
			this->columnHeader3->Width = 93;
			// 
			// fechar_bt
			// 
			this->fechar_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->fechar_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->fechar_bt->Location = System::Drawing::Point(498, 191);
			this->fechar_bt->Margin = System::Windows::Forms::Padding(2);
			this->fechar_bt->Name = L"fechar_bt";
			this->fechar_bt->Size = System::Drawing::Size(135, 40);
			this->fechar_bt->TabIndex = 9;
			this->fechar_bt->Text = L"Finalizar";
			this->fechar_bt->UseVisualStyleBackColor = false;
			this->fechar_bt->Click += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::fechar_bt_Click);
			// 
			// alterarStatus_bt
			// 
			this->alterarStatus_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->alterarStatus_bt->Enabled = false;
			this->alterarStatus_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->alterarStatus_bt->Location = System::Drawing::Point(498, 147);
			this->alterarStatus_bt->Margin = System::Windows::Forms::Padding(2);
			this->alterarStatus_bt->Name = L"alterarStatus_bt";
			this->alterarStatus_bt->Size = System::Drawing::Size(135, 40);
			this->alterarStatus_bt->TabIndex = 8;
			this->alterarStatus_bt->Text = L"Marcar finalizado";
			this->alterarStatus_bt->UseVisualStyleBackColor = false;
			this->alterarStatus_bt->Click += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::alterarStatus_bt_Click);
			// 
			// atualizar_bt
			// 
			this->atualizar_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->atualizar_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->atualizar_bt->Location = System::Drawing::Point(498, 15);
			this->atualizar_bt->Margin = System::Windows::Forms::Padding(2);
			this->atualizar_bt->Name = L"atualizar_bt";
			this->atualizar_bt->Size = System::Drawing::Size(135, 40);
			this->atualizar_bt->TabIndex = 6;
			this->atualizar_bt->Text = L"Atualizar OS";
			this->atualizar_bt->UseVisualStyleBackColor = false;
			this->atualizar_bt->Click += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::atualizar_bt_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(498, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Marcar incompleto";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::button1_Click);
			// 
			// buraco_bt
			// 
			this->buraco_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buraco_bt->Enabled = false;
			this->buraco_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buraco_bt->Location = System::Drawing::Point(498, 59);
			this->buraco_bt->Margin = System::Windows::Forms::Padding(2);
			this->buraco_bt->Name = L"buraco_bt";
			this->buraco_bt->Size = System::Drawing::Size(135, 40);
			this->buraco_bt->TabIndex = 12;
			this->buraco_bt->Text = L"Ver Buraco";
			this->buraco_bt->UseVisualStyleBackColor = false;
			this->buraco_bt->Click += gcnew System::EventHandler(this, &ChefeEquipeTrabalho::buraco_bt_Click);
			// 
			// ChefeEquipeTrabalho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 242);
			this->Controls->Add(this->buraco_bt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->fechar_bt);
			this->Controls->Add(this->alterarStatus_bt);
			this->Controls->Add(this->atualizar_bt);
			this->Name = L"ChefeEquipeTrabalho";
			this->Text = L"ChefeEquipeTrabalho";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void listView1_ItemChecked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
	if (listView1->CheckedIndices->Count != 1) {
		this->button1->Enabled = false;
		this->alterarStatus_bt->Enabled = false;
		this->buraco_bt->Enabled = false;
	}
	else {
		this->button1->Enabled = true;
		this->alterarStatus_bt->Enabled = true;
		this->buraco_bt->Enabled = true;
	}
}
private: System::Void atualizar_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	OSDAO * aux = new OSDAO();
	vector<OS*>* temp2;
	this->listView1->Items->Clear();
	string nom = "nome";
	temp2 = aux->getOSEquip(nom);

	for (int j = 0; j < temp2->size(); j++) {
		String^ str1 = gcnew String(std::to_string(temp2->at(j)->getEstimativaHoras()).c_str());
		String^ str2 = gcnew String(std::to_string(temp2->at(j)->getEstimativaEquipamento()).c_str());
		String^ str3 = gcnew String(std::to_string(temp2->at(j)->getEstimativaMaterial()).c_str());
		String^ str4 = gcnew String(std::to_string(temp2->at(j)->getNumOS()).c_str());
		String^ str5 = gcnew String(std::to_string(temp2->at(j)->getStatusOS()).c_str());
		String^ str6 = gcnew String(std::to_string(temp2->at(j)->getNumBuraco()).c_str());

		listViewItem = gcnew Windows::Forms::ListViewItem(str1);
		listViewItem->SubItems->Add(str2);
		listViewItem->SubItems->Add(str3);
		listViewItem->SubItems->Add(str4);
		listViewItem->SubItems->Add(str5);
		listViewItem->SubItems->Add(str6);
		this->listView1->Items->Add(this->listViewItem);
	}
}
private: System::Void alterarStatus_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str = listView1->CheckedItems[0]->SubItems[4]->Text;
	String^ str2 = listView1->CheckedItems[0]->SubItems[6]->Text;
	std::string nume = msclr::interop::marshal_as<std::string>(str);
	std::string numeb = msclr::interop::marshal_as<std::string>(str2);

	int num = std::stoi(nume);
	int num2 = std::stoi(numeb);

	buracoDAO* aux2 = new buracoDAO();
	OSDAO* aux = new OSDAO();
	aux->setStatusD(2, num);
	aux2->setStatusBur(1, num2);

}
private: System::Void fechar_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str = listView1->CheckedItems[0]->SubItems[4]->Text;
	std::string nume = msclr::interop::marshal_as<std::string>(str);

	int num = std::stoi(nume);
	OSDAO* aux = new OSDAO();
	aux->setStatusD(1, num);
}
private: System::Void buraco_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str = listView1->CheckedItems[0]->SubItems[6]->Text;
	std::string nume = msclr::interop::marshal_as<std::string>(str);

	int num = std::stoi(nume);
	buracoDAO* aux = new buracoDAO();
	buracos * buraco;
//	buraco = aux->getBuraco(num);
}
};
}
