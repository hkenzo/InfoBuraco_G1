#pragma once

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
	private: System::Windows::Forms::Button^  bt_c_equipe;
	private: System::Windows::Forms::Button^  bt_g_equipe;
	private: System::Windows::Forms::Button^  bt_g_material;



	private: System::Windows::Forms::Button^  bt_c_material;
	private: System::Windows::Forms::Button^  bt_g_equipamento;
	private: System::Windows::Forms::Button^  bt_c_equipamento;
	private: System::Windows::Forms::Button^  bt_c_mob;
	private: System::Windows::Forms::Button^  bt_g_mob;
	private: System::Windows::Forms::ListBox^  list_O;






	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bt_c_saida;
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
			this->bt_c_equipe = (gcnew System::Windows::Forms::Button());
			this->bt_g_equipe = (gcnew System::Windows::Forms::Button());
			this->bt_g_material = (gcnew System::Windows::Forms::Button());
			this->bt_c_material = (gcnew System::Windows::Forms::Button());
			this->bt_g_equipamento = (gcnew System::Windows::Forms::Button());
			this->bt_c_equipamento = (gcnew System::Windows::Forms::Button());
			this->bt_c_mob = (gcnew System::Windows::Forms::Button());
			this->bt_g_mob = (gcnew System::Windows::Forms::Button());
			this->list_O = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_c_saida = (gcnew System::Windows::Forms::Button());
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
			this->menuStrip1->Size = System::Drawing::Size(953, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->dateTimePicker1->Location = System::Drawing::Point(665, 618);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(271, 29);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// bt_c_equipe
			// 
			this->bt_c_equipe->Location = System::Drawing::Point(780, 119);
			this->bt_c_equipe->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_c_equipe->Name = L"bt_c_equipe";
			this->bt_c_equipe->Size = System::Drawing::Size(157, 47);
			this->bt_c_equipe->TabIndex = 3;
			this->bt_c_equipe->Text = L"Criar Equipe";
			this->bt_c_equipe->UseVisualStyleBackColor = true;
			this->bt_c_equipe->Click += gcnew System::EventHandler(this, &MyForm1::bt_c_equipe_Click);
			// 
			// bt_g_equipe
			// 
			this->bt_g_equipe->Location = System::Drawing::Point(780, 174);
			this->bt_g_equipe->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_g_equipe->Name = L"bt_g_equipe";
			this->bt_g_equipe->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipe->TabIndex = 4;
			this->bt_g_equipe->Text = L"Gerenciar Equipes";
			this->bt_g_equipe->UseVisualStyleBackColor = true;
			this->bt_g_equipe->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_equipe_Click);
			// 
			// bt_g_material
			// 
			this->bt_g_material->Location = System::Drawing::Point(780, 284);
			this->bt_g_material->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_g_material->Name = L"bt_g_material";
			this->bt_g_material->Size = System::Drawing::Size(157, 47);
			this->bt_g_material->TabIndex = 5;
			this->bt_g_material->Text = L"Gerenciar Materiais";
			this->bt_g_material->UseVisualStyleBackColor = true;
			this->bt_g_material->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_material_Click);
			// 
			// bt_c_material
			// 
			this->bt_c_material->Location = System::Drawing::Point(780, 228);
			this->bt_c_material->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_c_material->Name = L"bt_c_material";
			this->bt_c_material->Size = System::Drawing::Size(157, 49);
			this->bt_c_material->TabIndex = 6;
			this->bt_c_material->Text = L"Cadastrar Material";
			this->bt_c_material->UseVisualStyleBackColor = true;
			this->bt_c_material->Click += gcnew System::EventHandler(this, &MyForm1::bt_c_material_Click);
			// 
			// bt_g_equipamento
			// 
			this->bt_g_equipamento->Location = System::Drawing::Point(780, 391);
			this->bt_g_equipamento->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_g_equipamento->Name = L"bt_g_equipamento";
			this->bt_g_equipamento->Size = System::Drawing::Size(157, 47);
			this->bt_g_equipamento->TabIndex = 7;
			this->bt_g_equipamento->Text = L"Gerenciar Equipamentos";
			this->bt_g_equipamento->UseVisualStyleBackColor = true;
			this->bt_g_equipamento->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_equipamento_Click);
			// 
			// bt_c_equipamento
			// 
			this->bt_c_equipamento->Location = System::Drawing::Point(780, 338);
			this->bt_c_equipamento->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_c_equipamento->Name = L"bt_c_equipamento";
			this->bt_c_equipamento->Size = System::Drawing::Size(157, 46);
			this->bt_c_equipamento->TabIndex = 9;
			this->bt_c_equipamento->Text = L"Cadastrar Equipamento";
			this->bt_c_equipamento->UseVisualStyleBackColor = true;
			this->bt_c_equipamento->Click += gcnew System::EventHandler(this, &MyForm1::bt_c_equipamento_Click);
			// 
			// bt_c_mob
			// 
			this->bt_c_mob->Location = System::Drawing::Point(780, 446);
			this->bt_c_mob->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_c_mob->Name = L"bt_c_mob";
			this->bt_c_mob->Size = System::Drawing::Size(157, 46);
			this->bt_c_mob->TabIndex = 10;
			this->bt_c_mob->Text = L"Cadastrar custo de mobilização";
			this->bt_c_mob->UseVisualStyleBackColor = true;
			this->bt_c_mob->Click += gcnew System::EventHandler(this, &MyForm1::bt_c_mob_Click);
			// 
			// bt_g_mob
			// 
			this->bt_g_mob->Location = System::Drawing::Point(780, 498);
			this->bt_g_mob->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_g_mob->Name = L"bt_g_mob";
			this->bt_g_mob->Size = System::Drawing::Size(157, 44);
			this->bt_g_mob->TabIndex = 11;
			this->bt_g_mob->Text = L"Gerenciar custos de mobilização";
			this->bt_g_mob->UseVisualStyleBackColor = true;
			this->bt_g_mob->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_mob_Click);
			// 
			// list_O
			// 
			this->list_O->FormattingEnabled = true;
			this->list_O->ItemHeight = 16;
			this->list_O->Location = System::Drawing::Point(71, 144);
			this->list_O->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->list_O->Name = L"list_O";
			this->list_O->Size = System::Drawing::Size(375, 356);
			this->list_O->TabIndex = 12;
			this->list_O->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Hoje", L"Nesta semana", L"Neste mês" });
			this->comboBox1->Location = System::Drawing::Point(84, 90);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->label1->Location = System::Drawing::Point(116, 64);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"OS\'s a serem cumpridas:";
			// 
			// bt_c_saida
			// 
			this->bt_c_saida->Location = System::Drawing::Point(71, 585);
			this->bt_c_saida->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_c_saida->Name = L"bt_c_saida";
			this->bt_c_saida->Size = System::Drawing::Size(157, 44);
			this->bt_c_saida->TabIndex = 15;
			this->bt_c_saida->Text = L"Criar Saída";
			this->bt_c_saida->UseVisualStyleBackColor = true;
			this->bt_c_saida->Click += gcnew System::EventHandler(this, &MyForm1::bt_c_saida_Click);
			// 
			// bt_g_saida
			// 
			this->bt_g_saida->Location = System::Drawing::Point(289, 585);
			this->bt_g_saida->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bt_g_saida->Name = L"bt_g_saida";
			this->bt_g_saida->Size = System::Drawing::Size(157, 44);
			this->bt_g_saida->TabIndex = 16;
			this->bt_g_saida->Text = L"Gerenciar Saídas";
			this->bt_g_saida->UseVisualStyleBackColor = true;
			this->bt_g_saida->Click += gcnew System::EventHandler(this, &MyForm1::bt_g_saida_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(953, 662);
			this->Controls->Add(this->bt_g_saida);
			this->Controls->Add(this->bt_c_saida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->list_O);
			this->Controls->Add(this->bt_g_mob);
			this->Controls->Add(this->bt_c_mob);
			this->Controls->Add(this->bt_c_equipamento);
			this->Controls->Add(this->bt_g_equipamento);
			this->Controls->Add(this->bt_c_material);
			this->Controls->Add(this->bt_g_material);
			this->Controls->Add(this->bt_g_equipe);
			this->Controls->Add(this->bt_c_equipe);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
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
};
}
