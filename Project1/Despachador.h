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

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::Button^  bt_g_equipe;
	private: System::Windows::Forms::Button^  bt_g_material;




	private: System::Windows::Forms::Button^  bt_g_equipamento;


	private: System::Windows::Forms::Button^  bt_g_mob;
	private: System::Windows::Forms::ListBox^  listBox1;










	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  bt_g_saida;





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
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->bt_g_equipe = (gcnew System::Windows::Forms::Button());
			this->bt_g_material = (gcnew System::Windows::Forms::Button());
			this->bt_g_equipamento = (gcnew System::Windows::Forms::Button());
			this->bt_g_mob = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_g_saida = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(649, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Despachador::menuStrip1_ItemClicked);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(424, 383);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(204, 24);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// bt_g_equipe
			// 
			this->bt_g_equipe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_equipe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_equipe->Location = System::Drawing::Point(510, 73);
			this->bt_g_equipe->Name = L"bt_g_equipe";
			this->bt_g_equipe->Size = System::Drawing::Size(118, 38);
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
			this->bt_g_material->Location = System::Drawing::Point(510, 133);
			this->bt_g_material->Name = L"bt_g_material";
			this->bt_g_material->Size = System::Drawing::Size(118, 38);
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
			this->bt_g_equipamento->Location = System::Drawing::Point(510, 193);
			this->bt_g_equipamento->Name = L"bt_g_equipamento";
			this->bt_g_equipamento->Size = System::Drawing::Size(118, 38);
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
			this->bt_g_mob->Location = System::Drawing::Point(510, 254);
			this->bt_g_mob->Name = L"bt_g_mob";
			this->bt_g_mob->Size = System::Drawing::Size(118, 36);
			this->bt_g_mob->TabIndex = 11;
			this->bt_g_mob->Text = L"Gerenciar custos de mobilização";
			this->bt_g_mob->UseVisualStyleBackColor = false;
			this->bt_g_mob->Click += gcnew System::EventHandler(this, &Despachador::bt_g_mob_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(53, 117);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(366, 290);
			this->listBox1->TabIndex = 12;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Despachador::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(77, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 18);
			this->label1->TabIndex = 14;
			this->label1->Text = L"OS\'s a serem cumpridas";
			// 
			// bt_g_saida
			// 
			this->bt_g_saida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_saida->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_saida->Location = System::Drawing::Point(510, 313);
			this->bt_g_saida->Name = L"bt_g_saida";
			this->bt_g_saida->Size = System::Drawing::Size(118, 36);
			this->bt_g_saida->TabIndex = 16;
			this->bt_g_saida->Text = L"Gerenciar Saídas";
			this->bt_g_saida->UseVisualStyleBackColor = false;
			this->bt_g_saida->Click += gcnew System::EventHandler(this, &Despachador::bt_g_saida_Click);
			// 
			// Despachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(649, 433);
			this->Controls->Add(this->bt_g_saida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->bt_g_mob);
			this->Controls->Add(this->bt_g_equipamento);
			this->Controls->Add(this->bt_g_material);
			this->Controls->Add(this->bt_g_equipe);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Despachador";
			this->Text = L"Despachador";
			this->Load += gcnew System::EventHandler(this, &Despachador::Despachador_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
	}
	private: System::Void Despachador_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	};
}
