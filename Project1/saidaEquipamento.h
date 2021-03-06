#include "CriarEquipamento.h"
#include "saidaMaterial.h"
#include <iostream>
#include "saida.h"
#include <string>
#include "saidaDAO.h"
#include "equipamentoDAO.h"
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
	/// Summary for saidaEquipamento
	/// </summary>
	public ref class saidaEquipamento : public System::Windows::Forms::Form
	{
	public:
		String^ aux1;
		String^ aux2;
	public:
		saidaEquipamento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		saidaEquipamento(String^ str1, String^ str2)
		{
			InitializeComponent();
			aux1 = str1;
			aux2 = str2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~saidaEquipamento()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Label^  label6;
	protected:

	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::Button^  Cancel_BT;
	private: System::Windows::Forms::Button^  create_BT;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;










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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->Cancel_BT = (gcnew System::Windows::Forms::Button());
			this->create_BT = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(293, 18);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Sele��o de Equipamento";
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(561, 238);
			this->Confirm_Bt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(139, 44);
			this->Confirm_Bt->TabIndex = 28;
			this->Confirm_Bt->Text = L"Selecionar Materiais";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &saidaEquipamento::Confirm_Bt_Click);
			// 
			// Cancel_BT
			// 
			this->Cancel_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Cancel_BT->Location = System::Drawing::Point(561, 328);
			this->Cancel_BT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Cancel_BT->Name = L"Cancel_BT";
			this->Cancel_BT->Size = System::Drawing::Size(139, 44);
			this->Cancel_BT->TabIndex = 27;
			this->Cancel_BT->Text = L"Voltar";
			this->Cancel_BT->UseVisualStyleBackColor = false;
			this->Cancel_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::Cancel_BT_Click);
			// 
			// create_BT
			// 
			this->create_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_BT->Location = System::Drawing::Point(561, 146);
			this->create_BT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->create_BT->Name = L"create_BT";
			this->create_BT->Size = System::Drawing::Size(135, 40);
			this->create_BT->TabIndex = 29;
			this->create_BT->Text = L"Criar Equipamento";
			this->create_BT->UseVisualStyleBackColor = false;
			this->create_BT->Click += gcnew System::EventHandler(this, &saidaEquipamento::create_BT_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Location = System::Drawing::Point(9, 71);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(538, 397);
			this->listView1->TabIndex = 30;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ItemChecked += gcnew System::Windows::Forms::ItemCheckedEventHandler(this, &saidaEquipamento::checked);
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &saidaEquipamento::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Tipo";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Sequencial";
			this->columnHeader2->Width = 131;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Custo/Hora";
			this->columnHeader3->Width = 183;
			// 
			// saidaEquipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 526);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->create_BT);
			this->Controls->Add(this->Confirm_Bt);
			this->Controls->Add(this->Cancel_BT);
			this->Controls->Add(this->label6);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"saidaEquipamento";
			this->Text = L"saidaEquipamento";
			this->Load += gcnew System::EventHandler(this, &saidaEquipamento::saidaEquipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		//saidaEquipe^ cria = gcnew saidaEquipe();
		this->Close();
		//cria->ShowDialog();
	}
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		//saidaMaterial^ next = gcnew saidaMaterial();
		//next->ShowDialog();
		equipamentoDAO * temp = new equipamentoDAO();

		for (int i = 0; i < listView1->CheckedIndices->Count; i++) {
			String^ str1 = listView1->CheckedItems[i]->SubItems[1]->Text;
			String^ str2 = aux1;
			String^ str3 = aux2;

			string id = msclr::interop::marshal_as<std::string>(str1);
			string data = msclr::interop::marshal_as<std::string>(str2);
			string num = msclr::interop::marshal_as<std::string>(str3);
			temp->criarEquipamentoSaidaDAO(data, std::stoi(num, nullptr, 10), std::stoi(id, nullptr, 10));
		}
		saidaMaterial^ next = gcnew saidaMaterial(aux1, aux2);
		next->ShowDialog();
		this->Close();
	}
	private: System::Void create_BT_Click(System::Object^  sender, System::EventArgs^  e) {
		CriarEquipamento^ cria = gcnew CriarEquipamento();
		cria->ShowDialog();
		atualizarDashboard();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Add_BT_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void remove_BT_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void saidaEquipamento_Load(System::Object^  sender, System::EventArgs^  e) {
		atualizarDashboard();
	}
	private: System::Void checked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e) {
		if (listView1->CheckedIndices->Count < 1) {
			this->Confirm_Bt->Enabled = false;
		}
		else {
			this->Confirm_Bt->Enabled = true;
		}
	}

		 private: Void atualizarDashboard() {
			 equipamentoDAO * aux = new equipamentoDAO();
			 vector<equipamento*>* temp2;
			 this->listView1->Items->Clear();
			 temp2 = aux->buscarEquipamento();
			 for (int j = 0; j < temp2->size(); j++) {
				 String^ str1 = gcnew String((temp2->at(j)->getTipo()).c_str());
				 String^ str2 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());
				 String^ str3 = gcnew String(std::to_string(temp2->at(j)->getPreco()).c_str());

				 listViewItem = gcnew Windows::Forms::ListViewItem(str1);
				 listViewItem->SubItems->Add(str2);
				 listViewItem->SubItems->Add(str3);
				 this->listView1->Items->Add(this->listViewItem);

			 }
		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
