#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		dashboard(void)
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
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btVisualizarOS;
	private: System::Windows::Forms::Button^  btVisualizarBuraco;
	protected:



	protected:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  tempoMedioConserto;
	private: System::Windows::Forms::TextBox^  numReparos;
	private: System::Windows::Forms::TextBox^  previsaoAtual;
	private: System::Windows::Forms::TextBox^  custoReparoMedio;
	private: System::Windows::Forms::Button^  btAlterarPrioridade;












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
			this->btVisualizarOS = (gcnew System::Windows::Forms::Button());
			this->btVisualizarBuraco = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tempoMedioConserto = (gcnew System::Windows::Forms::TextBox());
			this->numReparos = (gcnew System::Windows::Forms::TextBox());
			this->previsaoAtual = (gcnew System::Windows::Forms::TextBox());
			this->custoReparoMedio = (gcnew System::Windows::Forms::TextBox());
			this->btAlterarPrioridade = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btVisualizarOS
			// 
			this->btVisualizarOS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btVisualizarOS->Location = System::Drawing::Point(40, 335);
			this->btVisualizarOS->Name = L"btVisualizarOS";
			this->btVisualizarOS->Size = System::Drawing::Size(120, 50);
			this->btVisualizarOS->TabIndex = 0;
			this->btVisualizarOS->Text = L"Visualizar OS";
			this->btVisualizarOS->UseVisualStyleBackColor = false;
			// 
			// btVisualizarBuraco
			// 
			this->btVisualizarBuraco->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btVisualizarBuraco->Location = System::Drawing::Point(174, 335);
			this->btVisualizarBuraco->Name = L"btVisualizarBuraco";
			this->btVisualizarBuraco->Size = System::Drawing::Size(120, 50);
			this->btVisualizarBuraco->TabIndex = 1;
			this->btVisualizarBuraco->Text = L"Visualizar Buraco";
			this->btVisualizarBuraco->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->Location = System::Drawing::Point(216, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Dashboard";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(17, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Tempo médio de conserto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(54, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Número de reparos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(36, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Custo de reparo médio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(39, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 15);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Previsão reparos atual";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(415, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 15);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Buracos abertos";
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(364, 94);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(201, 244);
			this->listBox3->TabIndex = 11;
			// 
			// tempoMedioConserto
			// 
			this->tempoMedioConserto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->tempoMedioConserto->Location = System::Drawing::Point(192, 119);
			this->tempoMedioConserto->Name = L"tempoMedioConserto";
			this->tempoMedioConserto->Size = System::Drawing::Size(100, 20);
			this->tempoMedioConserto->TabIndex = 12;
			// 
			// numReparos
			// 
			this->numReparos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->numReparos->Location = System::Drawing::Point(192, 157);
			this->numReparos->Name = L"numReparos";
			this->numReparos->Size = System::Drawing::Size(100, 20);
			this->numReparos->TabIndex = 13;
			// 
			// previsaoAtual
			// 
			this->previsaoAtual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->previsaoAtual->Location = System::Drawing::Point(192, 196);
			this->previsaoAtual->Name = L"previsaoAtual";
			this->previsaoAtual->Size = System::Drawing::Size(100, 20);
			this->previsaoAtual->TabIndex = 14;
			// 
			// custoReparoMedio
			// 
			this->custoReparoMedio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->custoReparoMedio->Location = System::Drawing::Point(192, 233);
			this->custoReparoMedio->Name = L"custoReparoMedio";
			this->custoReparoMedio->Size = System::Drawing::Size(100, 20);
			this->custoReparoMedio->TabIndex = 15;
			// 
			// btAlterarPrioridade
			// 
			this->btAlterarPrioridade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btAlterarPrioridade->Location = System::Drawing::Point(407, 353);
			this->btAlterarPrioridade->Name = L"btAlterarPrioridade";
			this->btAlterarPrioridade->Size = System::Drawing::Size(120, 50);
			this->btAlterarPrioridade->TabIndex = 16;
			this->btAlterarPrioridade->Text = L"Alterar Prioridade";
			this->btAlterarPrioridade->UseVisualStyleBackColor = false;
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 425);
			this->Controls->Add(this->btAlterarPrioridade);
			this->Controls->Add(this->custoReparoMedio);
			this->Controls->Add(this->previsaoAtual);
			this->Controls->Add(this->numReparos);
			this->Controls->Add(this->tempoMedioConserto);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btVisualizarBuraco);
			this->Controls->Add(this->btVisualizarOS);
			this->Name = L"dashboard";
			this->Text = L"dashboardRegional";
			this->Load += gcnew System::EventHandler(this, &dashboard::dashboard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dashboard_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
