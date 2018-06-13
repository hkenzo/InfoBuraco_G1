#include <iostream>
#include "CriarEquipamento.h"
#include "RemoverEquipamento.h"
#include "AlterarEquipamento.h"
#include "equipamento.h"
#include "equipamentoDAO.h"
#include <string>
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarEquipamento
	/// </summary>
	public ref class gerenciarEquipamento : public System::Windows::Forms::Form
	{
	public:
		gerenciarEquipamento(void)
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
		~gerenciarEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  create_equipt_bt;
	protected:

	private: System::Windows::Forms::Button^  remove_equipt_bt;

	private: System::Windows::Forms::Button^  change_equipt_bt;
	private: System::Windows::Forms::Button^  voltar_equipt_bt;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;



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
			this->create_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->remove_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->change_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_equipt_bt
			// 
			this->create_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_equipt_bt->Location = System::Drawing::Point(559, 52);
			this->create_equipt_bt->Margin = System::Windows::Forms::Padding(2);
			this->create_equipt_bt->Name = L"create_equipt_bt";
			this->create_equipt_bt->Size = System::Drawing::Size(135, 40);
			this->create_equipt_bt->TabIndex = 1;
			this->create_equipt_bt->Text = L"Criar Equipamento";
			this->create_equipt_bt->UseVisualStyleBackColor = false;
			this->create_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipamento::create_equipt_bt_Click);
			// 
			// remove_equipt_bt
			// 
			this->remove_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_equipt_bt->Location = System::Drawing::Point(559, 195);
			this->remove_equipt_bt->Margin = System::Windows::Forms::Padding(2);
			this->remove_equipt_bt->Name = L"remove_equipt_bt";
			this->remove_equipt_bt->Size = System::Drawing::Size(135, 40);
			this->remove_equipt_bt->TabIndex = 2;
			this->remove_equipt_bt->Text = L"Remover Equipamento";
			this->remove_equipt_bt->UseVisualStyleBackColor = false;
			this->remove_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipamento::remove_equipt_bt_Click);
			// 
			// change_equipt_bt
			// 
			this->change_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_equipt_bt->Location = System::Drawing::Point(559, 123);
			this->change_equipt_bt->Margin = System::Windows::Forms::Padding(2);
			this->change_equipt_bt->Name = L"change_equipt_bt";
			this->change_equipt_bt->Size = System::Drawing::Size(135, 40);
			this->change_equipt_bt->TabIndex = 3;
			this->change_equipt_bt->Text = L"Alterar Equipamento";
			this->change_equipt_bt->UseVisualStyleBackColor = false;
			this->change_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipamento::change_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(559, 269);
			this->voltar_equipt_bt->Margin = System::Windows::Forms::Padding(2);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(135, 40);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipamento::voltar_equipt_bt_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(33, 52);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(490, 311);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &gerenciarEquipamento::listview_check);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &gerenciarEquipamento::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"tipoEquipamento";
			this->columnHeader1->Width = 153;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"sequencialEquipamento";
			this->columnHeader2->Width = 189;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"custoHoraEquipamento";
			this->columnHeader3->Width = 134;
			// 
			// gerenciarEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(727, 406);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_equipt_bt);
			this->Controls->Add(this->remove_equipt_bt);
			this->Controls->Add(this->create_equipt_bt);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"gerenciarEquipamento";
			this->Text = L"gerenciarEquipamento";
			this->Load += gcnew System::EventHandler(this, &gerenciarEquipamento::gerenciarEquipamento_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		CriarEquipamento^ criaEquipt = gcnew CriarEquipamento();
		criaEquipt->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		AlterarEquipamento^ altera = gcnew AlterarEquipamento(str1, str2, str3);

		altera->ShowDialog();

		atualizarDashboard();
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		RemoverEquipamento^ remove = gcnew RemoverEquipamento(str1, str2, str3);

		remove->ShowDialog();

		atualizarDashboard();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: Void atualizarDashboard() {
		equipamentoDAO * aux = new equipamentoDAO();
		vector<equipamento*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarEquipamento();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String((temp2->at(j)->getTipo()).c_str());
			String^ str2 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());
			String^ str3 = gcnew String(std::to_string(temp2->at(j)->getPreco()).c_str());

			listViewItem = gcnew Windows::Forms::ListViewItem(str1);
			listViewItem->SubItems->Add(str2);
			listViewItem->SubItems->Add(str3);
			this->listView1->Items->Add(this->listViewItem);

		}
	}

	
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void listview_check(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count != 1) {
			this->change_equipt_bt->Enabled = false;
			this->remove_equipt_bt->Enabled = false;
		}
		else {
			this->change_equipt_bt->Enabled = true;
			this->remove_equipt_bt->Enabled = true;
		}
	}
};
}
