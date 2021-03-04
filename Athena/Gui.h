#pragma once
#include <iostream>
#include "Main.h"

namespace Athena {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gui
	/// </summary>
	public ref class Gui : public System::Windows::Forms::Form
	{
	public:
		Gui(void)
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
		~Gui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBar5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TrackBar^ trackBar6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TrackBar^ trackBar7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TrackBar^ trackBar8;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::CheckBox^ checkBox6;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 86);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Athena";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 89);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(94, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Bunnyhopping";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 112);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(118, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Disable Flashbangs";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 135);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(58, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Chams";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(12, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(460, 83);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gui::button1_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(12, 175);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(88, 17);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"Team Chams";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox4_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 198);
			this->trackBar1->Maximum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(225, 45);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Gui::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Team Red: 0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Team Green: 1";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(6, 237);
			this->trackBar2->Maximum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(225, 45);
			this->trackBar2->TabIndex = 6;
			this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar2->Value = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Gui::trackBar2_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Team Blue: 0";
			// 
			// trackBar3
			// 
			this->trackBar3->Location = System::Drawing::Point(6, 276);
			this->trackBar3->Maximum = 1;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(225, 45);
			this->trackBar3->TabIndex = 6;
			this->trackBar3->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &Gui::trackBar3_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Team Alpha: 1";
			// 
			// trackBar4
			// 
			this->trackBar4->Location = System::Drawing::Point(6, 315);
			this->trackBar4->Maximum = 1;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(225, 45);
			this->trackBar4->TabIndex = 6;
			this->trackBar4->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar4->Value = 1;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &Gui::trackBar4_Scroll);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(243, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Enemy Alpha: 1";
			// 
			// trackBar5
			// 
			this->trackBar5->Location = System::Drawing::Point(243, 315);
			this->trackBar5->Maximum = 1;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(225, 45);
			this->trackBar5->TabIndex = 6;
			this->trackBar5->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar5->Value = 1;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &Gui::trackBar5_Scroll);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(243, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Enemy Blue: 0";
			// 
			// trackBar6
			// 
			this->trackBar6->Location = System::Drawing::Point(243, 276);
			this->trackBar6->Maximum = 1;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(225, 45);
			this->trackBar6->TabIndex = 6;
			this->trackBar6->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &Gui::trackBar6_Scroll);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(243, 260);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Enemy Green: 0";
			// 
			// trackBar7
			// 
			this->trackBar7->Location = System::Drawing::Point(243, 237);
			this->trackBar7->Maximum = 1;
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(225, 45);
			this->trackBar7->TabIndex = 6;
			this->trackBar7->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar7->Scroll += gcnew System::EventHandler(this, &Gui::trackBar7_Scroll);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(243, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Enemy Red: 1";
			// 
			// trackBar8
			// 
			this->trackBar8->Location = System::Drawing::Point(243, 198);
			this->trackBar8->Maximum = 1;
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(225, 45);
			this->trackBar8->TabIndex = 6;
			this->trackBar8->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar8->Value = 1;
			this->trackBar8->Scroll += gcnew System::EventHandler(this, &Gui::trackBar8_Scroll);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(246, 175);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(93, 17);
			this->checkBox5->TabIndex = 17;
			this->checkBox5->Text = L"Enemy Chams";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox5_CheckedChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(219, 27);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(249, 25);
			this->linkLabel1->TabIndex = 26;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"github.com/evaaaan/athena";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::White;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Gui::linkLabel1_LinkClicked);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(75, 135);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(55, 17);
			this->checkBox6->TabIndex = 27;
			this->checkBox6->Text = L"Radar";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Gui::checkBox6_CheckedChanged);
			// 
			// Gui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->trackBar6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->trackBar7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->trackBar8);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Gui";
			this->ShowIcon = false;
			this->Text = L"Athena";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!csgoOpen) return;
		enabled = !enabled;
		if (enabled) {
			button1->ForeColor = Color::Red;
			button1->Text = "Stop";
		}
		else {
			button1->ForeColor = Color::Lime;
			button1->Text = "Start";
		}
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start(L"https://github.com/evaaaan/athena");
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {bhop = checkBox1->Checked;}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {noFlash = checkBox2->Checked;}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {chams = checkBox3->Checked;}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {teamChams = checkBox4->Checked;}
	private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {enemyChams = checkBox5->Checked;}
	private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {radar = checkBox6->Checked;}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = "Team Red: " + trackBar1->Value;
		teamRed = trackBar1->Value;
	}
	private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Team Green: " + trackBar2->Value;
		teamGreen = trackBar2->Value;
	}
	private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = "Team Blue: " + trackBar3->Value;
		teamBlue = trackBar3->Value;
	}
	private: System::Void trackBar4_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label5->Text = "Team Alpha: " + trackBar4->Value;
		teamAlpha = trackBar4->Value;
	}
	private: System::Void trackBar8_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = "Enemy Red: " + trackBar8->Value;
		enemyRed = trackBar8->Value;
	}
	private: System::Void trackBar7_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label8->Text = "Enemy Green: " + trackBar7->Value;
		enemyGreen = trackBar7->Value;
	}
	private: System::Void trackBar6_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = "Enemy Blue: " + trackBar6->Value;
		enemyBlue = trackBar6->Value;
	}
	private: System::Void trackBar5_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label6->Text = "Enemy Alpha: " + trackBar5->Value;
		enemyAlpha = trackBar5->Value;
	}
};
}
