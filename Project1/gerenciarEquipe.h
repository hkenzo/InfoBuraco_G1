#pragma once
#include <iostream>
#include "criarEquipe.h"
#include "removerEquipe.h"
#include "alterarEquipe.h"
#include "equipe.h"
#include "equipeDAO.h"
#include <string>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarEquipe
	/// </summary>
	public ref class gerenciarEquipe : public System::Windows::Forms::Form
	{
	public:
		gerenciarEquipe(void)
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
		~gerenciarEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;

	private: System::Windows::Forms::Button^  create_equipe_bt;
	private: System::Windows::Forms::Button^  remove_equipe_bt;

	protected:


	private: System::Windows::Forms::Button^  change_equipe_bt;


	private: System::Windows::Forms::Button^  voltar_equipt_bt;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;









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
			this->create_equipe_bt = (gcnew System::Windows::Forms::Button());
			this->remove_equipe_bt = (gcnew System::Windows::Forms::Button());
			this->change_equipe_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_equipe_bt
			// 
			this->create_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_equipe_bt->Location = System::Drawing::Point(665, 64);
			this->create_equipe_bt->Name = L"create_equipe_bt";
			this->create_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->create_equipe_bt->TabIndex = 1;
			this->create_equipe_bt->Text = L"Criar Equipe";
			this->create_equipe_bt->UseVisualStyleBackColor = false;
			this->create_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::create_equipt_bt_Click);
			// 
			// remove_equipe_bt
			// 
			this->remove_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_equipe_bt->Enabled = false;
			this->remove_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_equipe_bt->Location = System::Drawing::Point(665, 241);
			this->remove_equipe_bt->Name = L"remove_equipe_bt";
			this->remove_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->remove_equipe_bt->TabIndex = 2;
			this->remove_equipe_bt->Text = L"Remover Equipe";
			this->remove_equipe_bt->UseVisualStyleBackColor = false;
			this->remove_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::remove_equipt_bt_Click);
			// 
			// change_equipe_bt
			// 
			this->change_equipe_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_equipe_bt->Enabled = false;
			this->change_equipe_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_equipe_bt->Location = System::Drawing::Point(665, 152);
			this->change_equipe_bt->Name = L"change_equipe_bt";
			this->change_equipe_bt->Size = System::Drawing::Size(180, 49);
			this->change_equipe_bt->TabIndex = 3;
			this->change_equipe_bt->Text = L"Alterar Equipe";
			this->change_equipe_bt->UseVisualStyleBackColor = false;
			this->change_equipe_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::change_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(665, 332);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(180, 49);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarEquipe::voltar_equipt_bt_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader12, this->columnHeader13,
					this->columnHeader14
			});
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->Location = System::Drawing::Point(16, 64);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(619, 410);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &gerenciarEquipe::listview_check);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &gerenciarEquipe::listView1_SelectedIndexChanged);
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Identificação";
			this->columnHeader12->Width = 126;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Nº Profissionais";
			this->columnHeader13->Width = 114;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Custo por Hora da Equipe";
			this->columnHeader14->Width = 179;
			// 
			// gerenciarEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(893, 500);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_equipe_bt);
			this->Controls->Add(this->remove_equipe_bt);
			this->Controls->Add(this->create_equipe_bt);
			this->Name = L"gerenciarEquipe";
			this->Text = L"gerenciarEquipe";
			this->Load += gcnew System::EventHandler(this, &gerenciarEquipe::gerenciarEquipe_Load);
			this->ResumeLayout(false);

		
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarEquipe^ cria = gcnew criarEquipe();
		cria->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		alterarEquipe^ altera = gcnew alterarEquipe(str1, str2, str3);

		altera->ShowDialog();

		atualizarDashboard();
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		removerEquipe^ remove = gcnew removerEquipe(str1,str2,str3);

		remove->ShowDialog();
		
		atualizarDashboard();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: Void atualizarDashboard() {
		equipeDAO * aux = new equipeDAO();
		vector<equipe*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarEquipe();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());
			String^ str2 = gcnew String(std::to_string(temp2->at(j)->getNum()).c_str());
			String^ str3 = gcnew String(std::to_string(temp2->at(j)->getCusto()).c_str());
			
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
		this->change_equipe_bt->Enabled = false;
		this->remove_equipe_bt->Enabled = false;
	}
	else {
		this->change_equipe_bt->Enabled = true;
		this->remove_equipe_bt->Enabled = true;
	}
}
};
}
