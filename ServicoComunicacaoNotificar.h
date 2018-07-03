#pragma once
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
	/// Summary for ServicoComunicacaoNotificar
	/// </summary>
	public ref class ServicoComunicacaoNotificar : public System::Windows::Forms::Form
	{
	public:
		ServicoComunicacaoNotificar(void)
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
		~ServicoComunicacaoNotificar()
		{
			if (components)
			{
				delete components;
			}
		}

		System::Windows::Forms::ListViewItem^ listViewItem;

	protected:
	private: System::Windows::Forms::Button^  bt_atualizar;
	private: System::Windows::Forms::Button^  bt_notificado;
	private: System::Windows::Forms::Button^  bt_fechar;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;



















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
			this->bt_atualizar = (gcnew System::Windows::Forms::Button());
			this->bt_notificado = (gcnew System::Windows::Forms::Button());
			this->bt_fechar = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// bt_atualizar
			// 
			this->bt_atualizar->Location = System::Drawing::Point(469, 59);
			this->bt_atualizar->Name = L"bt_atualizar";
			this->bt_atualizar->Size = System::Drawing::Size(75, 23);
			this->bt_atualizar->TabIndex = 1;
			this->bt_atualizar->Text = L"Atualizar";
			this->bt_atualizar->UseVisualStyleBackColor = true;
			this->bt_atualizar->Click += gcnew System::EventHandler(this, &ServicoComunicacaoNotificar::bt_atualizar_Click);
			// 
			// bt_notificado
			// 
			this->bt_notificado->Location = System::Drawing::Point(469, 127);
			this->bt_notificado->Name = L"bt_notificado";
			this->bt_notificado->Size = System::Drawing::Size(75, 23);
			this->bt_notificado->TabIndex = 2;
			this->bt_notificado->Text = L"Notificado";
			this->bt_notificado->UseVisualStyleBackColor = true;
			this->bt_notificado->Click += gcnew System::EventHandler(this, &ServicoComunicacaoNotificar::bt_notificado_Click);
			// 
			// bt_fechar
			// 
			this->bt_fechar->Location = System::Drawing::Point(469, 205);
			this->bt_fechar->Name = L"bt_fechar";
			this->bt_fechar->Size = System::Drawing::Size(75, 23);
			this->bt_fechar->TabIndex = 3;
			this->bt_fechar->Text = L"Fechar";
			this->bt_fechar->UseVisualStyleBackColor = true;
			this->bt_fechar->Click += gcnew System::EventHandler(this, &ServicoComunicacaoNotificar::bt_fechar_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView1->Location = System::Drawing::Point(9, 37);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(430, 247);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &ServicoComunicacaoNotificar::listView1_ItemChecked);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ServicoComunicacaoNotificar::listView1_SelectedIndexChanged_1);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nome";
			this->columnHeader1->Width = 85;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"CanalTipo";
			this->columnHeader2->Width = 69;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Canal";
			this->columnHeader3->Width = 65;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Data";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Rua";
			this->columnHeader5->Width = 69;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Num";
			// 
			// ServicoComunicacaoNotificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 296);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->bt_fechar);
			this->Controls->Add(this->bt_notificado);
			this->Controls->Add(this->bt_atualizar);
			this->Name = L"ServicoComunicacaoNotificar";
			this->Text = L"ServicoComunicacaoNotificar";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bt_fechar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}


	private: Void atualizar() {
		buracoDAO * aux = new buracoDAO();
		vector<buracos*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->getCidadaoNotificar();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String((temp2->at(j)->getNomeCid()).c_str());
			String^ str2 = gcnew String((temp2->at(j)->getCanalCid()).c_str());
			String^ str3 = gcnew String((temp2->at(j)->getDadoCanal()).c_str());
			String^ str4 = gcnew String((temp2->at(j)->getDataHora()).c_str());
			String^ str5 = gcnew String((temp2->at(j)->getRua()).c_str());
			String^ str6 = gcnew String(std::to_string(temp2->at(j)->getRuaNum()).c_str());

			listViewItem = gcnew Windows::Forms::ListViewItem(str1);
			listViewItem->SubItems->Add(str2);
			listViewItem->SubItems->Add(str3);
			listViewItem->SubItems->Add(str4);
			listViewItem->SubItems->Add(str5);
			listViewItem->SubItems->Add(str6);
			this->listView1->Items->Add(this->listViewItem);

		}
	}


private: System::Void bt_atualizar_Click(System::Object^  sender, System::EventArgs^  e) {
	atualizar();
}
private: System::Void bt_notificado_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
	String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
	String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
	String^ str4 = listView1->CheckedItems[0]->SubItems[3]->Text;
	String^ str5 = listView1->CheckedItems[0]->SubItems[4]->Text;
	String^ str6 = listView1->CheckedItems[0]->SubItems[5]->Text;

	std::string nome = msclr::interop::marshal_as<std::string>(str5);
	std::string numS = msclr::interop::marshal_as<std::string>(str6);
	int num = std::stoi(numS);
	buracoDAO* aux = new buracoDAO();
	aux->setStatusBuraco(2, nome, num);
	
	atualizar();
}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_ItemChecked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
	if (listView1->CheckedIndices->Count != 1) {
		this->bt_notificado->Enabled = false;
	}
	else {
		this->bt_notificado->Enabled = true;
	}
}
};
}
