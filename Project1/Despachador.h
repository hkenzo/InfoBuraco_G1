#pragma once
#include <iostream>
#include "gerenciarEquipamento.h"
#include "gerenciarEquipe.h"
#include "gerenciarSaida.h"
#include "gerenciarMobilizacao.h"
#include "gerenciarMaterial.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Despachador
	/// </summary>
	public ref class Despachador : public System::Windows::Forms::Form
	{
	public:
		Despachador(void)
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
		~Despachador()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::Button^  bt_g_equipe;
	private: System::Windows::Forms::Button^  bt_g_material;




	private: System::Windows::Forms::Button^  bt_g_equipamento;


	private: System::Windows::Forms::Button^  bt_g_mob;











	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  bt_g_saida;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  estimativaHoras;
	private: System::Windows::Forms::ColumnHeader^  estimativaEquipamento;
	private: System::Windows::Forms::ColumnHeader^  estimativaMaterial;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;






	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->bt_g_equipe = (gcnew System::Windows::Forms::Button());
			this->bt_g_material = (gcnew System::Windows::Forms::Button());
			this->bt_g_equipamento = (gcnew System::Windows::Forms::Button());
			this->bt_g_mob = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_g_saida = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->estimativaHoras = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaEquipamento = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaMaterial = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1229, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Despachador::menuStrip1_ItemClicked);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(936, 562);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(271, 29);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// bt_g_equipe
			// 
			this->bt_g_equipe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_equipe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_equipe->Location = System::Drawing::Point(993, 100);
			this->bt_g_equipe->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_equipe->Name = L"bt_g_equipe";
			this->bt_g_equipe->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipe->TabIndex = 4;
			this->bt_g_equipe->Text = L"Gerenciar Equipes";
			this->bt_g_equipe->UseVisualStyleBackColor = false;
			this->bt_g_equipe->Click += gcnew System::EventHandler(this, &Despachador::bt_g_equipe_Click);
			// 
			// bt_g_material
			// 
			this->bt_g_material->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_material->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_material->Location = System::Drawing::Point(993, 174);
			this->bt_g_material->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_material->Name = L"bt_g_material";
			this->bt_g_material->Size = System::Drawing::Size(157, 47);
			this->bt_g_material->TabIndex = 5;
			this->bt_g_material->Text = L"Gerenciar Materiais";
			this->bt_g_material->UseVisualStyleBackColor = false;
			this->bt_g_material->Click += gcnew System::EventHandler(this, &Despachador::bt_g_material_Click);
			// 
			// bt_g_equipamento
			// 
			this->bt_g_equipamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_equipamento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_equipamento->Location = System::Drawing::Point(993, 248);
			this->bt_g_equipamento->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_equipamento->Name = L"bt_g_equipamento";
			this->bt_g_equipamento->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipamento->TabIndex = 7;
			this->bt_g_equipamento->Text = L"Gerenciar Equipamentos";
			this->bt_g_equipamento->UseVisualStyleBackColor = false;
			this->bt_g_equipamento->Click += gcnew System::EventHandler(this, &Despachador::bt_g_equipamento_Click);
			// 
			// bt_g_mob
			// 
			this->bt_g_mob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_mob->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_mob->Location = System::Drawing::Point(993, 323);
			this->bt_g_mob->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_mob->Name = L"bt_g_mob";
			this->bt_g_mob->Size = System::Drawing::Size(157, 44);
			this->bt_g_mob->TabIndex = 11;
			this->bt_g_mob->Text = L"Gerenciar custos de mobilização";
			this->bt_g_mob->UseVisualStyleBackColor = false;
			this->bt_g_mob->Click += gcnew System::EventHandler(this, &Despachador::bt_g_mob_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(384, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"OS\'s a serem cumpridas";
			// 
			// bt_g_saida
			// 
			this->bt_g_saida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_saida->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_saida->Location = System::Drawing::Point(993, 395);
			this->bt_g_saida->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_saida->Name = L"bt_g_saida";
			this->bt_g_saida->Size = System::Drawing::Size(157, 44);
			this->bt_g_saida->TabIndex = 16;
			this->bt_g_saida->Text = L"Gerenciar Saídas";
			this->bt_g_saida->UseVisualStyleBackColor = false;
			this->bt_g_saida->Click += gcnew System::EventHandler(this, &Despachador::bt_g_saida_Click);
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logout->Location = System::Drawing::Point(993, 461);
			this->logout->Margin = System::Windows::Forms::Padding(4);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(157, 44);
			this->logout->TabIndex = 17;
			this->logout->Text = L"Fazer Logout";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &Despachador::button1_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->estimativaHoras,
					this->estimativaEquipamento, this->estimativaMaterial, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView1->Location = System::Drawing::Point(43, 100);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(862, 459);
			this->listView1->TabIndex = 33;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
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
			this->columnHeader4->Width = 68;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"statusOS";
			this->columnHeader5->Width = 85;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"numBuraco";
			this->columnHeader6->Width = 107;
			// 
			// Despachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1229, 625);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->bt_g_saida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_g_mob);
			this->Controls->Add(this->bt_g_equipamento);
			this->Controls->Add(this->bt_g_material);
			this->Controls->Add(this->bt_g_equipe);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Despachador";
			this->Text = L"Despachador";
			this->Load += gcnew System::EventHandler(this, &Despachador::Despachador_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void exCaixaDeDialogoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	

	

	private: System::Void bt_g_equipe_Click(System::Object^  sender, System::EventArgs^  e) {
		gerenciarEquipe^ gerenciar = gcnew gerenciarEquipe();
		gerenciar->ShowDialog();
	}

	private: System::Void bt_g_material_Click(System::Object^  sender, System::EventArgs^  e) {
		gerenciarMaterial^ gerenciar = gcnew gerenciarMaterial();
		gerenciar->ShowDialog();
	}

	private: System::Void bt_g_equipamento_Click(System::Object^  sender, System::EventArgs^  e) {
		gerenciarEquipamento^ gerenciar = gcnew gerenciarEquipamento();
		gerenciar->ShowDialog();
	}
	private: System::Void bt_g_mob_Click(System::Object^  sender, System::EventArgs^  e) {
		gerenciarMobilizacao^ gerenciar = gcnew gerenciarMobilizacao();
		gerenciar->ShowDialog();
	}
	private: System::Void bt_g_saida_Click(System::Object^  sender, System::EventArgs^  e) {
		gerenciarSaida^ gerenciar = gcnew gerenciarSaida();
		gerenciar->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void Despachador_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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












//Demonio do nousikou, nos proteja nesta jornada, amém