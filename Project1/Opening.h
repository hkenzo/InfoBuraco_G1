#include "login.h"
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opening
	/// </summary>
	public ref class Opening : public System::Windows::Forms::Form
	{
	
		
	public: System::Windows::Forms::PictureBox^  semBuraco;
	public: System::Windows::Forms::PictureBox^  buraco;

	public: System::Windows::Forms::PictureBox^  obras;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	public: System::Windows::Forms::PictureBox^  ball2;
	public: System::Windows::Forms::PictureBox^  obras2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	public:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Timer^  timer5;
	private:
	public:

	private: System::Windows::Forms::Timer^  timer1;
	
		
	public:
		Opening(void)
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
		~Opening()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Opening::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buraco = (gcnew System::Windows::Forms::PictureBox());
			this->semBuraco = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->obras = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ball2 = (gcnew System::Windows::Forms::PictureBox());
			this->obras2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buraco))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->semBuraco))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obras))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obras2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"HelvLight", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(254, 438);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Loading..";
			this->label1->Click += gcnew System::EventHandler(this, &Opening::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(134, 327);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 85);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// buraco
			// 
			this->buraco->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buraco.Image")));
			this->buraco->Location = System::Drawing::Point(407, 292);
			this->buraco->Name = L"buraco";
			this->buraco->Size = System::Drawing::Size(142, 92);
			this->buraco->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->buraco->TabIndex = 4;
			this->buraco->TabStop = false;
			// 
			// semBuraco
			// 
			this->semBuraco->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"semBuraco.Image")));
			this->semBuraco->Location = System::Drawing::Point(407, 379);
			this->semBuraco->Name = L"semBuraco";
			this->semBuraco->Size = System::Drawing::Size(142, 92);
			this->semBuraco->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->semBuraco->TabIndex = 5;
			this->semBuraco->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Opening::timer1_Tick);
			// 
			// obras
			// 
			this->obras->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"obras.Image")));
			this->obras->Location = System::Drawing::Point(407, 26);
			this->obras->Name = L"obras";
			this->obras->Size = System::Drawing::Size(142, 92);
			this->obras->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->obras->TabIndex = 6;
			this->obras->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 250;
			this->timer2->Tick += gcnew System::EventHandler(this, &Opening::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 4000;
			this->timer3->Tick += gcnew System::EventHandler(this, &Opening::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 2000;
			this->timer4->Tick += gcnew System::EventHandler(this, &Opening::timer4_Tick);
			// 
			// ball2
			// 
			this->ball2->BackColor = System::Drawing::Color::Lime;
			this->ball2->Location = System::Drawing::Point(176, 327);
			this->ball2->Name = L"ball2";
			this->ball2->Size = System::Drawing::Size(10, 10);
			this->ball2->TabIndex = 7;
			this->ball2->TabStop = false;
			// 
			// obras2
			// 
			this->obras2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"obras2.Image")));
			this->obras2->Location = System::Drawing::Point(227, 26);
			this->obras2->Name = L"obras2";
			this->obras2->Size = System::Drawing::Size(142, 92);
			this->obras2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->obras2->TabIndex = 8;
			this->obras2->TabStop = false;
			this->obras2->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(69, 143);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(480, 99);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"HelvLight", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(103, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(423, 45);
			this->label2->TabIndex = 2;
			this->label2->Text = L"InfoBuraco - Grupo 01";
			// 
			// progressBar1
			// 
			this->progressBar1->Enabled = false;
			this->progressBar1->Location = System::Drawing::Point(87, 479);
			this->progressBar1->Maximum = 990;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(473, 4);
			this->progressBar1->Step = 9;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 10;
			// 
			// timer5
			// 
			this->timer5->Interval = 75;
			this->timer5->Tick += gcnew System::EventHandler(this, &Opening::timer5_Tick);
			// 
			// Opening
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->ClientSize = System::Drawing::Size(631, 512);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->obras2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ball2);
			this->Controls->Add(this->obras);
			this->Controls->Add(this->semBuraco);
			this->Controls->Add(this->buraco);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Opening";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Opening";
			this->Load += gcnew System::EventHandler(this, &Opening::Opening_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->buraco))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->semBuraco))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obras))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->obras2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Opening_Load(System::Object^  sender, System::EventArgs^  e) {
		this->progressBar1->Enabled = true;
		this->ball2->Top = 290;
		this->ball2->Visible = true;
		this->semBuraco->Visible = false;
		this->buraco->Visible = true; 
		this->semBuraco->Location = System::Drawing::Point(307, 242);
		this->obras2->Visible = false;
		this->obras2->Location = System::Drawing::Point(307, 242);
		this->obras->Visible = false;
		this->obras->Location = System::Drawing::Point(307, 242);
		timer1->Enabled = true;
		timer5->Enabled = true;
		
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->ball2->Top -= 3;
		if (this->ball2->Top == 170)	{
			timer1->Enabled = false;
			timer2->Enabled = true;
			timer3->Enabled = true;
			this->ball2->Visible = false;
		}

	}
			 
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (this->obras->Visible == false) {
			this->obras->Visible = true;
			this->buraco->Visible = false;
			this->obras2->Visible = false;
		}
		else {
			this->obras->Visible = false;
			this->obras2->Visible = true;
		}
		
	}
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
		this->semBuraco->Visible = true;
		this->obras->Visible = false;
		this->obras2->Visible = false;
		timer3->Enabled = false;
		timer2->Enabled = false;
		timer4->Enabled = true;
	}
	private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
		timer4->Enabled = false;
		this->Hide();
		login^ aux = gcnew login();
		aux->ShowDialog();
		this->Close();

	}
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
	this->progressBar1->PerformStep();
}
};
}
