#include <iostream>
#include "criarMobilizacao.h"
#include "saida.h"
#include <string>
#include "saidaDAO.h"
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
	/// Summary for saidaMobilizacao
	/// </summary>
	public ref class saidaMobilizacao : public System::Windows::Forms::Form
	{
	public: 
		String ^ aux1;
		String^ aux2;
	public:
		saidaMobilizacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		saidaMobilizacao(String^ str1, String^ str2)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~saidaMobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  create_BT;
	protected:
	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::Button^  Cancel_BT;
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
			this->create_BT = (gcnew System::Windows::Forms::Button());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_BT
			// 
			this->create_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_BT->Location = System::Drawing::Point(693, 135);
			this->create_BT->Name = L"create_BT";
			this->create_BT->Size = System::Drawing::Size(180, 49);
			this->create_BT->TabIndex = 32;
			this->create_BT->Text = L"Criar Mobilização";
			this->create_BT->UseVisualStyleBackColor = false;
			this->create_BT->Click += gcnew System::EventHandler(this, &saidaMobilizacao::create_BT_Click);
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(693, 248);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(185, 54);
			this->Confirm_Bt->TabIndex = 31;
			this->Confirm_Bt->Text = L"Finalizar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &saidaMobilizacao::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(693, 359);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(185, 54);
			this->Cancel_BT->TabIndex = 30;
			this->Cancel_BT->Text = L"Voltar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &saidaMobilizacao::Cancel_BT_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Location = System::Drawing::Point(14, 53);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(664, 457);
			this->listView1->TabIndex = 33;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &saidaMobilizacao::checked);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"custo/Km";
			this->columnHeader1->Width = 246;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Sequencial";
			this->columnHeader2->Width = 174;
			// 
			// saidaMobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 548);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->create_BT);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Name = L"saidaMobilizacao";
			this->Text = L"saidaMobilizacao";
			this->Load += gcnew System::EventHandler(this, &saidaMobilizacao::saidaMobilizacao_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
	}
	private: System::Void saidaMobilizacao_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
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
	private: System::Void create_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		criarMobilizacao^ cria = gcnew criarMobilizacao();
		cria->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		mobilizacaoDAO * temp = new mobilizacaoDAO();

		for (int i = 0; i < listView1->CheckedIndices->Count; i++) {
			String^ str1 = listView1->CheckedItems[i]->SubItems[1]->Text;
			String^ str2 = aux1;
			String^ str3 = aux2;

			string id = msclr::interop::marshal_as<std::string>(str1);
			string data = msclr::interop::marshal_as<std::string>(str2);
			string num = msclr::interop::marshal_as<std::string>(str3);
			temp->criarMobilizacaoSaidaDAO(std::stoi(id, nullptr, 10), data, std::stoi(num, nullptr, 10));
		}
		this->Close();
	}
};
}
