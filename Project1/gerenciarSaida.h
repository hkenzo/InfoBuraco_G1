#include <iostream>
#include "saidaEquipe.h"
#include "removerSaida.h"
#include "alterarSaida.h"
#include "saida.h"
#include "saidaDAO.h"
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
	/// Summary for gerenciarSaida
	/// </summary>
	public ref class gerenciarSaida : public System::Windows::Forms::Form
	{
	public:
		gerenciarSaida(void)
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
		~gerenciarSaida()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  create_Saida_bt;
	private: System::Windows::Forms::Button^  remove_Saida_bt;

	protected:





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
			this->create_Saida_bt = (gcnew System::Windows::Forms::Button());
			this->remove_Saida_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_Saida_bt
			// 
			this->create_Saida_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_Saida_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_Saida_bt->Location = System::Drawing::Point(558, 145);
			this->create_Saida_bt->Name = L"create_Saida_bt";
			this->create_Saida_bt->Size = System::Drawing::Size(180, 49);
			this->create_Saida_bt->TabIndex = 1;
			this->create_Saida_bt->Text = L"Criar Saida";
			this->create_Saida_bt->UseVisualStyleBackColor = false;
			this->create_Saida_bt->Click += gcnew System::EventHandler(this, &gerenciarSaida::create_equipt_bt_Click);
			// 
			// remove_Saida_bt
			// 
			this->remove_Saida_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_Saida_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_Saida_bt->Location = System::Drawing::Point(558, 232);
			this->remove_Saida_bt->Name = L"remove_Saida_bt";
			this->remove_Saida_bt->Size = System::Drawing::Size(180, 49);
			this->remove_Saida_bt->TabIndex = 2;
			this->remove_Saida_bt->Text = L"Remover Saida";
			this->remove_Saida_bt->UseVisualStyleBackColor = false;
			this->remove_Saida_bt->Click += gcnew System::EventHandler(this, &gerenciarSaida::remove_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(558, 323);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(180, 49);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarSaida::voltar_equipt_bt_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Location = System::Drawing::Point(22, 39);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(507, 431);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &gerenciarSaida::checked);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Data";
			this->columnHeader1->Width = 121;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Número da OS";
			this->columnHeader2->Width = 175;
			// 
			// gerenciarSaida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(782, 500);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->remove_Saida_bt);
			this->Controls->Add(this->create_Saida_bt);
			this->Name = L"gerenciarSaida";
			this->Text = L"gerenciarSaida";
			this->Load += gcnew System::EventHandler(this, &gerenciarSaida::gerenciarSaida_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarSaida_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		saidaEquipe^ cria = gcnew saidaEquipe();
		cria->ShowDialog();
		atualizarDashboard();
	}
	
	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		removerSaida^ remove = gcnew removerSaida(str1, str2);
		remove->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count != 1) {
			this->remove_Saida_bt->Enabled = false;
		}
		else {
			this->remove_Saida_bt->Enabled = true;
		}
	}

	private: Void atualizarDashboard() {
		saidaDAO * aux = new saidaDAO();
		vector<saida*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarSaida();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String((temp2->at(j)->getData()).c_str());
			String^ str2 = gcnew String(std::to_string(temp2->at(j)->getNumOS()).c_str());

			listViewItem = gcnew Windows::Forms::ListViewItem(str1);
			listViewItem->SubItems->Add(str2);
			this->listView1->Items->Add(this->listViewItem);

		}
	}


};
}
