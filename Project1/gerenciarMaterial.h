#include <iostream>
#include <stdio.h>
#include "criarMaterial.h"
#include "removerMaterial.h"
#include "alterarMaterial.h"
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
	/// Summary for gerenciarMaterial
	/// </summary>
	public ref class gerenciarMaterial : public System::Windows::Forms::Form
	{
	public:
		gerenciarMaterial(void)
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
		~gerenciarMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  create_Material_bt;
	private: System::Windows::Forms::Button^  remove_Material_bt;

	protected:


	private: System::Windows::Forms::Button^  change_Material_bt;


	private: System::Windows::Forms::Button^  voltar_equipt_bt;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;



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
			this->create_Material_bt = (gcnew System::Windows::Forms::Button());
			this->remove_Material_bt = (gcnew System::Windows::Forms::Button());
			this->change_Material_bt = (gcnew System::Windows::Forms::Button());
			this->voltar_equipt_bt = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// create_Material_bt
			// 
			this->create_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_Material_bt->Location = System::Drawing::Point(971, 111);
			this->create_Material_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_Material_bt->Name = L"create_Material_bt";
			this->create_Material_bt->Size = System::Drawing::Size(180, 49);
			this->create_Material_bt->TabIndex = 1;
			this->create_Material_bt->Text = L"Criar Material";
			this->create_Material_bt->UseVisualStyleBackColor = false;
			this->create_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::create_equipt_bt_Click);
			// 
			// remove_Material_bt
			// 
			this->remove_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->remove_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_Material_bt->Location = System::Drawing::Point(971, 287);
			this->remove_Material_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->remove_Material_bt->Name = L"remove_Material_bt";
			this->remove_Material_bt->Size = System::Drawing::Size(180, 49);
			this->remove_Material_bt->TabIndex = 2;
			this->remove_Material_bt->Text = L"Remover Material";
			this->remove_Material_bt->UseVisualStyleBackColor = false;
			this->remove_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::remove_equipt_bt_Click);
			// 
			// change_Material_bt
			// 
			this->change_Material_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->change_Material_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->change_Material_bt->Location = System::Drawing::Point(971, 198);
			this->change_Material_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_Material_bt->Name = L"change_Material_bt";
			this->change_Material_bt->Size = System::Drawing::Size(180, 49);
			this->change_Material_bt->TabIndex = 3;
			this->change_Material_bt->Text = L"Alterar Material";
			this->change_Material_bt->UseVisualStyleBackColor = false;
			this->change_Material_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::change_equipt_bt_Click);
			// 
			// voltar_equipt_bt
			// 
			this->voltar_equipt_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->voltar_equipt_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->voltar_equipt_bt->Location = System::Drawing::Point(971, 378);
			this->voltar_equipt_bt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->voltar_equipt_bt->Name = L"voltar_equipt_bt";
			this->voltar_equipt_bt->Size = System::Drawing::Size(180, 49);
			this->voltar_equipt_bt->TabIndex = 4;
			this->voltar_equipt_bt->Text = L"Voltar";
			this->voltar_equipt_bt->UseVisualStyleBackColor = false;
			this->voltar_equipt_bt->Click += gcnew System::EventHandler(this, &gerenciarMaterial::voltar_equipt_bt_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Location = System::Drawing::Point(25, 55);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(905, 425);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &gerenciarMaterial::listview_check);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &gerenciarMaterial::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"tipoMaterial";
			this->columnHeader1->Width = 154;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"unidade";
			this->columnHeader2->Width = 186;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"PrecoUnidade";
			this->columnHeader3->Width = 204;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"sequencialMaterial";
			this->columnHeader4->Width = 228;
			// 
			// gerenciarMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1173, 570);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->voltar_equipt_bt);
			this->Controls->Add(this->change_Material_bt);
			this->Controls->Add(this->remove_Material_bt);
			this->Controls->Add(this->create_Material_bt);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"gerenciarMaterial";
			this->Text = L"gerenciarMaterial";
			this->Load += gcnew System::EventHandler(this, &gerenciarMaterial::gerenciarMaterial_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void gerenciarMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void create_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		criarMaterial^ cria = gcnew criarMaterial();
		cria->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void change_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		String^ str4 = listView1->CheckedItems[0]->SubItems[3]->Text;
		alterarMaterial^ altera = gcnew alterarMaterial(str1, str2, str3, str4);

		altera->ShowDialog();

		atualizarDashboard();
	}

	private: Void atualizarDashboard() {
		materialDAO * aux = new materialDAO();
		vector<material*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarMaterial();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String((temp2->at(j)->getTipo()).c_str());
			String^ str2 = gcnew String((temp2->at(j)->getUnidade()).c_str());
			String^ str3 = gcnew String(std::to_string(temp2->at(j)->getPreco()).c_str());
			String^ str4 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());

			listViewItem = gcnew Windows::Forms::ListViewItem(str1);
			listViewItem->SubItems->Add(str2);
			listViewItem->SubItems->Add(str3);
			listViewItem->SubItems->Add(str4);
			this->listView1->Items->Add(this->listViewItem);

		}
	}

	private: System::Void remove_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = listView1->CheckedItems[0]->SubItems[0]->Text;
		String^ str2 = listView1->CheckedItems[0]->SubItems[1]->Text;
		String^ str3 = listView1->CheckedItems[0]->SubItems[2]->Text;
		String^ str4 = listView1->CheckedItems[0]->SubItems[3]->Text;
		removerMaterial^ remove = gcnew removerMaterial(str1, str2, str3, str4);

		remove->ShowDialog();

		atualizarDashboard();
	}
	private: System::Void voltar_equipt_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listview_check(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count != 1) {
			this->change_Material_bt->Enabled = false;
			this->remove_Material_bt->Enabled = false;
		}
		else {
			this->change_Material_bt->Enabled = true;
			this->remove_Material_bt->Enabled = true;
		}
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
