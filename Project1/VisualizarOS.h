#pragma once
#include "MySQLDAO.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "OS.h"
#include "OSDAO.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VisualizarOS
	/// </summary>
	public ref class VisualizarOS : public System::Windows::Forms::Form
	{
	public:
		VisualizarOS(void)
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
		~VisualizarOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  bt_atualizar;
	private: System::Windows::Forms::Button^  finalizarConsulta;
	private: System::Windows::Forms::ColumnHeader^  numeroOS;
	private: System::Windows::Forms::ColumnHeader^  estimativaHoras;
	private: System::Windows::Forms::ColumnHeader^  estimativaMaterial;
	private: System::Windows::Forms::ColumnHeader^  estimativaEquipamento;
	private: System::Windows::Forms::ColumnHeader^  statusOS;
	private: System::Windows::Forms::ColumnHeader^  numBuraco;








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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->numeroOS = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaHoras = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaMaterial = (gcnew System::Windows::Forms::ColumnHeader());
			this->estimativaEquipamento = (gcnew System::Windows::Forms::ColumnHeader());
			this->statusOS = (gcnew System::Windows::Forms::ColumnHeader());
			this->numBuraco = (gcnew System::Windows::Forms::ColumnHeader());
			this->bt_atualizar = (gcnew System::Windows::Forms::Button());
			this->finalizarConsulta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->CheckBoxes = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->numeroOS, this->estimativaHoras,
					this->estimativaMaterial, this->estimativaEquipamento, this->statusOS, this->numBuraco
			});
			this->listView1->Location = System::Drawing::Point(12, 4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(580, 293);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// numeroOS
			// 
			this->numeroOS->Text = L"numOS";
			this->numeroOS->Width = 72;
			// 
			// estimativaHoras
			// 
			this->estimativaHoras->Text = L"estimativaHoras";
			this->estimativaHoras->Width = 97;
			// 
			// estimativaMaterial
			// 
			this->estimativaMaterial->Text = L"estimativaMaterial";
			this->estimativaMaterial->Width = 116;
			// 
			// estimativaEquipamento
			// 
			this->estimativaEquipamento->Text = L"estimativaEquipamento";
			this->estimativaEquipamento->Width = 132;
			// 
			// statusOS
			// 
			this->statusOS->Text = L"statusOS";
			this->statusOS->Width = 78;
			// 
			// numBuraco
			// 
			this->numBuraco->Text = L"numBuraco";
			this->numBuraco->Width = 79;
			// 
			// bt_atualizar
			// 
			this->bt_atualizar->Location = System::Drawing::Point(321, 303);
			this->bt_atualizar->Name = L"bt_atualizar";
			this->bt_atualizar->Size = System::Drawing::Size(220, 23);
			this->bt_atualizar->TabIndex = 9;
			this->bt_atualizar->Text = L"Atualizar";
			this->bt_atualizar->UseVisualStyleBackColor = true;
			// 
			// finalizarConsulta
			// 
			this->finalizarConsulta->Location = System::Drawing::Point(62, 303);
			this->finalizarConsulta->Name = L"finalizarConsulta";
			this->finalizarConsulta->Size = System::Drawing::Size(227, 23);
			this->finalizarConsulta->TabIndex = 8;
			this->finalizarConsulta->Text = L"Fechar";
			this->finalizarConsulta->UseVisualStyleBackColor = true;
			this->finalizarConsulta->Click += gcnew System::EventHandler(this, &VisualizarOS::finalizarConsulta_Click);
			// 
			// VisualizarOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 332);
			this->Controls->Add(this->bt_atualizar);
			this->Controls->Add(this->finalizarConsulta);
			this->Controls->Add(this->listView1);
			this->Name = L"VisualizarOS";
			this->Text = L"VisualizarOS";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void finalizarConsulta_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	//private: Void atualizarOS() {
	//	OSDAO * aux = new OSDAO();
	//	vector<OS*>* temp2;
	//	this->listView1->Items->Clear();
	//	temp2 = aux->buscarOS();
	//	for (int j = 0; j < temp2->size(); j++) {
	//		String^ str1 = gcnew String(std::to_string(temp2->at(j)->getNum()).c_str());
	//		String^ str2 = gcnew String((temp2->at(j)->getRua()).c_str());
	//		String^ str3 = gcnew String(std::to_string(temp2->at(j)->getRuaNum()).c_str());
	//		String^ str4 = gcnew String(std::to_string(temp2->at(j)->getTamanho()).c_str());
	//		String^ str5 = gcnew String((temp2->at(j)->getPosicao()).c_str());
	//		String^ str6 = gcnew String((temp2->at(j)->getRegional()).c_str());
	//}
	};
}
