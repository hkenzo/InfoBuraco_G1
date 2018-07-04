#pragma once
#include "mobilizacaoDAO.h"
#include "mobilizacao.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChefeFinalizarMobilizacao
	/// </summary>
	public ref class ChefeFinalizarMobilizacao : public System::Windows::Forms::Form
	{
	public:
		String ^ numOS;
		String^ data;
		ChefeFinalizarMobilizacao(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ChefeFinalizarMobilizacao(String^ str1, String^ str2)
		{
			InitializeComponent();
			numOS = str1;
			data = str2;
			atualizar();
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChefeFinalizarMobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  create_BT;
	private: System::Windows::Forms::Button^  Confirm_Bt;
	private: System::Windows::Forms::TextBox^  textBox1;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->create_BT = (gcnew System::Windows::Forms::Button());
			this->Confirm_Bt = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Location = System::Drawing::Point(11, 11);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(298, 305);
			this->listView1->TabIndex = 37;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"custo/Km";
			this->columnHeader1->Width = 136;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Sequencial";
			this->columnHeader2->Width = 174;
			// 
			// create_BT
			// 
			this->create_BT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->create_BT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_BT->Location = System::Drawing::Point(313, 125);
			this->create_BT->Margin = System::Windows::Forms::Padding(2);
			this->create_BT->Name = L"create_BT";
			this->create_BT->Size = System::Drawing::Size(135, 40);
			this->create_BT->TabIndex = 36;
			this->create_BT->Text = L"Definir duracao";
			this->create_BT->UseVisualStyleBackColor = false;
			this->create_BT->Click += gcnew System::EventHandler(this, &ChefeFinalizarMobilizacao::create_BT_Click);
			// 
			// Confirm_Bt
			// 
			this->Confirm_Bt->BackColor = System::Drawing::Color::PowderBlue;
			this->Confirm_Bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Confirm_Bt->Location = System::Drawing::Point(313, 272);
			this->Confirm_Bt->Margin = System::Windows::Forms::Padding(2);
			this->Confirm_Bt->Name = L"Confirm_Bt";
			this->Confirm_Bt->Size = System::Drawing::Size(139, 44);
			this->Confirm_Bt->TabIndex = 35;
			this->Confirm_Bt->Text = L"Finalizar";
			this->Confirm_Bt->UseVisualStyleBackColor = false;
			this->Confirm_Bt->Click += gcnew System::EventHandler(this, &ChefeFinalizarMobilizacao::Confirm_Bt_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(314, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 20);
			this->textBox1->TabIndex = 38;
			// 
			// ChefeFinalizarMobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 326);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->create_BT);
			this->Controls->Add(this->Confirm_Bt);
			this->Name = L"ChefeFinalizarMobilizacao";
			this->Text = L"ChefeFinalizarMobilizacao";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Confirm_Bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void create_BT_Click(System::Object^  sender, System::EventArgs^  e) {
	string valor = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
	int q = stoi(valor);

	String^ str1 = numOS;
	String^ str2 = data;
	std::string nume = msclr::interop::marshal_as<std::string>(str1);
	std::string data = msclr::interop::marshal_as<std::string>(str2);
	int id = std::stoi(nume);

	String^ str3 = listView1->CheckedItems[0]->SubItems[1]->Text;
	std::string qt = msclr::interop::marshal_as<std::string>(str3);
	int idE = std::stoi(qt);

	mobilizacaoDAO *aux = new mobilizacaoDAO();
	aux->setDuracaoMobilizacao(q, id, data, idE);

}

		 Void atualizar() {
			 String^ str1 = numOS;
			 String^ str2 = data;
			 std::string nume = msclr::interop::marshal_as<std::string>(str1);
			 std::string dat = msclr::interop::marshal_as<std::string>(str2);

			 int num = std::stoi(nume.c_str());
			 
			 mobilizacaoDAO * aux = new mobilizacaoDAO();
			 vector<mobilizacao*>* temp2;
			 this->listView1->Items->Clear();
			 temp2 = aux->buscarMobilizacaoSaida(num, dat);
			 for (int j = 0; j < temp2->size(); j++) {
				 String^ str1 = gcnew String(std::to_string(temp2->at(j)->getCusto()).c_str());
				 String^ str2 = gcnew String(std::to_string(temp2->at(j)->getId()).c_str());

				 listViewItem = gcnew Windows::Forms::ListViewItem(str1);
				 listViewItem->SubItems->Add(str2);

				 this->listView1->Items->Add(this->listViewItem);


			 }
		 }
};
}
