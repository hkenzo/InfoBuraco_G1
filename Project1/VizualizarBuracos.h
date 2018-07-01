#pragma once
#include "buracos.h"
#include "buracoDAO.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para VizualizarBuracos
	/// </summary>
	public ref class VizualizarBuracos : public System::Windows::Forms::Form
	{
	public:
		VizualizarBuracos(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~VizualizarBuracos()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::Button^  finalizarConsulta;
	private: System::Windows::Forms::ListView^  listView1;
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
	private: System::Windows::Forms::Button^  bt_atualizar;


	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->finalizarConsulta = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->bt_atualizar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// finalizarConsulta
			// 
			this->finalizarConsulta->Location = System::Drawing::Point(168, 297);
			this->finalizarConsulta->Name = L"finalizarConsulta";
			this->finalizarConsulta->Size = System::Drawing::Size(227, 23);
			this->finalizarConsulta->TabIndex = 0;
			this->finalizarConsulta->Text = L"Fechar";
			this->finalizarConsulta->UseVisualStyleBackColor = true;
			this->finalizarConsulta->Click += gcnew System::EventHandler(this, &VizualizarBuracos::finalizarConsulta_Click);
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(14) {
				this->columnHeader1, this->columnHeader9,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14, this->columnHeader10
			});
			this->listView1->Location = System::Drawing::Point(12, 11);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(868, 280);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &VizualizarBuracos::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"numBuraco";
			this->columnHeader1->Width = 69;
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
			// columnHeader9
			// 
			this->columnHeader9->DisplayIndex = 8;
			this->columnHeader9->Text = L"nomeRua";
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
			// bt_atualizar
			// 
			this->bt_atualizar->Location = System::Drawing::Point(427, 297);
			this->bt_atualizar->Name = L"bt_atualizar";
			this->bt_atualizar->Size = System::Drawing::Size(220, 23);
			this->bt_atualizar->TabIndex = 7;
			this->bt_atualizar->Text = L"Atualizar";
			this->bt_atualizar->UseVisualStyleBackColor = true;
			this->bt_atualizar->Click += gcnew System::EventHandler(this, &VizualizarBuracos::bt_atualizar_Click);
			// 
			// VizualizarBuracos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(883, 332);
			this->Controls->Add(this->bt_atualizar);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->finalizarConsulta);
			this->Name = L"VizualizarBuracos";
			this->Text = L"VizualizarBuracos";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void finalizarConsulta_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void listaMostrarOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listaOS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: Void atualizar() {
		buracoDAO * aux = new buracoDAO();
		vector<buracos*>* temp2;
		this->listView1->Items->Clear();
		temp2 = aux->buscarBuracos();
		for (int j = 0; j < temp2->size(); j++) {
			String^ str1 = gcnew String(std::to_string(temp2->at(j)->getNum()).c_str());
			String^ str2 = gcnew String((temp2->at(j)->getRua()).c_str());
			String^ str3 = gcnew String(std::to_string(temp2->at(j)->getRuaNum()).c_str());
			String^ str4 = gcnew String(std::to_string(temp2->at(j)->getTamanho()).c_str());
			String^ str5 = gcnew String((temp2->at(j)->getPosicao()).c_str());
			String^ str6 = gcnew String((temp2->at(j)->getRegional()).c_str());
			String^ str7 = gcnew String(std::to_string(temp2->at(j)->getPrioridade()).c_str());
			String^ str8 = gcnew String(std::to_string(temp2->at(j)->getNumReclamacoes()).c_str());
			String^ str9 = gcnew String(std::to_string(temp2->at(j)->getStatusBuraco()).c_str());
			String^ str10 = gcnew String((temp2->at(j)->getNomeCid()).c_str());
			String^ str11 = gcnew String((temp2->at(j)->getCanalCid()).c_str());
			String^ str12 = gcnew String((temp2->at(j)->getDadoCanal()).c_str());
			String^ str13 = gcnew String((temp2->at(j)->getDataHora()).c_str());
			String^ str14 = gcnew String((temp2->at(j)->getReclamacao()).c_str());

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
	}
private: System::Void bt_atualizar_Click(System::Object^  sender, System::EventArgs^  e) {
	atualizar();
}
};
}
