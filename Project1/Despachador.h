#pragma once
#include <iostream>
#include "gerenciarEquipamento.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
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









	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(865, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm1::menuStrip1_ItemClicked);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(566, 471);
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
			this->bt_g_equipe->Location = System::Drawing::Point(680, 90);
			this->bt_g_equipe->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_equipe->Name = L"bt_g_equipe";
			this->bt_g_equipe->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipe->TabIndex = 4;
			this->bt_g_equipe->Text = L"Gerenciar Equipes";
			this->bt_g_equipe->UseVisualStyleBackColor = false;
			this->bt_g_equipe->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_equipe_Click);
			// 
			// bt_g_material
			// 
			this->bt_g_material->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_material->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_material->Location = System::Drawing::Point(680, 164);
			this->bt_g_material->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_material->Name = L"bt_g_material";
			this->bt_g_material->Size = System::Drawing::Size(157, 47);
			this->bt_g_material->TabIndex = 5;
			this->bt_g_material->Text = L"Gerenciar Materiais";
			this->bt_g_material->UseVisualStyleBackColor = false;
			this->bt_g_material->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_material_Click);
			// 
			// bt_g_equipamento
			// 
			this->bt_g_equipamento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_equipamento->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_equipamento->Location = System::Drawing::Point(680, 238);
			this->bt_g_equipamento->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_equipamento->Name = L"bt_g_equipamento";
			this->bt_g_equipamento->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipamento->TabIndex = 7;
			this->bt_g_equipamento->Text = L"Gerenciar Equipamentos";
			this->bt_g_equipamento->UseVisualStyleBackColor = false;
			this->bt_g_equipamento->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_equipamento_Click);
			// 
			// bt_g_mob
			// 
			this->bt_g_mob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_mob->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_mob->Location = System::Drawing::Point(680, 312);
			this->bt_g_mob->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_mob->Name = L"bt_g_mob";
			this->bt_g_mob->Size = System::Drawing::Size(157, 44);
			this->bt_g_mob->TabIndex = 11;
			this->bt_g_mob->Text = L"Gerenciar custos de mobilização";
			this->bt_g_mob->UseVisualStyleBackColor = false;
			this->bt_g_mob->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_mob_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(71, 144);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(487, 356);
			this->listBox1->TabIndex = 12;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Hoje", L"Nesta semana", L"Neste mês" });
			this->comboBox1->Location = System::Drawing::Point(71, 90);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(288, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Selecionar";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(103, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"OS\'s a serem cumpridas:";
			// 
			// bt_g_saida
			// 
			this->bt_g_saida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->bt_g_saida->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_g_saida->Location = System::Drawing::Point(680, 385);
			this->bt_g_saida->Margin = System::Windows::Forms::Padding(4);
			this->bt_g_saida->Name = L"bt_g_saida";
			this->bt_g_saida->Size = System::Drawing::Size(157, 44);
			this->bt_g_saida->TabIndex = 16;
			this->bt_g_saida->Text = L"Gerenciar Saídas";
			this->bt_g_saida->UseVisualStyleBackColor = false;
			this->bt_g_saida->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_saida_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(865, 533);
			this->Controls->Add(this->bt_g_saida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->bt_g_mob);
			this->Controls->Add(this->bt_g_equipamento);
			this->Controls->Add(this->bt_g_material);
			this->Controls->Add(this->bt_g_equipe);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedItem == "Hoje") {
		listBox1->Items->Add("Código 12376");
		listBox1->Items->Add("Código 35");
		listBox1->Items->Add("Código 13");
		
	}
	else if (comboBox1->SelectedItem == "Nesta semana") {
		listBox1->Items->Add("Código 12376");
		listBox1->Items->Add("Código 35");
		listBox1->Items->Add("Código 13");
		listBox1->Items->Add("Código 1476");
		listBox1->Items->Add("Código 3225");

	}

	else if (comboBox1->SelectedItem == "Neste mês") {
		listBox1->Items->Add("Código 12376");
		listBox1->Items->Add("Código 35");
		listBox1->Items->Add("Código 13");
		listBox1->Items->Add("Código 1476");
		listBox1->Items->Add("Código 3225");
		listBox1->Items->Add("Código 5576");
		listBox1->Items->Add("Código 55625");
	}

}
private: System::Void bt_c_equipe_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_g_equipe_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_c_material_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_g_material_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void bt_g_equipamento_Click(System::Object^  sender, System::EventArgs^  e) {
	gerenciarEquipamento^ gerenciarEquip = gcnew gerenciarEquipamento();
	gerenciarEquip->ShowDialog();
}
private: System::Void bt_c_equipamento_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_c_mob_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_g_mob_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_c_saida_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_g_saida_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
};
}
