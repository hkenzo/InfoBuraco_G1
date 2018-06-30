#include <iostream>
#include "criarMobilizacao.h"
#include "removerMobilizacao.h"
#include "alterarMobilizacao.h"
#include "mobilizacao.h"
#include "mobilizacaoDAO.h"
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
	/// Summary for gerenciarMobilizacao
	/// </summary>
	public ref class gerenciarMobilizacao : public System::Windows::Forms::Form
	{
	public:
		gerenciarMobilizacao(void)
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
		~gerenciarMobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;

	private: System::Windows::Forms::Button^  create_Mobilizacao_bt;
	private: System::Windows::Forms::Button^  remove_Mobilizacao_bt;

	protected:


	private: System::Windows::Forms::Button^  change_Mobilizacao_bt;


	private: System::Windows::Forms::Button^  voltar_equipt_bt;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;



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
			this->create_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->remove_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->change_Mobilizacao_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_Mobilizacao_bt
			// 
			this->create_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_Mobilizacao_bt->Location = System::Drawing::Point(774, 90);
			this->create_Mobilizacao_bt->Name = L"create_Mobilizacao_bt";
			this->create_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->create_Mobilizacao_bt->TabIndex = 1;
			this->create_Mobilizacao_bt->Text = L"Criar Mobilização";
			this->create_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->create_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::create_equipt_bt_Click);
			// 
			// remove_Mobilizacao_bt
			// 
			this->remove_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_Mobilizacao_bt->Location = System::Drawing::Point(774, 267);
			this->remove_Mobilizacao_bt->Name = L"remove_Mobilizacao_bt";
			this->remove_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->remove_Mobilizacao_bt->TabIndex = 2;
			this->remove_Mobilizacao_bt->Text = L"Remover Mobilização";
			this->remove_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->remove_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::remove_equipt_bt_Click);
			// 
			// change_Mobilizacao_bt
			// 
			this->change_Mobilizacao_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_Mobilizacao_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_Mobilizacao_bt->Location = System::Drawing::Point(774, 178);
			this->change_Mobilizacao_bt->Name = L"change_Mobilizacao_bt";
			this->change_Mobilizacao_bt->Size = System::Drawing::Size(180, 49);
			this->change_Mobilizacao_bt->TabIndex = 3;
			this->change_Mobilizacao_bt->Text = L"Alterar Mobilização";
			this->change_Mobilizacao_bt->UseVisualStyleBackColor = false;
			this->change_Mobilizacao_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::change_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(774, 358);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(180, 49);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarMobilizacao::voltar_equipt_bt_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Location = System::Drawing::Point(25, 52);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(713, 455);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &gerenciarMobilizacao::listview_check);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"custoKM";
			this->columnHeader1->Width = 199;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Sequencial";
			this->columnHeader2->Width = 182;
			// 
			// gerenciarMobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(984, 530);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_Mobilizacao_bt);
			this->Controls->Add(this->remove_Mobilizacao_bt);
			this->Controls->Add(this->create_Mobilizacao_bt);
			this->Name = L"gerenciarMobilizacao";
			this->Text = L"gerenciarMobilizacao";
			this->Load += gcnew System::EventHandler(this, &gerenciarMobilizacao::gerenciarMobilizacao_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarMobilizacao_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarMobilizacao^ cria = gcnew criarMobilizacao();
		cria->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		alterarMobilizacao^ altera = gcnew alterarMobilizacao(str1, str2);
		altera->ShowDialog();

		atualizarDashboard();
		
	}
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;

		removerMobilizacao^ remove = gcnew removerMobilizacao(str1, str2);

		remove->ShowDialog();

		atualizarDashboard();
		
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: Void atualizarDashboard() {
		mobilizacaoDAO * aux = new mobilizacaoDAO();
		vector<mobilizacao*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarMobilizacao();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String(std::to_string(temp2->at(j)->getCusto()).c_str());
			String^ str2 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());

			listViewItem = gcnew Windows::Forms::ListViewItem(str1);
			listViewItem->SubItems->Add(str2);

			this->listView1->Items->Add(this->listViewItem);

		}
	}


	private: System::Void listview_check(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count != 1) {
			this->change_Mobilizacao_bt->Enabled = false;
			this->remove_Mobilizacao_bt->Enabled = false;
		}
		else {
			this->change_Mobilizacao_bt->Enabled = true;
			this->remove_Mobilizacao_bt->Enabled = true;
		}
	}
};
}
