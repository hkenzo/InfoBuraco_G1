#include <iostream>
#include <string>
#include "alterarPrioridade.h"
#include "buracos.h"
#include "buracoDAO.h"
#include "OS.h"
#include "OSDAO.h"
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for regionalOS
	/// </summary>
	public ref class regionalOS : public System::Windows::Forms::Form
	{
	public:
		regionalOS(void)
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
		~regionalOS()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::Button^  bt_alterarPrioridade;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->bt_alterarPrioridade = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label2->Location = System::Drawing::Point(235, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Visualiza��o de OS";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Location = System::Drawing::Point(29, 73);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(452, 385);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Identifica��o";
			this->columnHeader1->Width = 94;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"N� Profissionais";
			this->columnHeader2->Width = 106;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"N� de Equipamentos";
			this->columnHeader3->Width = 122;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Qtde de material";
			this->columnHeader4->Width = 125;
			// 
			// bt_alterarPrioridade
			// 
			this->bt_alterarPrioridade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_alterarPrioridade->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_alterarPrioridade->Location = System::Drawing::Point(501, 161);
			this->bt_alterarPrioridade->Margin = System::Windows::Forms::Padding(2);
			this->bt_alterarPrioridade->Name = L"bt_alterarPrioridade";
			this->bt_alterarPrioridade->Size = System::Drawing::Size(117, 40);
			this->bt_alterarPrioridade->TabIndex = 5;
			this->bt_alterarPrioridade->Text = L"Alterar Prioridade";
			this->bt_alterarPrioridade->UseVisualStyleBackColor = false;
			this->bt_alterarPrioridade->Click += gcnew System::EventHandler(this, &regionalOS::bt_alterarPrioridade_Click);
			// 
			// regionalOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 481);
			this->Controls->Add(this->bt_alterarPrioridade);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Name = L"regionalOS";
			this->Text = L"regionalOS";
			this->Load += gcnew System::EventHandler(this, &regionalOS::regionalOS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_alterarPrioridade_Click(System::Object^  sender, System::EventArgs^  e) {
		alterarPrioridade^ altera = gcnew alterarPrioridade();
		altera->ShowDialog();
	}
	
	//private: Void atualizarDashboard() {
	//	OSDAO * aux = new OSDAO();
	//	vector<equipe*>* temp2;
	//	this->listView1->Items->Clear();
	//	//temp2 = aux->buscarEquipe();
	//	for (int j = 0; j < temp2->size(); j++) {
	//		String^ str1 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());
	//		String^ str2 = gcnew String(std::to_string(temp2->at(j)->getNum()).c_str());
	//		String^ str3 = gcnew String(std::to_string(temp2->at(j)->getCusto()).c_str());
	//
	//		listViewItem = gcnew Windows::Forms::ListViewItem(str1);
	//		listViewItem->SubItems->Add(str2);
	//		listViewItem->SubItems->Add(str3);
	//		this->listView1->Items->Add(this->listViewItem);
	//		//////////
	//	}
	//}
	

private: System::Void regionalOS_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
