#pragma once

#include "buracoDAO.h"
#include "buracos.h"
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VisualizarUmBuraco
	/// </summary>
	public ref class VisualizarUmBuraco : public System::Windows::Forms::Form
	{
	public:
		String ^ str;
		VisualizarUmBuraco(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		VisualizarUmBuraco(String^ str1)
		{
			InitializeComponent();
			str = str1;
			atualizar(str);
//
			//TODO: Add the constructor code here
			//
		}
		System::Windows::Forms::ListViewItem^ listViewItem;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VisualizarUmBuraco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::Button^  button1;

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
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(14) {
				this->columnHeader1, this->columnHeader9,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14, this->columnHeader10
			});
			this->listView1->Location = System::Drawing::Point(9, 3);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(868, 63);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &VisualizarUmBuraco::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"numBuraco";
			this->columnHeader1->Width = 69;
			// 
			// columnHeader9
			// 
			this->columnHeader9->DisplayIndex = 8;
			this->columnHeader9->Text = L"nomeRua";
			// 
			// columnHeader2
			// 
			this->columnHeader2->DisplayIndex = 1;
			this->columnHeader2->Text = L"numeroRua";
			this->columnHeader2->Width = 75;
			// 
			// columnHeader3
			// 
			this->columnHeader3->DisplayIndex = 2;
			this->columnHeader3->Text = L"tamanho";
			this->columnHeader3->Width = 57;
			// 
			// columnHeader4
			// 
			this->columnHeader4->DisplayIndex = 3;
			this->columnHeader4->Text = L"posicao";
			// 
			// columnHeader5
			// 
			this->columnHeader5->DisplayIndex = 4;
			this->columnHeader5->Text = L"regional";
			// 
			// columnHeader6
			// 
			this->columnHeader6->DisplayIndex = 5;
			this->columnHeader6->Text = L"prioridade";
			// 
			// columnHeader7
			// 
			this->columnHeader7->DisplayIndex = 6;
			this->columnHeader7->Text = L"numReclamacoes";
			// 
			// columnHeader8
			// 
			this->columnHeader8->DisplayIndex = 7;
			this->columnHeader8->Text = L"statusBuraco";
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"nomeCidadao";
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"canalCidadao";
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"DadoCanal";
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"dataHora";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Reclamacao";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(339, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Fechar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VisualizarUmBuraco::button1_Click);
			// 
			// VisualizarUmBuraco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(886, 121);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Name = L"VisualizarUmBuraco";
			this->Text = L"VisualizarUmBuraco";
			this->ResumeLayout(false);

		}
#pragma endregion
	public: void atualizar(String^ str) {
		String^ stra = str;
		std::string numS = msclr::interop::marshal_as<std::string>(stra);
		int num = stoi(numS.c_str());

		buracoDAO* aux = new buracoDAO();
		vector <buracos*> * buraco;
		buraco = aux->getBuraco(num);

		String^ str1 = gcnew String(std::to_string(buraco->at(0)->getNum()).c_str());
		String^ str2 = gcnew String((buraco->at(0)->getRua()).c_str());
		String^ str3 = gcnew String(std::to_string(buraco->at(0)->getRuaNum()).c_str());
		String^ str4 = gcnew String(std::to_string(buraco->at(0)->getTamanho()).c_str());
		String^ str5 = gcnew String((buraco->at(0)->getPosicao()).c_str());
		String^ str6 = gcnew String((buraco->at(0)->getRegional()).c_str());
		String^ str7 = gcnew String(std::to_string(buraco->at(0)->getPrioridade()).c_str());
		String^ str8 = gcnew String(std::to_string(buraco->at(0)->getNumReclamacoes()).c_str());
		String^ str9 = gcnew String(std::to_string(buraco->at(0)->getStatusBuraco()).c_str());
		String^ str10 = gcnew String((buraco->at(0)->getNomeCid()).c_str());
		String^ str11 = gcnew String((buraco->at(0)->getCanalCid()).c_str());
		String^ str12 = gcnew String((buraco->at(0)->getDadoCanal()).c_str());
		String^ str13 = gcnew String((buraco->at(0)->getDataHora()).c_str());
		String^ str14 = gcnew String((buraco->at(0)->getReclamacao()).c_str());

		listViewItem = gcnew Windows::Forms::ListViewItem(str1);
		listViewItem->SubItems->Add(str2);
		listViewItem->SubItems->Add(str3);
		listViewItem->SubItems->Add(str4);
		listViewItem->SubItems->Add(str5);
		listViewItem->SubItems->Add(str6);
		listViewItem->SubItems->Add(str7);
		listViewItem->SubItems->Add(str8);
		listViewItem->SubItems->Add(str9);
		listViewItem->SubItems->Add(str10);
		listViewItem->SubItems->Add(str11);
		listViewItem->SubItems->Add(str12);
		listViewItem->SubItems->Add(str13);
		listViewItem->SubItems->Add(str14);
		this->listView1->Items->Add(this->listViewItem);



	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
