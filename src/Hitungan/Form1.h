//  Bismillah!
//
//  ProCalc
//
//  Created by Tutu Rulianda on MacBook Pro Core 2 Duo P8700 on 3/20/10.
//	Modified by Tutu Rulianda on Fujitsu Lifebook Core i3 M330 5/29/10.
//  Copyright Tutu Rulianda 2010 - All rights reserved.
//
//  Last Update: Friday, 6/25/2010, 07:33 WIT
//
//  Freeware for everyone at last.
//

#include "Hitungan.h"
#include <time.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <random>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
#using <System.dll>


#pragma once
	

namespace Hitungan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Globalization;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:

		Form1()
		{	

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			func_initArray(0, 120010);
			dRound = false;
			dRMError = false;
			timer1->Start();
			sPool1 = "";
			sPool2 = "";
			sPool3 = "";
			sPool4 = "";
			sPool5 = "0";
			sPool6 = "";
			sPool7 = "";
			sRezult = "";
			nIndex = 0;
			int2ROOT = 0;
			intNROOT = 0;
			intNPOWER = 0;
			intNMODE = 0;
			bReset = false;
			bOperator = false;
			bNPower = false;
			b2Root = false;
			bNRoot = false;
			Form1::KeyPreview = true;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			timer1->Stop();
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;	
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::ProgressBar^  progressBar1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer1;
	
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	static Int32 tickCounter = 0;
	static bool bBigN = false;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	

			 String ^sDivisorErrorAt;
			 static bool binc = true;
			 static bool bPrimeRemainder = false;
			 String ^sPool1;
			 String ^sPool2;
			 String ^sPool3;
			 String ^sPool4;
			 String ^sPool5;
			 String ^sPool6;
			 String ^sPool7;
			 String ^sRezult;
			 String ^sDemo;
			 String ^sDemo2;
			 Int32 nIndex;
			 static bool bOperator = false;
			 static bool bNPower = false;
			 static bool b2Root = false;
			 static bool bNRoot = false;
			 int int2ROOT;
			 int intNROOT;
			 int intNPOWER;
			 int intNMODE;

	private: System::Windows::Forms::Button^  pb1;
	private: System::Windows::Forms::Button^  pb2;
	private: System::Windows::Forms::Button^  pb3;
	private: System::Windows::Forms::Button^  pb4;
	private: System::Windows::Forms::Button^  pb5;
	private: System::Windows::Forms::Button^  pb6;
	private: System::Windows::Forms::Button^  pb7;
	private: System::Windows::Forms::Button^  pb8;
	private: System::Windows::Forms::Button^  pb9;
	private: System::Windows::Forms::Button^  pb0;
	private: System::Windows::Forms::Button^  pbDot;
	private: System::Windows::Forms::Button^  pbEq;
	private: System::Windows::Forms::Button^  pbPlus;
	private: System::Windows::Forms::Button^  pbMinus;
	private: System::Windows::Forms::Button^  pbMul;
	private: System::Windows::Forms::Button^  pbDiv;
	private: System::Windows::Forms::Button^  pbSign;
	private: System::Windows::Forms::Button^  pbClear;
	private: System::Windows::Forms::RichTextBox^  rtDisplay1;

			 static bool bDiagnostic = false;
			 bool nonNumberEntered;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  lblDisplay;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel6;

private: System::Windows::Forms::RichTextBox^  rtDigits;
private: System::Windows::Forms::RichTextBox^  rtRegex;
private: System::Windows::Forms::MainMenu^  mainMenu1;
private: System::Windows::Forms::MenuItem^  menuItem1;
private: System::Windows::Forms::MenuItem^  menuItem2;
private: System::Windows::Forms::MenuItem^  menuItem3;
private: System::Windows::Forms::MenuItem^  menuItem4;
private: System::Windows::Forms::MenuItem^  menuItem5;
private: System::Windows::Forms::MenuItem^  menuItem6;
private: System::Windows::Forms::RichTextBox^  rtRezult;
private: System::Windows::Forms::MenuItem^  menuItem7;
private: System::Windows::Forms::MenuItem^  menuItem8;
private: System::Windows::Forms::MenuItem^  menuItem9;
private: System::Windows::Forms::RichTextBox^  rtBuffer;
private: System::Windows::Forms::MenuItem^  menuItem10;
private: System::Windows::Forms::MenuItem^  menuItem11;

private: System::Windows::Forms::Button^  pbDummy;
private: System::Windows::Forms::MenuItem^  menuItem13;
private: System::Windows::Forms::MenuItem^  menuItem14;
private: System::Windows::Forms::MenuItem^  menuItem15;
private: System::Windows::Forms::MenuItem^  menuItem16;
private: System::Windows::Forms::MenuItem^  menuItem17;
















		 static bool bReset = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pb1 = (gcnew System::Windows::Forms::Button());
			this->pb2 = (gcnew System::Windows::Forms::Button());
			this->pb3 = (gcnew System::Windows::Forms::Button());
			this->pb4 = (gcnew System::Windows::Forms::Button());
			this->pb5 = (gcnew System::Windows::Forms::Button());
			this->pb6 = (gcnew System::Windows::Forms::Button());
			this->pb7 = (gcnew System::Windows::Forms::Button());
			this->pb8 = (gcnew System::Windows::Forms::Button());
			this->pb9 = (gcnew System::Windows::Forms::Button());
			this->pb0 = (gcnew System::Windows::Forms::Button());
			this->pbDot = (gcnew System::Windows::Forms::Button());
			this->pbEq = (gcnew System::Windows::Forms::Button());
			this->pbPlus = (gcnew System::Windows::Forms::Button());
			this->pbMinus = (gcnew System::Windows::Forms::Button());
			this->pbMul = (gcnew System::Windows::Forms::Button());
			this->pbDiv = (gcnew System::Windows::Forms::Button());
			this->pbSign = (gcnew System::Windows::Forms::Button());
			this->pbClear = (gcnew System::Windows::Forms::Button());
			this->rtDisplay1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rtRegex = (gcnew System::Windows::Forms::RichTextBox());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->rtBuffer = (gcnew System::Windows::Forms::RichTextBox());
			this->rtRezult = (gcnew System::Windows::Forms::RichTextBox());
			this->rtDigits = (gcnew System::Windows::Forms::RichTextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->mainMenu1 = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->menuItem1 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem5 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem2 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem3 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem6 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem9 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem8 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem7 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem4 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem10 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem11 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem13 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem14 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem15 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem16 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem17 = (gcnew System::Windows::Forms::MenuItem());
			this->pbDummy = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->AutoWordSelection = true;
			this->textBox1->BackColor = System::Drawing::Color::PapayaWhip;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(117, 7);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = false;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(460, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"";
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->AcceptsTab = true;
			this->textBox2->AutoWordSelection = true;
			this->textBox2->BackColor = System::Drawing::Color::PapayaWhip;
			this->textBox2->Location = System::Drawing::Point(224, 473);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Multiline = false;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(633, 25);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"";
			this->textBox2->Visible = false;
			this->textBox2->WordWrap = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(11, 7);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(360, 144);
			this->richTextBox1->TabIndex = 2001;
			this->richTextBox1->TabStop = false;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			this->richTextBox1->Enter += gcnew System::EventHandler(this, &Form1::richTextBox1_Enter);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->richTextBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Sienna;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(23, 454);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Sienna;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(58, 454);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(33, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L":";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Sienna;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(93, 454);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(33, 34);
			this->button3->TabIndex = 5;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Sienna;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(128, 454);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(33, 34);
			this->button4->TabIndex = 6;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Sienna;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(343, 454);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(33, 34);
			this->button5->TabIndex = 9;
			this->button5->Text = L"F";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Sienna;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(378, 454);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(33, 34);
			this->button6->TabIndex = 10;
			this->button6->Text = L"D";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Sienna;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(163, 454);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(33, 34);
			this->button7->TabIndex = 7;
			this->button7->Text = L"yX";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Sienna;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(482, 454);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(33, 18);
			this->button8->TabIndex = 1;
			this->button8->Text = L"C";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			this->button8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::pbDiv_KeyDown);
			this->button8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::pbDiv_KeyPress);
			this->button8->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Sienna;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(198, 454);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(33, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"n!";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Sienna;
			this->checkBox1->Location = System::Drawing::Point(476, 483);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(77, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Remainder";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::PapayaWhip;
			this->richTextBox2->Location = System::Drawing::Point(668, 458);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox2->Multiline = false;
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
			this->richTextBox2->Size = System::Drawing::Size(129, 25);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->TabStop = false;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			this->richTextBox2->WordWrap = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::PapayaWhip;
			this->richTextBox3->Location = System::Drawing::Point(668, 473);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox3->Multiline = false;
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
			this->richTextBox3->Size = System::Drawing::Size(129, 25);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->TabStop = false;
			this->richTextBox3->Text = L"";
			this->richTextBox3->Visible = false;
			this->richTextBox3->WordWrap = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(360, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Copyright © 2010 Tutu Rulianda";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->progressBar1->Location = System::Drawing::Point(573, 492);
			this->progressBar1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(184, 13);
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"A Pro Calculator";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(573, 469);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Please wait a moment...";
			this->label4->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(418, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"[+]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(5, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 15);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Version 1.0";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Sienna;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(233, 454);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(33, 34);
			this->button10->TabIndex = 13;
			this->button10->Text = L"√X";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Sienna;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(268, 454);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(33, 34);
			this->button11->TabIndex = 14;
			this->button11->Text = L"N";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Sienna;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(303, 454);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(33, 34);
			this->button12->TabIndex = 15;
			this->button12->Text = L"P";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click_1);
			// 
			// pb1
			// 
			this->pb1->BackColor = System::Drawing::Color::LightGray;
			this->pb1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb1->ForeColor = System::Drawing::Color::Black;
			this->pb1->Location = System::Drawing::Point(5, 170);
			this->pb1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb1->Name = L"pb1";
			this->pb1->Size = System::Drawing::Size(36, 33);
			this->pb1->TabIndex = 0;
			this->pb1->TabStop = false;
			this->pb1->Text = L"1";
			this->pb1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb1->UseCompatibleTextRendering = true;
			this->pb1->UseVisualStyleBackColor = true;
			this->pb1->Click += gcnew System::EventHandler(this, &Form1::pb1_Click);
			this->pb1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb2
			// 
			this->pb2->BackColor = System::Drawing::Color::LightGray;
			this->pb2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb2->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb2->ForeColor = System::Drawing::Color::Black;
			this->pb2->Location = System::Drawing::Point(41, 170);
			this->pb2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb2->Name = L"pb2";
			this->pb2->Size = System::Drawing::Size(36, 33);
			this->pb2->TabIndex = 0;
			this->pb2->TabStop = false;
			this->pb2->Text = L"2";
			this->pb2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb2->UseCompatibleTextRendering = true;
			this->pb2->UseVisualStyleBackColor = true;
			this->pb2->Click += gcnew System::EventHandler(this, &Form1::pb2_Click);
			this->pb2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb3
			// 
			this->pb3->BackColor = System::Drawing::Color::LightGray;
			this->pb3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb3->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb3->ForeColor = System::Drawing::Color::Black;
			this->pb3->Location = System::Drawing::Point(77, 170);
			this->pb3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb3->Name = L"pb3";
			this->pb3->Size = System::Drawing::Size(36, 33);
			this->pb3->TabIndex = 0;
			this->pb3->TabStop = false;
			this->pb3->Text = L"3";
			this->pb3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb3->UseCompatibleTextRendering = true;
			this->pb3->UseVisualStyleBackColor = true;
			this->pb3->Click += gcnew System::EventHandler(this, &Form1::pb3_Click);
			this->pb3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb4
			// 
			this->pb4->BackColor = System::Drawing::Color::LightGray;
			this->pb4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb4->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb4->ForeColor = System::Drawing::Color::Black;
			this->pb4->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pb4->Location = System::Drawing::Point(5, 137);
			this->pb4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb4->Name = L"pb4";
			this->pb4->Size = System::Drawing::Size(36, 33);
			this->pb4->TabIndex = 0;
			this->pb4->TabStop = false;
			this->pb4->Text = L"4";
			this->pb4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb4->UseCompatibleTextRendering = true;
			this->pb4->UseVisualStyleBackColor = true;
			this->pb4->Click += gcnew System::EventHandler(this, &Form1::pb4_Click);
			this->pb4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb4->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb5
			// 
			this->pb5->BackColor = System::Drawing::Color::LightGray;
			this->pb5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb5->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb5->ForeColor = System::Drawing::Color::Black;
			this->pb5->Location = System::Drawing::Point(41, 137);
			this->pb5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb5->Name = L"pb5";
			this->pb5->Size = System::Drawing::Size(36, 33);
			this->pb5->TabIndex = 0;
			this->pb5->TabStop = false;
			this->pb5->Text = L"5";
			this->pb5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb5->UseCompatibleTextRendering = true;
			this->pb5->UseVisualStyleBackColor = true;
			this->pb5->Click += gcnew System::EventHandler(this, &Form1::pb5_Click);
			this->pb5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb6
			// 
			this->pb6->BackColor = System::Drawing::Color::LightGray;
			this->pb6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb6->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb6->ForeColor = System::Drawing::Color::Black;
			this->pb6->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pb6->Location = System::Drawing::Point(77, 137);
			this->pb6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb6->Name = L"pb6";
			this->pb6->Size = System::Drawing::Size(36, 33);
			this->pb6->TabIndex = 0;
			this->pb6->TabStop = false;
			this->pb6->Text = L"6";
			this->pb6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb6->UseCompatibleTextRendering = true;
			this->pb6->UseVisualStyleBackColor = true;
			this->pb6->Click += gcnew System::EventHandler(this, &Form1::pb6_Click);
			this->pb6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb6->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb7
			// 
			this->pb7->BackColor = System::Drawing::Color::LightGray;
			this->pb7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb7->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb7->ForeColor = System::Drawing::Color::Black;
			this->pb7->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pb7->Location = System::Drawing::Point(5, 104);
			this->pb7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb7->Name = L"pb7";
			this->pb7->Size = System::Drawing::Size(36, 33);
			this->pb7->TabIndex = 0;
			this->pb7->TabStop = false;
			this->pb7->Text = L"7";
			this->pb7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pb7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb7->UseCompatibleTextRendering = true;
			this->pb7->UseVisualStyleBackColor = true;
			this->pb7->Click += gcnew System::EventHandler(this, &Form1::pb7_Click);
			this->pb7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb7->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb8
			// 
			this->pb8->BackColor = System::Drawing::Color::LightGray;
			this->pb8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb8->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb8->ForeColor = System::Drawing::Color::Black;
			this->pb8->Location = System::Drawing::Point(41, 104);
			this->pb8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb8->Name = L"pb8";
			this->pb8->Size = System::Drawing::Size(36, 33);
			this->pb8->TabIndex = 0;
			this->pb8->TabStop = false;
			this->pb8->Text = L"8";
			this->pb8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pb8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb8->UseCompatibleTextRendering = true;
			this->pb8->UseVisualStyleBackColor = true;
			this->pb8->Click += gcnew System::EventHandler(this, &Form1::pb8_Click);
			this->pb8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb8->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb9
			// 
			this->pb9->BackColor = System::Drawing::Color::LightGray;
			this->pb9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb9->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb9->ForeColor = System::Drawing::Color::Black;
			this->pb9->Location = System::Drawing::Point(77, 104);
			this->pb9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb9->Name = L"pb9";
			this->pb9->Size = System::Drawing::Size(36, 33);
			this->pb9->TabIndex = 0;
			this->pb9->TabStop = false;
			this->pb9->Text = L"9";
			this->pb9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->pb9->UseVisualStyleBackColor = true;
			this->pb9->Click += gcnew System::EventHandler(this, &Form1::pb9_Click);
			this->pb9->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb9->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pb0
			// 
			this->pb0->BackColor = System::Drawing::Color::LightGray;
			this->pb0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb0->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pb0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pb0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pb0->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pb0->ForeColor = System::Drawing::Color::Black;
			this->pb0->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pb0->Location = System::Drawing::Point(5, 203);
			this->pb0->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pb0->Name = L"pb0";
			this->pb0->Size = System::Drawing::Size(72, 33);
			this->pb0->TabIndex = 0;
			this->pb0->TabStop = false;
			this->pb0->Text = L"0";
			this->pb0->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pb0->UseCompatibleTextRendering = true;
			this->pb0->UseVisualStyleBackColor = true;
			this->pb0->Click += gcnew System::EventHandler(this, &Form1::pb0_Click);
			this->pb0->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pb0->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pb0->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbDot
			// 
			this->pbDot->BackColor = System::Drawing::Color::LightGray;
			this->pbDot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbDot->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbDot->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbDot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbDot->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbDot->ForeColor = System::Drawing::Color::Black;
			this->pbDot->Location = System::Drawing::Point(77, 203);
			this->pbDot->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbDot->Name = L"pbDot";
			this->pbDot->Size = System::Drawing::Size(36, 33);
			this->pbDot->TabIndex = 0;
			this->pbDot->TabStop = false;
			this->pbDot->Text = L".";
			this->pbDot->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbDot->UseCompatibleTextRendering = true;
			this->pbDot->UseVisualStyleBackColor = true;
			this->pbDot->Click += gcnew System::EventHandler(this, &Form1::pbDot_Click);
			this->pbDot->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbDot->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbDot->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbEq
			// 
			this->pbEq->BackColor = System::Drawing::Color::LightGray;
			this->pbEq->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbEq->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbEq->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbEq->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbEq->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbEq->ForeColor = System::Drawing::Color::Black;
			this->pbEq->Location = System::Drawing::Point(113, 170);
			this->pbEq->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbEq->Name = L"pbEq";
			this->pbEq->Size = System::Drawing::Size(36, 66);
			this->pbEq->TabIndex = 0;
			this->pbEq->TabStop = false;
			this->pbEq->Text = L"=";
			this->pbEq->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbEq->UseCompatibleTextRendering = true;
			this->pbEq->UseVisualStyleBackColor = true;
			this->pbEq->Click += gcnew System::EventHandler(this, &Form1::pbEq_Click);
			this->pbEq->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbEq->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbEq->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbPlus
			// 
			this->pbPlus->BackColor = System::Drawing::Color::LightGray;
			this->pbPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbPlus->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbPlus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbPlus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbPlus->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbPlus->ForeColor = System::Drawing::Color::Black;
			this->pbPlus->Location = System::Drawing::Point(113, 137);
			this->pbPlus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbPlus->Name = L"pbPlus";
			this->pbPlus->Size = System::Drawing::Size(36, 33);
			this->pbPlus->TabIndex = 28;
			this->pbPlus->TabStop = false;
			this->pbPlus->Text = L"+";
			this->pbPlus->UseCompatibleTextRendering = true;
			this->pbPlus->UseVisualStyleBackColor = true;
			this->pbPlus->Click += gcnew System::EventHandler(this, &Form1::pbPlus_Click);
			this->pbPlus->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbPlus->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbPlus->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbMinus
			// 
			this->pbMinus->BackColor = System::Drawing::Color::LightGray;
			this->pbMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbMinus->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbMinus->ForeColor = System::Drawing::Color::Black;
			this->pbMinus->Location = System::Drawing::Point(113, 104);
			this->pbMinus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbMinus->Name = L"pbMinus";
			this->pbMinus->Size = System::Drawing::Size(36, 33);
			this->pbMinus->TabIndex = 0;
			this->pbMinus->TabStop = false;
			this->pbMinus->Text = L"-";
			this->pbMinus->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbMinus->UseCompatibleTextRendering = true;
			this->pbMinus->UseVisualStyleBackColor = true;
			this->pbMinus->Click += gcnew System::EventHandler(this, &Form1::pbMinus_Click);
			this->pbMinus->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbMinus->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbMinus->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbMul
			// 
			this->pbMul->BackColor = System::Drawing::Color::LightGray;
			this->pbMul->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbMul->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbMul->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbMul->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbMul->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbMul->ForeColor = System::Drawing::Color::Black;
			this->pbMul->Location = System::Drawing::Point(113, 71);
			this->pbMul->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbMul->Name = L"pbMul";
			this->pbMul->Size = System::Drawing::Size(36, 33);
			this->pbMul->TabIndex = 0;
			this->pbMul->TabStop = false;
			this->pbMul->Text = L"✕";
			this->pbMul->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbMul->UseCompatibleTextRendering = true;
			this->pbMul->UseVisualStyleBackColor = true;
			this->pbMul->Click += gcnew System::EventHandler(this, &Form1::pbMul_Click);
			this->pbMul->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbMul->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbMul->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbDiv
			// 
			this->pbDiv->BackColor = System::Drawing::Color::LightGray;
			this->pbDiv->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbDiv->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbDiv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbDiv->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbDiv->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbDiv->ForeColor = System::Drawing::Color::Black;
			this->pbDiv->Location = System::Drawing::Point(77, 71);
			this->pbDiv->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbDiv->Name = L"pbDiv";
			this->pbDiv->Size = System::Drawing::Size(36, 33);
			this->pbDiv->TabIndex = 0;
			this->pbDiv->TabStop = false;
			this->pbDiv->Text = L"÷";
			this->pbDiv->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbDiv->UseCompatibleTextRendering = true;
			this->pbDiv->UseVisualStyleBackColor = true;
			this->pbDiv->Click += gcnew System::EventHandler(this, &Form1::pbDiv_Click);
			this->pbDiv->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbDiv->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbDiv->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbSign
			// 
			this->pbSign->BackColor = System::Drawing::Color::LightGray;
			this->pbSign->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbSign->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbSign->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbSign->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbSign->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbSign->ForeColor = System::Drawing::Color::Black;
			this->pbSign->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->pbSign->Location = System::Drawing::Point(5, 71);
			this->pbSign->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbSign->Name = L"pbSign";
			this->pbSign->Size = System::Drawing::Size(36, 33);
			this->pbSign->TabIndex = 0;
			this->pbSign->TabStop = false;
			this->pbSign->Text = L"∓";
			this->pbSign->UseVisualStyleBackColor = true;
			this->pbSign->Click += gcnew System::EventHandler(this, &Form1::pbSign_Click);
			this->pbSign->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbSign->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbSign->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// pbClear
			// 
			this->pbClear->BackColor = System::Drawing::Color::LightGray;
			this->pbClear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->pbClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->pbClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->pbClear->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pbClear->ForeColor = System::Drawing::Color::Black;
			this->pbClear->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->pbClear->Location = System::Drawing::Point(5, 5);
			this->pbClear->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pbClear->Name = L"pbClear";
			this->pbClear->Size = System::Drawing::Size(36, 33);
			this->pbClear->TabIndex = 0;
			this->pbClear->TabStop = false;
			this->pbClear->Text = L"C";
			this->pbClear->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->pbClear->UseCompatibleTextRendering = true;
			this->pbClear->UseVisualStyleBackColor = true;
			this->pbClear->Click += gcnew System::EventHandler(this, &Form1::pbClear_Click);
			this->pbClear->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->pbClear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->pbClear->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// rtDisplay1
			// 
			this->rtDisplay1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rtDisplay1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtDisplay1->DetectUrls = false;
			this->rtDisplay1->EnableAutoDragDrop = true;
			this->rtDisplay1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rtDisplay1->HideSelection = false;
			this->rtDisplay1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->rtDisplay1->Location = System::Drawing::Point(38, 25);
			this->rtDisplay1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rtDisplay1->Multiline = false;
			this->rtDisplay1->Name = L"rtDisplay1";
			this->rtDisplay1->ReadOnly = true;
			this->rtDisplay1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->rtDisplay1->Size = System::Drawing::Size(335, 16);
			this->rtDisplay1->TabIndex = 2000;
			this->rtDisplay1->Text = L"0";
			this->rtDisplay1->Enter += gcnew System::EventHandler(this, &Form1::rtDisplay1_Enter_1);
			this->rtDisplay1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->rtDisplay1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->rtDisplay1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(41, 71);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(36, 33);
			this->button13->TabIndex = 0;
			this->button13->TabStop = false;
			this->button13->Text = L"\\";
			this->button13->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button13->UseCompatibleTextRendering = true;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			this->button13->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button13->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightGray;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(113, 38);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(36, 33);
			this->button14->TabIndex = 0;
			this->button14->TabStop = false;
			this->button14->Text = L"x!";
			this->button14->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button14->UseCompatibleTextRendering = true;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			this->button14->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button14->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button15
			// 
			this->button15->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button15->BackColor = System::Drawing::Color::LightGray;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->Location = System::Drawing::Point(77, 38);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(36, 33);
			this->button15->TabIndex = 0;
			this->button15->TabStop = false;
			this->button15->Text = L"x";
			this->button15->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button15->UseCompatibleTextRendering = true;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			this->button15->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button15->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightGray;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(5, 38);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(36, 33);
			this->button16->TabIndex = 0;
			this->button16->TabStop = false;
			this->button16->Text = L"√x";
			this->button16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button16->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button16->UseCompatibleTextRendering = true;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			this->button16->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button16->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightGray;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(41, 38);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(36, 33);
			this->button17->TabIndex = 0;
			this->button17->TabStop = false;
			this->button17->Text = L"x";
			this->button17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button17->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button17->UseCompatibleTextRendering = true;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			this->button17->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button17->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::LightGray;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(41, 5);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(108, 33);
			this->button18->TabIndex = 0;
			this->button18->TabStop = false;
			this->button18->Text = L"Prime Number";
			this->button18->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button18->UseCompatibleTextRendering = true;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			this->button18->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyDown);
			this->button18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::rtDisplay1_KeyPress);
			this->button18->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::rtDisplay1_KeyUp);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pbMinus);
			this->panel1->Controls->Add(this->pb7);
			this->panel1->Controls->Add(this->pb8);
			this->panel1->Controls->Add(this->pb9);
			this->panel1->Controls->Add(this->pbMul);
			this->panel1->Controls->Add(this->pbPlus);
			this->panel1->Controls->Add(this->pbDiv);
			this->panel1->Controls->Add(this->pbDot);
			this->panel1->Controls->Add(this->pb0);
			this->panel1->Controls->Add(this->pb4);
			this->panel1->Controls->Add(this->pb5);
			this->panel1->Controls->Add(this->pb6);
			this->panel1->Controls->Add(this->pbEq);
			this->panel1->Controls->Add(this->pbClear);
			this->panel1->Controls->Add(this->pbSign);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->pb1);
			this->panel1->Controls->Add(this->pb2);
			this->panel1->Controls->Add(this->pb3);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Location = System::Drawing::Point(387, 55);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 331);
			this->panel1->TabIndex = 1;
			this->panel1->TabStop = true;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->rtRegex);
			this->panel2->Controls->Add(this->lblDisplay);
			this->panel2->Controls->Add(this->rtDisplay1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(-3, 55);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(387, 51);
			this->panel2->TabIndex = 41;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// rtRegex
			// 
			this->rtRegex->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rtRegex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtRegex->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rtRegex->Location = System::Drawing::Point(38, 2);
			this->rtRegex->Multiline = false;
			this->rtRegex->Name = L"rtRegex";
			this->rtRegex->ReadOnly = true;
			this->rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->rtRegex->Size = System::Drawing::Size(335, 19);
			this->rtRegex->TabIndex = 2;
			this->rtRegex->TabStop = false;
			this->rtRegex->Text = L"";
			this->rtRegex->Enter += gcnew System::EventHandler(this, &Form1::rtRegex_Enter);
			// 
			// lblDisplay
			// 
			this->lblDisplay->AutoSize = true;
			this->lblDisplay->Location = System::Drawing::Point(5, 4);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(0, 17);
			this->lblDisplay->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->rtBuffer);
			this->panel3->Controls->Add(this->rtRezult);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->rtDigits);
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(-1, 107);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(385, 186);
			this->panel3->TabIndex = 42;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			// 
			// rtBuffer
			// 
			this->rtBuffer->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rtBuffer->Location = System::Drawing::Point(152, 35);
			this->rtBuffer->Name = L"rtBuffer";
			this->rtBuffer->Size = System::Drawing::Size(100, 96);
			this->rtBuffer->TabIndex = 3;
			this->rtBuffer->Text = L"";
			this->rtBuffer->Visible = false;
			// 
			// rtRezult
			// 
			this->rtRezult->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rtRezult->Location = System::Drawing::Point(59, 59);
			this->rtRezult->Name = L"rtRezult";
			this->rtRezult->Size = System::Drawing::Size(257, 96);
			this->rtRezult->TabIndex = 2;
			this->rtRezult->Text = L"";
			this->rtRezult->Visible = false;
			// 
			// rtDigits
			// 
			this->rtDigits->BackColor = System::Drawing::Color::White;
			this->rtDigits->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtDigits->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rtDigits->Location = System::Drawing::Point(7, 161);
			this->rtDigits->Multiline = false;
			this->rtDigits->Name = L"rtDigits";
			this->rtDigits->ReadOnly = true;
			this->rtDigits->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->rtDigits->Size = System::Drawing::Size(364, 14);
			this->rtDigits->TabIndex = 1;
			this->rtDigits->TabStop = false;
			this->rtDigits->Text = L"";
			this->rtDigits->Enter += gcnew System::EventHandler(this, &Form1::rtDigits_Enter);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightGray;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(-1, -1);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(594, 55);
			this->panel4->TabIndex = 43;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel4_Paint);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label2);
			this->panel5->ForeColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(-3, 27);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(600, 25);
			this->panel5->TabIndex = 9;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel5_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(438, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"All rights reserved.";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel6->ForeColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(-3, 0);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(600, 27);
			this->panel6->TabIndex = 10;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel6_Paint);
			// 
			// mainMenu1
			// 
			this->mainMenu1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(3) {this->menuItem1, this->menuItem3, 
				this->menuItem13});
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			this->menuItem1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(2) {this->menuItem5, this->menuItem2});
			this->menuItem1->Text = L"File";
			// 
			// menuItem5
			// 
			this->menuItem5->Index = 0;
			this->menuItem5->Text = L"Save";
			this->menuItem5->Click += gcnew System::EventHandler(this, &Form1::menuItem5_Click);
			// 
			// menuItem2
			// 
			this->menuItem2->Index = 1;
			this->menuItem2->Text = L"Quit";
			this->menuItem2->Click += gcnew System::EventHandler(this, &Form1::menuItem2_Click);
			// 
			// menuItem3
			// 
			this->menuItem3->Index = 1;
			this->menuItem3->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(7) {this->menuItem6, this->menuItem9, 
				this->menuItem8, this->menuItem7, this->menuItem4, this->menuItem10, this->menuItem11});
			this->menuItem3->Text = L"Edit";
			// 
			// menuItem6
			// 
			this->menuItem6->Index = 0;
			this->menuItem6->Text = L"Copy Input Number";
			this->menuItem6->Click += gcnew System::EventHandler(this, &Form1::menuItem6_Click);
			// 
			// menuItem9
			// 
			this->menuItem9->Index = 1;
			this->menuItem9->Text = L"Paste To Input Number - Ctrl V";
			this->menuItem9->Click += gcnew System::EventHandler(this, &Form1::menuItem9_Click);
			// 
			// menuItem8
			// 
			this->menuItem8->Index = 2;
			this->menuItem8->Text = L"-";
			// 
			// menuItem7
			// 
			this->menuItem7->Index = 3;
			this->menuItem7->Text = L"Copy Result Number - Ctrl C";
			this->menuItem7->Click += gcnew System::EventHandler(this, &Form1::menuItem7_Click);
			// 
			// menuItem4
			// 
			this->menuItem4->Index = 4;
			this->menuItem4->Text = L"Copy Result Detail";
			this->menuItem4->Click += gcnew System::EventHandler(this, &Form1::menuItem4_Click);
			// 
			// menuItem10
			// 
			this->menuItem10->Index = 5;
			this->menuItem10->Text = L"-";
			// 
			// menuItem11
			// 
			this->menuItem11->Checked = true;
			this->menuItem11->Index = 6;
			this->menuItem11->RadioCheck = true;
			this->menuItem11->Text = L"Digit Grouping";
			this->menuItem11->Click += gcnew System::EventHandler(this, &Form1::menuItem11_Click);
			// 
			// menuItem13
			// 
			this->menuItem13->Index = 2;
			this->menuItem13->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(4) {this->menuItem14, this->menuItem15, 
				this->menuItem16, this->menuItem17});
			this->menuItem13->Text = L"Big Numbers Demo";
			this->menuItem13->Click += gcnew System::EventHandler(this, &Form1::menuItem13_Click);
			// 
			// menuItem14
			// 
			this->menuItem14->Index = 0;
			this->menuItem14->Text = L"Addition";
			this->menuItem14->Click += gcnew System::EventHandler(this, &Form1::menuItem14_Click_1);
			// 
			// menuItem15
			// 
			this->menuItem15->Index = 1;
			this->menuItem15->Text = L"Subtraction";
			this->menuItem15->Click += gcnew System::EventHandler(this, &Form1::menuItem15_Click);
			// 
			// menuItem16
			// 
			this->menuItem16->Index = 2;
			this->menuItem16->Text = L"Multiplication";
			this->menuItem16->Click += gcnew System::EventHandler(this, &Form1::menuItem16_Click);
			// 
			// menuItem17
			// 
			this->menuItem17->Index = 3;
			this->menuItem17->Text = L"Division";
			this->menuItem17->Click += gcnew System::EventHandler(this, &Form1::menuItem17_Click);
			// 
			// pbDummy
			// 
			this->pbDummy->Location = System::Drawing::Point(632, 33);
			this->pbDummy->Name = L"pbDummy";
			this->pbDummy->Size = System::Drawing::Size(75, 23);
			this->pbDummy->TabIndex = 1;
			this->pbDummy->Text = L"button19";
			this->pbDummy->UseVisualStyleBackColor = true;
			this->pbDummy->Click += gcnew System::EventHandler(this, &Form1::pbDummy_Click);
			this->pbDummy->Enter += gcnew System::EventHandler(this, &Form1::pbDummy_Enter);
			this->pbDummy->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::pbDummy_KeyDown);
			this->pbDummy->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::pbDummy_KeyPress);
			this->pbDummy->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::pbDummy_KeyUp);
			this->pbDummy->Leave += gcnew System::EventHandler(this, &Form1::pbDummy_Leave);
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(541, 297);
			this->Controls->Add(this->pbDummy);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Menu = this->mainMenu1;
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"ProCalc™";
			this->TransparencyKey = System::Drawing::Color::Gainsboro;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

void func_activateLayout(bool b) {
	if (b) {
		rtRegex->ResumeLayout();
		rtDisplay1->ResumeLayout();
		richTextBox1->ResumeLayout();
		rtDigits->ResumeLayout();
		textBox1->ResumeLayout();
		rtBuffer->ResumeLayout();
		rtRezult->ResumeLayout();
	}
	else {
		rtRegex->SuspendLayout();
		rtDisplay1->SuspendLayout();
		richTextBox1->SuspendLayout();
		rtDigits->SuspendLayout();
		rtBuffer->SuspendLayout();
		textBox1->SuspendLayout();
		rtRezult->SuspendLayout();
	}
}

void func_elapsedTime(time_t t1, unsigned short millitm1) {
	struct _timeb t3;
	time_t t2;	
	double d;
	unsigned short millitm2;
	String ^sTemp;
	String ^sTemp2;
	String ^sTemp3;
	_ftime64_s(&t3);
	t2 = t3.time;
	millitm2 = t3.millitm;
	d = difftime(t2, t1);
	d = (d * 1000.0 + millitm2 - millitm1) / 1000.0;
	sTemp = func_convFormat(String::Format("{0,30:F3}", d)->Trim());
	sTemp = sTemp->Concat(sTemp," seconds\n\n");
	sTemp2 = ""; //richTextBox1->Text;
	sTemp3 = "Calculated within ";
	sTemp3 = sTemp2->Concat(sTemp3, sTemp, sTemp2);
	rtDigits->Text = sTemp3;
	rtRegex->Text = "";
	timer1->Start();
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc1_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {	
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc7_DoWork(this, e1);
	//if (sTemp->StartsWith("*"))
		//richTextBox1->Text = sTemp->Substring(1);
	//else
	//	richTextBox1->Text = sTemp;
	//func_elapsedTime(t1, millitm1);
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc8_DoWork(this, e1);
}



private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc2_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc3_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc4_DoWork(this, e1, true);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc5_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = ""; 
	textBox2->Text = "";
	richTextBox1->Text = "";
	richTextBox2->Text = "";
	richTextBox3->Text = "";
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc6_DoWork(this, e1);
	//if (sTemp->StartsWith("*"))
	//	richTextBox1->Text = sTemp->Substring(1);
	//else
	richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
}

private: String ^func_proc1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	return func_procMul(sI1, sI2, true);
}


private: String ^func_proc2_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sTemp = func_procDiv(sI1, sI2, true, 42, false);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	return richTextBox1->Text;
}

private: String ^func_proc3_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	return func_procAdd(sI1, sI2, true);
}


private: String ^func_proc4_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e, bool bdisplayed) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	return func_procSub(sI1, sI2, true);
}


String ^func_calcNPOWER(String ^sI1, String ^sI2, bool bdisplayed) {
	Int32 i, m, k;
	Int32 n;
	String ^sI3;
	String ^sI4;
	String ^sI5;
	String ^sI6;
	String ^sI7;
	String ^sI8;
	String ^sFig1;
	String ^sZ;
	bool bfloat1;
	String ^sTemp;
	Int32 n1, n2;

	sI3 = "";
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sFig1 = sI1;
		
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}
	if (func_checkNeg(sI1)) {
		if (sI1->Length > 5) {
			return "*Number length overflow";
		}
	}
	else {
		if (sI1->Length > 4){
			return "*Number length overflow";
		}
	}
	if (func_checkFloat(sI2)) {
		if (func_decLength(sI2) > 100) {
			return "*Number length overflow";
		}
	}	
	
	n = Convert::ToInt32(sI1);
	if (func_checkFloat(sI1)) {
		return "*Number type cannot be real number";
	}	
	if (n > 9999) {
		return "*Number exceeds 9999";
	}
	bfloat1 = func_checkFloat(sI1);

		label4->Visible = true;
		Application::UseWaitCursor = true;
	sI1 = func_unformatNumber(sI1);
	sI2 = func_unformatNumber(sI2);
	
	if (func_checkNeg(sFig1)) {
		sI4 = func_unformatNumber(sFig1);
		sI4 = sI4->Substring(1);
		n = Convert::ToInt32(sI4);
		sI8 = func_procDiv("1", sI2, false, 17, false);
		sI7 = "1";
		n1 = func_numFloat(sI8);
		n2 = 0;
		sI8 = func_rtrim(func_stripFloat(sI8));
		for (i = 1; i <= n; i ++) {
			sI7 = func_multiply(sI8, sI7);
			n2 = n2 + n1;
		}		
		sI3 = func_insComma(sI7, -n2);
	}
	else if (n > 1) {
		m = n / 2;
		k = n - (m * 2);
		sI6 = sI2;
		sI4 = "1";
		for (i = 1; i <= n; i ++) {
			sI3 = func_procMul(sI6, sI4, false);
			sI4 = sI3;
		}
		if (k > 0) {
			sI5 = func_procMul(sI4, sI4, false);
			for (i = 1; i < k; i ++) {
				sI5 = func_procMul(sI5, sI2, false);
			}
		}
	}
	else if (n == 1) {
		sI3 = sI1;
	}	
	else if (n == 0) {
		sI3 = "1";
	}
	if (func_checkFloat(sI3) == true) {
		sI3 = func_rtrim(sI3);
	}
	
	sI1 = sFig1;
	if (bdisplayed) {
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " power of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
		Application::UseWaitCursor = false;
		label4->Visible = false;
	return sZ->Trim();
	}
	else 
		return sI3;
}

private: String ^func_proc5_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	return func_calcNPOWER(textBox1->Text, textBox2->Text, true);
}

private: String ^func_proc6_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	Int32 n;	
	String ^sI1;
	String ^sI2;
	String ^sI3;
	String ^sI7;
	String ^sFig1;
	String ^sZ;
	bool bfloat1;
	String ^sTemp;

	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sFig1 = sI1;
	
	sI1 = func_trim(sI1);
	sI2 = func_trim(sI2);
	
	if (func_isNumber(sI1)) {
	}
	else {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2)) {
	}
	else {
		return "*Not a valid number";
	}
	
	if (func_isValid(sI1)) {
	}
	else {
		return "*Number length overflow";
	}
	if (func_isValid(sI2)) {
	}
	else {
		return "*Number length overflow";
	}	
	
	if (func_checkNeg(sFig1)) {
		return "*Number must be positive";		
	}
		
	n = Convert::ToInt32(sI1);
	if (func_checkFloat(sI1)) {
		return "*Number must be positive";
	}
	
	if (n > 1500) {
		return "*Number exceeds 1500";
	}
	bfloat1 = func_checkFloat(sI1);
	
	if (bfloat1) {
		return "*Number must be positive integer";
	}
	
	label4->Visible = true;
	Application::UseWaitCursor = true;
	sI1 = func_unformatNumber(sI1);
	sI2 = "";
	
	sI3 = func_factorial(sI1);
	
	sI1 = sFig1;
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of factorial of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	Application::UseWaitCursor = false;
	label4->Visible = false;
	return sZ->Trim();
}

private: String ^func_proc7_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	label4->Visible = true;
	Application::UseWaitCursor = true;
	sI1 = func_formatNumber(textBox1->Text->Trim());
	sI2 = func_formatNumber(textBox2->Text->Trim());
	textBox1->Text = sI1->Trim();
	textBox2->Text = sI2->Trim();
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	Application::UseWaitCursor = false;
	label4->Visible = false;
	return "";
}

private: String ^func_proc8_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	String ^sI1;
	String ^sI2;
	String ^sTemp;
	label4->Visible = true;
	Application::UseWaitCursor = true;
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	textBox1->Text = sI1->Trim();
	textBox2->Text = sI2->Trim();
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	Application::UseWaitCursor = false;
	label4->Visible = false;
	return "";
}

private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Int32 i;
		//rtDisplay1->SuspendLayout();
		//label5->SuspendLayout();
		i = tickCounter / 32;
		if (tickCounter - i * 32 == 0) {
			label5->Text ="[ ]";
		}
		else if (tickCounter - i * 32 == 1) {
			label5->Text ="[ ]";
		}
		else if (tickCounter - i * 32 == 2) {
			label5->Text ="[]";
		}
		else if (tickCounter - i * 32 == 3) {
			label5->Text ="[]";
		}
		else if (tickCounter - i * 32 == 4) {
			label5->Text ="]";
		}
		else if (tickCounter - i * 32 == 5) {
			label5->Text ="]";
		}
		else if (tickCounter - i * 32 == 6) {
			label5->Text ="|";
		}
		else if (tickCounter - i * 32 == 7) {
			label5->Text ="|";
		}
		else if (tickCounter - i * 32 == 8) {
			label5->Text ="--";
		}
		else if (tickCounter - i * 32 == 9) {
			label5->Text ="--";
		}
		else if (tickCounter - i * 32 == 10) {
			label5->Text ="[";
		}
		else if (tickCounter - i * 32 == 11) {
			label5->Text ="[";
		}
		else if (tickCounter - i * 32 == 12) {
			label5->Text ="][";
		}
		else if (tickCounter - i * 32 == 13) {
			label5->Text ="][";
		}
		else if (tickCounter - i * 32 == 14) {
			label5->Text ="] [";
		}
		else if (tickCounter - i * 32 == 15) {
			label5->Text ="] [";
		}
		else if (tickCounter - i * 32 == 16) {
			label5->Text =" ][";
		}
		else if (tickCounter - i * 32 == 17) {
			label5->Text =" ][";
		}
		else if (tickCounter - i * 32 == 18) {
			label5->Text ="  ]";
		}
		else if (tickCounter - i * 32 == 19) {
			label5->Text ="  ]";
		}
		else if (tickCounter - i * 32 == 20) {
			label5->Text ="  |";
		}
		else if (tickCounter - i * 32 == 21) {
			label5->Text ="  |";
		}
		else if (tickCounter - i * 32 == 22) {
			label5->Text =" --";
		}
		else if (tickCounter - i * 32 == 23) {
			label5->Text =" --";
		}
		else if (tickCounter - i * 32 == 24) {
			label5->Text ="  [";
		}
		else if (tickCounter - i * 32 == 25) {
			label5->Text ="  [";
		}
		else if (tickCounter - i * 32 == 26) {
			label5->Text =" []";
		}
		else if (tickCounter - i * 32 == 27) {
			label5->Text =" []";
		}
		else if (tickCounter - i * 32 == 28) {
			label5->Text ="[ ]";
		}
		else if (tickCounter - i * 32 == 29) {
			label5->Text ="[ ]";
		}
		else if (tickCounter - i * 32 == 30) {
			label5->Text ="[+]";
		}
		else if (tickCounter - i * 32 == 31) {
			label5->Text ="[+]";
		}
		tickCounter ++;
		//label5->ResumeLayout();
		//rtDisplay1->ResumeLayout();
		 }	
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc10_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
		 }

String ^func_roundSQRT(String ^sI1, String ^sI9) {
	Int32 k;
	String ^sTemp;
	if ((sI1->Contains(".000000000000000000000000000000000004")) || (sI1->Contains(".00000000000000000000000000000000000000005")) || (sI1->Contains(".0000000000000000000000000000000003")) || (sI1->Contains(".00000000000000000000000000000000000000000")) || (sI1->Contains(".999999999999")) || (sI1->Contains(".0000000000000000000000000000000000009"))) {
		k = func_decLength(sI1) + 1;
	}
	else
		k = 0;
	if (k > 0) {
		if (sI1->Contains(".999999999999")) { 
			sTemp = sI1->Substring(0, k - 1);
			sTemp = func_cadd(sTemp, "1");
		}
		else if ((sI1->Contains(".000000000000000000000000000000000004")) || (sI1->Contains(".00000000000000000000000000000000000000005")) || (sI1->Contains(".0000000000000000000000000000000003")) || (sI1->Contains(".00000000000000000000000000000000000000000")) || (sI1->Contains(".0000000000000000000000000000000000009"))) {
			sTemp = sI1->Substring(0, k - 1);
		}
		else 
			sTemp = sI1;
		if (sI9->Equals("0")) {
		}
		else if (func_csub(sI9, func_procMul(sTemp, sTemp, false))->Equals("0") == false) {
			sTemp = sI1;
		}
	}
	else
		sTemp = sI1;
	return sTemp;
}

private: String ^func_proc10_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	Int32 m;	
	String ^sI1;
	String ^sI2;
	String ^sI3;
	String ^sI7;
	String ^sFig1;
	String ^sZ;
	bool bfloat1;
	String ^sTemp;
	
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	sTemp = sI1;
	sI1 = sI2;
	sI2 = sTemp;
	if (sI2->Length < 10)
		m = Convert::ToInt32(sI2);
	else
		m = 0;
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sFig1 = sI1;
	
	sI1 = func_trim(sI1);
	sI2 = func_trim(sI2);
	
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}	
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}		
	if (func_checkNeg(sFig1)) {
		return "*Number must be positive";		
	}		
	if (func_checkFloat(sI1)) {
		return "*Number type must be positive integer";
	}
	bfloat1 = func_checkFloat(sI1);
	
	if (bfloat1) {
		return "*Number must be positive integer";
	}
	
	label4->Visible = true;
	Application::UseWaitCursor = true;
	if ((m > 0) && (m <= 4294967296)) {
		sI3 = func_turbo2ROOT(sI2);
	}
	else {
		sI3 = func_emul2ROOT(sI2);
	}
	bBigN = false;
	sI3 = func_roundSQRT(sI3, sI2);
	sI1 = sFig1;
	sZ = "";
	sZ = sZ->Concat(sZ, "The square root of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	Application::UseWaitCursor = false;
	label4->Visible = false;
	rtRegex->Text = "";
	return sZ->Trim();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc11_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
		 }

String ^func_calcNROOT(String ^sI1, String ^sI2, bool bdisplayed) {
	Int32 m, n;	
	String ^sI3;
	String ^sI7;
	String ^sI12;
	String ^sFig1;
	String ^sFig2;
	String ^sZ;
	bool bfloat1, bfloat2;
	String ^sTemp;
	sTemp = sI1;
	sI1 = sI2;
	sI2 = sTemp;
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sFig1 = sI1;
	sFig2 = sI2;	
	
	if (func_isNumber(sI1) == false) {
		return "*Not a valid number";
	}
	if (func_isNumber(sI2) == false) {
		return "*Not a valid number";
	}	
	if (func_isValid(sI1) == false) {
		return "*Number length overflow";
	}
	if (func_isValid(sI2) == false) {
		return "*Number length overflow";
	}		
	if (func_checkNeg(sFig1)) {
		return "*Number must be positive";		
	}		
	if (func_checkFloat(sI1)) {
		return "*Number type must be positive integer";
	}
	if (func_decLength(sI2) > 100) {
		return "*Number overflow";
	}
	bfloat1 = func_checkFloat(sI1);
	bfloat2 = func_checkFloat(sI2);
	n = sI2->Length;
	if (sI1->Length < 3) {
		if (Convert::ToInt32(sI1) > 15) 
			return "*Root number overflow";
	}
	else
		return "*Root number overflow";
	if ((bfloat1) || (bfloat2)) {
		return "*Numbers must be positive integer";
	}
	label4->Visible = true;
	Application::UseWaitCursor = true;
	if (sI2->Length < 10) 
		m = Convert::ToInt32(sI2);
	else
		m = 0;
	
	if (sI1->Equals("2")) {
		if ((m > 0) && (m <= 4294967296)) {
			sI3 = func_turbo2ROOT(sI2);
		}
		else {
			sI3 = func_emulNROOT("2", sI2);
		}
	}
	else {

	sI1 = func_unformatNumber(sI1);
	sI2 = func_unformatNumber(sI2);
	sI12 = sI2;
	if (sI12->Equals("0")) {
		sI3 = sI12;
	}
	else if (sI1->Equals("0")) {
		sI3 = "1";
	}
	else if ((m > 0) && (m <= 4294967296)) { //MAXIMUM 32-BIT INTEGER
		sI3 = func_turboNROOT(sI1, sI2);
		sI3 = func_roundSQRT(sI3, "0");
	}	
	else {
		sI3 = func_emulNROOT(sI1, sI2);	
	}
	}
	
	sI1 = sFig1;
	sZ = "";
	if (sI1->Equals("0")) {
	}
	else if (sI1->Equals("1")) {
		sI1 = sI1->Concat(sI1,"st");
	}
	else if (sI1->Equals("2")) {
		sI1 = sI1->Concat(sI1,"nd");
	}
	else if (sI1->Equals("3")) {
		sI1 = sI1->Concat(sI1,"rd");
	}
	else { 
		sI1 = sI1->Concat(sI1,"th");
	}
	if (bdisplayed) {
	sZ = sZ->Concat(sZ, "The ", sI1, "-root of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sFig2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	Application::UseWaitCursor = false;
	label4->Visible = false;
	return sZ->Trim();
	}
	else 
		return sI3;
}

private: String ^func_proc11_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 return func_calcNROOT(textBox1->Text, textBox2->Text, true);
		 }


String ^func_emulNROOT(String ^sI1, String ^sI2) {
	Int32 i, k, l, m, n, l1;	
	//String ^sTens = "600000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
	String ^sI5;
	String ^sI3;
	String ^sI6;
	String ^sI7;
	String ^sI9;
	String ^sI10;
	String ^sI12;
	String ^sI13;
	String ^sI14;
	String ^sI15;
	bool bloop;
	String ^sTemp;
	if (sI2->Equals("0"))
		return "0";

	func_initArray(0, 120010);
	bBigN = true;
	n = sI2->Length;
	sI14 = sI2->Substring(0, 1);
	dRound = true;
	sI14 = func_mdiv(sI14, "2", 0);
	dRound = false;
	sI13 = func_multiply(sI14, "2");
	sI12 = func_csub(sI2, sI13);
	i = n / 2;
	k = 2 * i + 1;
	n = Convert::ToInt32(sI1);
	m = sI2->Length;
	if (m < 69)
		k = (m - 1) / n;
	else
		k = m / n + n;
	if (n == 2)
		k = sI2->Length;
	l = k;
	i = m / 2;
	if (k == 3)
		sI5 = "2";
	else {
		if (m < 54)	{
			if (n < 6) {
				if (sI2->Substring(0, 1)->Equals("1"))
					sI5 = "9";
				else
					sI5 = "9";
			}
			else
				sI5 = "9";
		}
		else if (m < 56) {
			sI5 = "9";
			l = 8;
		}
		else if (m < 65) {
			sI5 = "9";
			l = 9;
		}
		else if (m < 74) {
			sI5 = "9";
			l = 10;
		}
		else if (m < 83) {
			sI5 = "9";
			l = 11;
		}
		else
			sI5 = "9";
	}
	sI7 = "1";
	if (n == 2) { 
		l = (sI2->Length) / 2;
		if (sI2->Length - sI2->Length / 2 * 2 != 0) {
			sI5 = "6";
			l += 1;
		}
	}
	else {
		sI5 = "6";
		l = (sI2->Length) / Convert::ToInt32(sI1);
		if (sI2->Length - sI2->Length / 2 * 2 != 0) {
			sI5 = "6";
			//l += 1;
		}
	}
	for (i = 1; i <= l; i ++) {
		sI7 = func_multiply(sI7,"10");
 	}
	if (sI2->Length > 70) 
		m = 4 * sI2->Length / 3 + 7 * Convert::ToInt32(sI1) / 3;
	else if (sI2->Length > 53) 
		m = 2 * sI2->Length / 2 + 7 * Convert::ToInt32(sI1) / 3;
	else if (sI2->Length > 20) 
		m = 17 * sI2->Length / 15 + 9 * Convert::ToInt32(sI1) / 15 + Convert::ToInt32(sI1) / 4;
	else
		m =	20 + Convert::ToInt32(sI1) / 2;
	l1 = sI2->Length;
	sI10 = func_procDiv("1", sI1, false, 2 * sI2->Length + 2 * Convert::ToInt32(sI1), true);
	sI15 = sI10;
	sI13 = func_procSub(sI1, "1", false); 
	sI12 = func_procMul(sI5, sI7, false);
	sI14 = "1";
	for (i = 1; i <= n - 1; i ++) {
		sI14 = func_trimFloat(func_procMul(sI14, sI12, false), m);  //100000000000000000000000000000000000000000000000000000000000000000000000
	}
	sI5 = func_trimFloat(func_procMul(sI12, sI13, false), m);
	sI6 = func_trimFloat(func_procDiv(sI2, sI14, false, m, true), m);
	sI7 = func_trimFloat(func_procAdd(sI5, sI6, false), m);
	sI9 = func_trimFloat(func_procDiv(sI7, sI1, false, m, true), m);
	sI5 = func_procSub(sI12, sI9, false);
	if ((sI5->StartsWith("0.000000000000000") == false) && (sI5->Equals("0") == false)) {
		bloop = true;
		l1 = sI2->Length + Convert::ToInt32(sI1) * Convert::ToInt32(sI1);
		while (bloop) {  
			sI12 = sI9;
			sI14 = "1";
			for (i = 1; i <= n - 1; i ++) {
				sI14 = func_trimFloat(func_procMul(sI14, sI12, false), m);
			}
			sI5 = func_trimFloat(func_procMul(sI9, sI13, false), m);
			sI6 = func_trimFloat(func_procDiv(sI2, sI14, false, m, true), m);
			sI7 = func_trimFloat(func_procAdd(sI5, sI6, false), m);
			sI9 = func_trimFloat(func_procDiv(sI7, sI1, false, m, true), m);
			sTemp = func_trimFloat(func_procSub(sI12, sI9, false), m);
			l = func_decLength(sTemp);
			if ((sTemp->Equals("0")) ||(sTemp->StartsWith("-0.0000000")) || (sTemp->StartsWith("0.0000000"))) {
				bloop = false;
				sI3 = sI9;
			} 
			else if ((sTemp->StartsWith("0.") == false) && (sTemp->StartsWith("-0.") == false)) {
				if ((l == 1)) { 
					m += 4;
				} 
				else if ((l == 2)) { 
					m += 3;
					//sI9 = func_trimFloat(func_procSub(sI9, "10", false), m);
				}
				else if ((l == 3)){
					m += 3;
					//sI9 = func_trimFloat(func_procSub(sI9, "100", false), m);
				}
				else if ((l == 4)) {
					m += 3;
					//sI9 = func_trimFloat(func_procSub(sI9, "1000", false), m);
				}
				else if (sTemp->StartsWith("-") == false) {
					//while (func_decLength(sI9) > sI2->Length / 2 + 1) {
					//sI9 = func_trimFloat(func_procDiv(sI9, "2", false, m, true), m);
					//}
				}
			}
			else if ((sTemp->StartsWith("0.")) || (sTemp->StartsWith("-0."))) {
				m += 5;
			}
		}
	}
	else
		sI3 = sI9;
	sI3 = func_roundSQRT(sI3, "0");
	return sI3;
}

String ^func_turboNROOT(String ^sI1, String ^sI2) {
	Int32 i, k, l, n;
	Double m, sI3, sI5, sI6, sI7, sI9, sI10, sI12, sI13, sI14;
	bool bloop;
	String ^sTemp2, ^sTemp;
	if (sI2->Equals("0"))
		return "0";

	n = sI2->Length;
	sI12 = n / 2;
	i = n / 2;
	k = 2 * i + 1;
	l = 2 * i + 2;
	sI7 = 1;
	sTemp = sI2;
	if (sI1->Equals("1"))
		return sI2;
	if (sI12 - sI12 * 2 == 0) {
		sI5 = 2.0;
	}
	else {
		sI5 = 6.0;
	}
	sI5 = 9.0;
	l = sI1->Length;
	l = n / l + 1;
	for (i = 1; i <= l; i ++) {
		sI7 = sI7 * 10.0;
 	}
	n = Convert::ToInt32(sI1);
	sI12 = Convert::ToDouble(sI2);
	m = sI12;
	sI10 = 1.0 / n;
	sI13 = n - 1.0; 
	sI12 = sI5 * sI7;
	sI14 = sI12;
	for (i = 2; i <= n - 1; i ++) {
		sI14 = sI14 * sI12;
	}
	sI5 = sI12 * sI13;
	sI6 = m / sI14;
	sI7 = sI5 + sI6;
	sI9 = sI7 / n;
	sI5 = sI9 - m;
	if ((abs(sI5) > 0.000000000000000000001) && (sI5 != 0)) {
		bloop = true;
		while (bloop) {
			sI12 = sI9;
			sI14 = sI12;
			for (i = 2; i <= n - 1; i ++) {
				sI14 = sI14 * sI12;
			}
			sI5 = sI9 * sI13;
			sI6 = m / sI14;
			sI7 = sI5 + sI6;
			sI9 = sI7 / n;
			if (sI12 - sI9 < 0.000000000000000000001) {
				bloop = false;
				sI3 = sI9;
			}
		}
		sI3 = sI9;
	}
	else
		sI3 = sI9;
	sTemp2 = func_convFormat(String::Format("{0,30:F17}", sI3)->Trim());
	sTemp2 = func_roundSQRT(sTemp2, "0");
	return sTemp2;
}

String ^func_emul2ROOT(String ^sI1) {
	Double i, k, l, n;
	String ^sI2;
	String ^sI3;
	String ^sI5;
	String ^sI8;
	String ^sI9;
	String ^sI7;
	String ^sI10;
	String ^sI11;
	String ^sTemp;
	Int32 m;
	bool bloop, bloat;
	if (sI1->Equals("0"))
		return "0";
	//return func_emulNROOT(sI1, sI2);
	bDiagnostic = true;
	n = sI1->Length / 2 - 1;
	sI2 = func_procDiv(sI1, "2", false, 0, false);
	i = n / 2;
	k = 2 * i + 1;
	l = 2 * i + 2;
	sI7 = "1";
	//if (bPrimeRemainder == false) {
	//	sI5 = "2";
	//}
	//else {
		sI5 = "9";
//	}
	n = (sI1->Length) / 2 + 1;
	for (i = 1; i < n; i ++) {
		sI7 = sI7->Concat(sI7, "0");
 	}
	
	sTemp = sI2;
	m = sI1->Length + 5;

	sI2 = func_trimFloat(func_procMul(sI5, sI7, false), m);
	sI5 = func_trimFloat(func_procMul(sI2, sI2, false), m);
	sI10 = func_trimFloat(func_procSub(sI5, sI1, false), m);
	sI7 = func_trimFloat(func_procMul(sI2, "2", false), m);
	sI11 = func_procDiv(sI10, sI7, false, m, true);
	sI9 = func_trimFloat(func_procSub(sI2, sI11, false), m);		
	sI8 = func_trimFloat(func_procMul(sI9, sI9, false), m);
	sI5 = func_trimFloat(func_procSub(sI8, sI1, false), m);
	//if ((sI5->StartsWith("0.00000000") == false) && (sI5->Equals("0") == false)) {
		bloop = true;
		sI8 = sI9;
		bloat = false;
		while (bloop) {
			sI5 = func_trimFloat(func_procMul(sI8, sI8, false), m);
			sI10 = func_trimFloat(func_procSub(sI5, sI1, false), m);
			sI7 = func_trimFloat(func_procMul(sI8, "2", false), m);
			sI11 = func_procDiv(sI10, sI7, false, m, true);
			sI9 = func_trimFloat(func_procSub(sI8, sI11, false), m);
			sI2 = func_trimFloat(func_procMul(sI9, sI9, false), m);
			sI5 = func_trimFloat(func_procSub(sI8, sI9, false), m);
			if ((sI5->StartsWith("0.00000000")) || (sI5->StartsWith("-0.00000000"))) {
				//if (sI5->StartsWith("-0.00000000"))
				//	sI9 = sI8;
				bloop = false;
			}
			else {
				sI8 = sI9;
				m += 1;
			}
		}
	//}
	sI3 = sI9;
	sI3 = func_roundSQRT(sI3, sI1);
	return sI3;
}

String ^func_turbo2ROOT(String ^sI1) {
	Double i, k, l, m, n, sI2, sI3, sI5, sI8, sI9, sI7, sI6;
	String ^sTemp2;
	bool bloop;
	if (sI1->Equals("0"))
		return "0";

	n = sI1->Length / 2 + 1;
	m = Convert::ToDouble(sI1);
	sI2 = m / 2;
	i = n / 2;
	k = 2 * i + 1;
	l = 2 * i + 2;
	sI7 = 1.0;
	if (m - sI2 * 2 == 0) {
		sI5 = 2.0;
	}
	else {
		sI5 = 6.0;
	}
	sI5 = 9.0;
	for (i = 1; i < n; i ++) {
		sI7 = sI7 * 10.0;
 	}
	sI2 = sI5 * sI7;
	sI5 = sI2 * sI2;
	sI6 = sI5 - m;
	sI7 = sI2 * 2;
	sI5 = sI6 / sI7;
	sI9 = sI2 - sI5;
	sI8 = sI9 * sI9;
	sI5 = sI8 - m;
	if ((abs(sI5) > 0.00000000001) && (sI5 != 0)) {
		sI8 = sI9;
		bloop = true;
		while (bloop) {
			sI5 = sI8 * sI8;
			sI6 = sI5 - m;
			sI7 = sI8 * 2;
			sI5 = sI6 / sI7;
			sI9 = sI8 - sI5;
			sI2 = sI9 * sI9;
			sI5 = sI8 - sI9;
			if (abs(sI5) < 0.00000000001)
				bloop = false;
			else
				sI8 = sI9;
		}
		sI3 = sI9;
	}
	else {
		sI3 = sI9;
	}
	sTemp2 = func_convFormat(String::Format("{0,30:F17}", sI3)->Trim());
	sTemp2 = func_roundSQRT(sTemp2, sI1);
	return sTemp2;
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	Int32 i, m, k;
	Int32 n;
	String ^sI1;
	String ^sI2;
	String ^sI3;
	String ^sI4;
	String ^sI5;
	String ^sI6;
	String ^sI7;
	String ^sI8;
	String ^sFig1;
	String ^sZ;
	bool bfloat1;
	String ^sTemp;
	Int32 n1, n2;

	sI3 = "";
	sI1 = func_unformatNumber(textBox1->Text->Trim());
	sI2 = func_unformatNumber(textBox2->Text->Trim());
	richTextBox2->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI1)))->Trim();
	richTextBox3->Text = String::Format("{0,10:G}", func_numDigit(func_unformatNumber(sI2)))->Trim();
	textBox1->Text = func_formatNumber(textBox1->Text);
	textBox2->Text = func_formatNumber(textBox2->Text);
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox2->Text, "-Digit)");
	richTextBox2->Text = sTemp;
	sTemp = "";
	sTemp = sTemp->Concat("  (", richTextBox3->Text, "-Digit)");
	richTextBox3->Text = sTemp;
	sFig1 = sI1;
		
	if (func_isNumber(sI1) == false) {
		return;
	}
	if (func_isNumber(sI2) == false) {
		return;
	}
	if (func_checkNeg(sI1)) {
		if (sI1->Length > 5) {
			return;
		}
	}
	else {
		if (sI1->Length > 4){
			return;
		}
	}
	if (func_checkFloat(sI2)) {
		if (func_decLength(sI2) > 100) {
			return;
		}
	}	
	n = Convert::ToInt32(sI1);
	if (func_checkFloat(sI1)) {
		return;
	}	
	if (n > 9999) {
		return;
	}
	bfloat1 = func_checkFloat(sI1);

	label4->Visible = true;
	Application::UseWaitCursor = true;
	
	sI1 = func_unformatNumber(sI1);
	sI2 = func_unformatNumber(sI2);
	
	if (func_checkNeg(sFig1)) {
		sI4 = func_unformatNumber(sFig1);
		sI4 = sI4->Substring(1);
		n = Convert::ToInt32(sI4);
		sI8 = func_procDiv("1", sI2, false, 17, true);
		sI7 = "1";
		n1 = func_numFloat(sI8);
		n2 = 0;
		sI8 = func_rtrim(func_stripFloat(sI8));
		for (i = 1; i <= n; i ++) {
			sI7 = func_multiply(sI8, sI7);
			n2 = n2 + n1;
		}		
		sI3 = func_insComma(sI7, -n2);
	}
	else if (n > 1) {
		m = n / 2;
		k = n - (m * 2);
		sI6 = sI2;
		sI4 = "1";
		for (i = 1; i <= n; i ++) {
			sI3 = func_procMul(sI6, sI4, false);
			sI4 = sI3;
		}
		if (k > 0) {
			sI5 = func_procMul(sI4, sI4, false);
			for (i = 1; i < k; i ++) {
				sI5 = func_procMul(sI5, sI2, false);
			}
		}
	}
	else if (n == 1) {
		sI3 = sI1;
	}	
	else if (n == 0) {
		sI3 = "1";
	}
	if (func_checkFloat(sI3) == true) {
		sI3 = func_rtrim(sI3);
	}
	
	sI1 = sFig1;
	sZ = "";
	sZ = sZ->Concat(sZ, "The result of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI1));
	sZ = sZ->Concat(sZ, " power of ");
	sZ = sZ->Concat(sZ, func_formatNumber(sI2));
	sZ = sZ->Concat(sZ, " is:\n");
	sZ = sZ->Concat(sZ, "\n");
	sZ = sZ->Concat(sZ, func_formatNumber(sI3));
	sI2 = String::Format("{0,10:G}", func_numDigit(sI3));
	sI2 = sI2->Trim();
	sI7 = " (";
	sI2 = sI7->Concat(sI7, sI2, "-Digit)");
	sZ = sZ->Concat(sZ, sI2);
	sZ = sZ->Concat(sZ,"\n");
	sZ = sZ->Concat(sZ, "\n");
	Application::UseWaitCursor = false;
	label4->Visible = false;
	richTextBox1->Text = sZ;
	return;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }

bool func_noRemainderFromDiv(String ^sI1, String ^sI2) {
	String ^sI3;
	bPrimeRemainder = false;
	sI3 = func_procDiv(sI1, sI2, false, 5, true);
	//sI5 = func_procMul(sI3->Substring(0, func_decLength(sI3)), sI2, false);
	//sI6 = func_csub(sI1, sI5);
	//if ((sI6->Length > sI2->Length) || (sI6->StartsWith("-"))) {
	//	dRMError = true;
	//	sDivisorErrorAt = sI2->Concat(sI2, " and the error result is ", sI6);
	//}
	return bPrimeRemainder;
}

bool func_isRawPrime(String ^sI2) {
	if (func_noRemainderFromDiv(sI2, "2") == false) {
		return false;
	}	
	if (func_noRemainderFromDiv(sI2, "3") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "4") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "5") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "6") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "7") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "8") == false) {
		return false;
	}
	if (func_noRemainderFromDiv(sI2, "9") == false) {
		return false;
	}
	return true;
}

private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 	String ^sI1;
	String ^sI2;
	String ^sI3;
	String ^sI5;
	String ^sI6;
	String ^sI4;
	String ^sI8;
	String ^sI9;
	struct _timeb t3;
	unsigned short millitm1;
	bool bloop;
	time_t t1;
	sI4 = "";
	richTextBox1->Text = sI4;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	richTextBox2->Text = "";
	richTextBox3->Text = "";
	sI5 = func_unformatNumber(textBox1->Text);
	if ((sI5->Length > 7) && (sI5->StartsWith("-") == false) && (sI5->CompareTo("3000000") > 0)) {
		richTextBox1->Text = "Iteration number overflow";
		func_elapsedTime(t1, millitm1);
		return;
	}
	if ((sI5->Equals("0")) || (sI5->StartsWith("-"))) {
		richTextBox1->Text = "Iteration number must be > 0";
		func_elapsedTime(t1, millitm1);
		return;
	}
	sI1 = "1";
	sI2 = "1";
	sI6 = "0";
	sI9 = "";
	bloop = true;
	while (bloop) {
		sI3 = func_cadd(sI1, sI2);
		sI1 = sI2;
		sI2 = sI3; 
		if ((sI2->EndsWith("0")) || (sI2->EndsWith("2")) || (sI2->EndsWith("4")) || (sI2->EndsWith("5")) || (sI2->EndsWith("6")) || (sI2->EndsWith("8"))) {
		}
		else if (func_isRawPrime(sI2)) {
			sI6 = func_cadd(sI6, "1");
			//if (sI6->Equals(sI5))
			//	sI9 = sI9->Concat(sI9, sI2);
			//else
			//	sI9 = sI9->Concat(sI9, sI2, ", ");
			//if (dRMError) {
			//	sI4 = "";
			//	sI4 = sI4->Concat(sI4, "Remainder algorithm error for input number: ", sI2, " with divider ", sDivisorErrorAt);
			//}
			if (sI2->EndsWith("00")) {
				sI4 = "";
				sI4 = sI4->Concat("Fetched: ", sI2);
				richTextBox1->Text = sI4;
			}
			sI8 = sI2;
		}
		if (sI6->Equals(sI5))
			bloop = false;
	}
	if (dRMError == false) {
	sI4 = "";
	sRezult = func_formatNumber(sI8);
	rtRezult->Text = sRezult;
	sI4 = sI4->Concat("The greatest prime number within Fibonacci series after ", sI6, " iterations is ", func_formatNumber(sI8)); 
	sI4 = sI4->Concat(sI4, " (", func_numDigit(sI8), "-digit)");
	}
	richTextBox1->Text = sI4;
	func_elapsedTime(t1, millitm1);
	}

void func_calcParsing(String ^sI10) {
	Int32 i, j, k, n, m, p, q;
	bool bRemainder;
	String ^sI3;
	String ^sI4;
	String ^sI8;
	String ^sI9;
	String ^sI11;
	String ^sI12;
	String ^sTemp;
	bool bZero;
	int sI5[1000];
	bool bloop, bloop2;
	int bOp;
	char cOperator, cToken;
	array< String^ > ^sI1 = gcnew array< String^ >(1000);
	array< String^ > ^sI2 = gcnew array< String^ >(1000);
	Int32 counter1;
	lblDisplay->Text = "";
	for (i = 0; i < 1000; i ++) {
		sI5[i] = 0;
		sI1[i] = "0";
		sI2[i] = "0";
	}
	sPool4 = "";
	if ((sI10->EndsWith("^=")) || (sI10->EndsWith("V=")) || (sI10->EndsWith("-=")) || (sI10->EndsWith("+=")) ||(sI10->EndsWith("*=")) || (sI10->EndsWith(":=")) || (sI10->EndsWith("\\="))) {
		sTemp = sI10->Substring(0, sI10->Length - 1);
		sI10 = sTemp->Concat(sTemp, "?=");
		sPool4 = sI10->Concat("Incomplete expression for ", func_reverseExpr(sI10, false), " ?");
		bOperator = false;
		sPool1 = "";
		return;
	}
	if ((sI10->Contains("^") == false) && (sI10->Contains("®") == false) && (sI10->Contains("-") == false) && (sI10->Contains("+") == false) && (sI10->Contains("*") == false) && (sI10->Contains(":") == false) && (sI10->Contains("\\") == false)) {
		if (sI10->Length > 1)
			sI10 = sI10->Substring(0, sI10->Length - 1);
		else
			sI10 = "";
		sI10 = func_reverseExpr(sI10, false);
		if ((sI10->Length > 0) && (sI10->Equals("-") == false))
			sPool4 = sI10->Concat("No calculation for number input of ", sI10, " only.");
		else
			sPool4 = "Nothing";
		bOperator = false;
		sPool1 = "";
		return;
	}
	if (sI10->EndsWith("N=")) {
		if (sI10->Length > 3) {
			sI10 = sI10->Substring(0, sI10->Length - 2);
			sI10 = sI10->Concat(sI10, "?=");
			sPool4 = sI10->Concat("Incomplete expression for ", func_reverseExpr(sI10, false), " ?");
			bOperator = false;
			sPool1 = "";
			return;
		}
		else {
			sPool4 = sI10->Concat(sI10, " ?");
			bOperator = false;
			sPool1 = "";
			return;
		}
	}
	n = sI10->Length;
	i = 0;
	k = 0;
	j = k;
	sI3 = "0";
	sPool4 = "";
	rtDisplay1->Text = "";
	bloop = true;
	m = 0;
	p = 0;
	bOp = 0;
	q = 0;
	counter1 = 0;
	bZero = false;
	while (bloop) {
		sI8 = "";
		sI4 = sI10->Substring(i, 1);
		cToken = Convert::ToChar(sI4);
		if (((cToken >= '0') && (cToken <= '9')) || (cToken == 'N') || (cToken == '.')) {
			while (((cToken >= '0') && (cToken <= '9')) || (cToken == 'N') || (cToken == '.')) {
				sI4 = sI10->Substring(i, 1);
				cToken = Convert::ToChar(sI4);
				if (((cToken >= '0') && (cToken <= '9')) || (cToken == '.')) {
					sI8 = sI8->Concat(sI8, sI4);
					i ++;
				}
				else if (cToken == 'N') {
					sI8 = sI8->Concat("-", sI8 );
					i ++;
				}					
			}
			sI4 = sI10->Substring(i, 1);
			cToken = Convert::ToChar(sI4);
			cOperator = cToken;
			bOp ++;
			if (sI8->Equals("-"))
				sI8 = "0";
			//if (cToken != '®') 
				sPool4 = sPool4->Concat(sPool4, func_formatNumber(sI8));
		}
		if ((i >= sI10->Length - 1) || (sI10->Equals("=")))
			bloop = false;
		else {
			if (counter1 < 900)
			counter1 ++;
		if ((sI8->Equals("")) || (counter1 > 2))
			sI8 = sI2[counter1 - 1];
		sI1[counter1] = sI8;
		j = counter1;
		cToken = Convert::ToChar(sI4);
		switch(cToken) {
			case '+':
				sI5[j] = 1;
				sPool4 = sPool4->Concat(sPool4, " + ");
				i ++;
				bOp ++;
				break;
			case '-':
				sI5[j] = 2;
				sPool4 = sPool4->Concat(sPool4, " - ");
				i ++;
				bOp ++;
				break;
			case '*':
				sI5[j] = 3;
				sPool4 = sPool4->Concat(sPool4, " * ");
				i ++;
				bOp ++;
				break;
			case ':':
				sI5[j] = 4;
				sPool4 = sPool4->Concat(sPool4, " : ");
				i ++;
				bOp ++;
				break;
			case '\\':
				sI5[j] = 5;
				sPool4 = sPool4->Concat(sPool4, " \\ ");
				i ++;
				bOp ++;
				break;
			case '®':
				sI5[j] = 6;
				sPool4 = sPool4->Concat(sPool4, " ® ");
				i ++;
				bOp ++;
				break;
			case '^':
				sI5[j] = 7;
				sPool4 = sPool4->Concat(sPool4, " ^ ");
				i ++;
				bOp ++;
				break;
			default:
				sI5[j] = 0;
				break;
		}		
		sI9 = "";
		sI4 = sI10->Substring(i, 1);
		cToken = Convert::ToChar(sI4);
		if (((cToken >= '0') && (cToken <= '9')) || (cToken == 'N') || (cToken == '.')) {				
			while (((cToken >= '0') && (cToken <= '9')) || (cToken == 'N') || (cToken == '.')) {
				sI4 = sI10->Substring(i, 1);
				cToken = Convert::ToChar(sI4);
				if (((cToken >= '0') && (cToken <= '9')) || (cToken == '.')) {
					sI9 = sI9->Concat(sI9, sI4);
					i ++;
				}
				else if (cToken == 'N') {
					sI9 = sI9->Concat("-", sI9);
					i ++;
				} 
					
			}
			cOperator = cToken;

			bOp ++;
		}
			if ((sI5[j] == 4) && (sI9->Equals("0"))) {
				sPool4 = sPool4->Concat(sPool4, func_formatNumber(sI9));
				sI2[j] = "ZERO";
				bZero = true;
			}
			else {
				sPool4 = sPool4->Concat(sPool4, func_formatNumber(sI9));
				sI2[counter1] = sI9;
			}		
		if ((i >= sI10->Length) || (sI4->Equals("=")))
			bloop = false;
	}
	}
	i = 1;
	sI3 = "0";
	bloop = true;
	q = 0;
	if (bZero == false) {
	for (i = 1; i <= counter1; i ++) {
			switch(sI5[i]) {
				case 1:
					if ((sI5[i + 1] == 3) || (sI5[i + 1] == 4) || (sI5[i + 1] == 6) || (sI5[i + 1] == 7))
						sI2[i] = "0";
					if ((sI2[i] == sI1[i + 1])) { 
						if ((sI5[i + 1] != 3) && (sI5[i + 1] != 4) || (sI5[i + 1] != 6) && (sI5[i + 1] != 7)) {
							sI1[i + 1] = "0";
							if (i + 1 < counter1)
								sI2[i + 1] = "0";
						}
					}
					if ((sI2[i] == sI1[i - 1])) { 
						if ((sI5[i - 1] == 3) || (sI5[i - 1] == 4) || (sI5[i - 1] == 6) || (sI5[i - 1] == 7)) {
							sI1[i] = "0";
						}
					}
					sI10 = func_procAdd(sI1[i], sI2[i], false);
					sI5[i] = 1;
					break;
				case 2:
					if ((sI5[i + 1] == 3) || (sI5[i + 1] == 4) || (sI5[i + 1] == 6) || (sI5[i + 1] == 7))
						sI2[i] = "0";
					if ((sI2[i] == sI1[i + 1])) { 
						if ((sI5[i + 1] != 3) && (sI5[i + 1] != 4) && (sI5[i + 1] != 6) && (sI5[i + 1] != 7)) {
							sI1[i + 1] = "0";
							if (i + 1 < counter1)
								sI2[i + 1] = "0";
						}
					}
					if ((sI2[i] == sI1[i - 1])) { 
						if ((sI5[i - 1] == 3) || (sI5[i - 1] == 4) || (sI5[i - 1] == 6) || (sI5[i - 1] == 7)) {
							sI1[i] = "0";
						}
					}
					sI10 = func_procSub(sI1[i], sI2[i], false);
					sI5[i] = 2;
					break;
				case 3:
					j = i;
					sI5[j] = 3;
					sI10 = func_procMul(sI1[j], sI2[j], false);
					if (j + 1 == counter1) {
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j] == 6) || (sI5[j] == 7) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
							sI1[j] = "0";
							sI2[j] = "0";
							sI1[j + 1] = sI10;
						}
						else {
							sI1[j + 1] = "0";
						}
					}
					else if ((sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
						sI1[j] = "0";
						sI2[j] = "0";
						j ++;
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j] == 6) || (sI5[j] == 7)) {
							sI1[j] = sI10;
							bloop2 = true;
							while (bloop2) {
								if (sI5[j] == 3) {
									sI10 = func_procMul(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 4) {
									sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 6) {
									sI10 = "0"; //func_calcNROOT(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 7) {
									sI10 = "0"; //func_calcNPOWER(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								j = j + 1;
								if (j > counter1) 
									bloop2 = false;
							}
						}
					}
					else {
						sI1[j + 1] = "0";
						sI2[j + 1] = "0";
					}
					i = j;
					break;
				case 4:
					j = i;
					sI5[j] = 4;
					if (sI2[j]->Equals("0"))
						sI10 = "0";
					else
						sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
					if (j + 1 == counter1) {
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j] == 6) || (sI5[j] == 7) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
							sI1[j] = "0";
							sI2[j] = "0";
							sI1[j + 1] = sI10;
						}
						else {
							sI1[j + 1] = "0";
						}
					}
					else if ((sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
						sI1[j] = "0";
						sI2[j] = "0";
						j ++;
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j] == 6) || (sI5[j] == 7)) {
							sI1[j] = sI10;
							bloop2 = true;
							while (bloop2) {
								if (sI5[j] == 3) {
									sI10 = func_procMul(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0"; 
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 4) {
									sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 6) {
									sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 6) {
									sI10 = "0"; //func_calcNROOT(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 7) {
									sI10 = "0"; //func_calcNPOWER(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								j = j + 1;
								if (j > counter1) 
									bloop2 = false;
							}
						}
					}
					else {
						sI1[j + 1] = "0";
						sI2[j + 1] = "0";
					}
					i = j;
					break;
				case 5:
					if ((sI5[i + 1] == 3) || (sI5[i + 1] == 4) || (sI5[i + 1] == 6) || (sI5[i + 1] == 7))
						sI2[i] = "0";
					if ((sI2[i] == sI1[i + 1])) { 
						if ((sI5[i + 1] != 3) && (sI5[i + 1] != 4) || (sI5[i + 1] != 6) && (sI5[i + 1] != 7)) {
							sI1[i + 1] = "0";
							if (i + 1 < counter1)
								sI2[i + 1] = "0";
						}
					}
					if ((sI2[i] == sI1[i - 1])) { 
						if ((sI5[i - 1] == 3) || (sI5[i - 1] == 4) || (sI5[i - 1] == 6) || (sI5[i - 1] == 7)) {
							sI1[i] = "0";
						}
					}
					sI10 = func_procDiv(sI1[i], sI2[i], false, sI1[i]->Length + sI2[i]->Length + 100, true);
					sI11 = sI10->Substring(0, func_decLength(sI10));
					sI12 = func_procMul(sI11, sI2[j], false);
					sI10 = func_procSub(sI1[i], sI12, false);
					sI5[i] = 5;
					break;
				case 6:
					j = i;
					sI5[j] = 6;
					sI10 = "0"; //func_calcNROOT(sI1[j], sI2[j], false);
					if (j + 1 < counter1) {
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j] == 6) || (sI5[j] == 7) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
							sI1[j] = "0";
							sI2[j] = "0";
							sI2[j + 1] = sI10;
						}
						else {
							sI2[j + 1] = "0";
						}
					}
					else if ((sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
						sI1[j] = "0";
						sI2[j] = "0";
						j ++;
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j] == 6) || (sI5[j] == 7)) {
							sI1[j] = sI10;
							bloop2 = true;
							while (bloop2) {
								if (sI5[j] == 3) {
									sI10 = func_procMul(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 4) {
									sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 6) {
									sI10 = "0"; //func_calcNROOT(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI2[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 7) {
									sI10 = "0"; //func_calcNPOWER(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI2[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								j = j + 1;
								if (j > counter1) 
									bloop2 = false;
							}
						}
					}
					else {
						sI1[j + 1] = "0";
						sI2[j + 1] = "0";
					}
					i = j;
					break;
				case 7:
					j = i;
					sI5[j] = 7;
					sI10 = "0"; //func_calcNPOWER(sI2[j], sI1[j], false);
					if (j + 1 == counter1) {
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j] == 6) || (sI5[j] == 7) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
							sI1[j] = "0";
							sI2[j] = "0";
							sI1[j + 1] = sI10;
						}
						else {
							sI2[j + 1] = "0";
						}
					}
					else if ((sI5[j + 1] == 3) || (sI5[j + 1] == 4) || (sI5[j + 1] == 6) || (sI5[j + 1] == 7)) {
						sI1[j] = "0";
						sI2[j] = "0";
						j ++;
						if ((sI5[j] == 3) || (sI5[j] == 4) || (sI5[j] == 6) || (sI5[j] == 7)) {
							sI2[j] = sI10;
							bloop2 = true;
							while (bloop2) {
								if (sI5[j] == 3) {
									sI10 = func_procMul(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 4) {
									sI10 = func_procDiv(sI1[j], sI2[j], false, sI1[j]->Length + sI2[j]->Length + 100, true);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 6) {
									sI10 = "0"; //func_calcNROOT(sI1[j], sI2[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								else if (sI5[j] == 7) {
									sI10 = "0"; //func_calcNPOWER(sI2[j], sI1[j], false);
									if (j < counter1) {
										sI1[j] = "0";
										sI2[j] = "0";
									}
									sI1[j + 1] = sI10;
									if ((j + 1 < counter1) && (sI5[j + 1] != 3) && (sI5[j + 1] != 4) && (sI5[j + 1] != 6) && (sI5[j + 1] != 7))
										sI2[j + 1] = "0";
								}
								j = j + 1;
								if (j > counter1) 
									bloop2 = false;
							}
						}
					}
					else {
						sI1[j + 1] = "0";
						sI2[j + 1] = "0";
					}
					i = j;
					break;
				default:
					sI10 = "0";
					break;
			}
			sI3 = func_procAdd(sI3, sI10, false);
		
	}
	i = 0;
	sI3 = "0";
	sPool6 = "";
	sPool7 = "";
	bRemainder = false;
	q = 0;
		sTemp = "";
	for (i = 1; i <= counter1; i ++) {
		switch(sI5[i]) {
		case 1:
			sI4 = "+";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), " ", sI4, " ", func_formatNumber(sI2[i]), "\n");
			break;
		case 2:
			sI4 = "-";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), " ", sI4, " ", func_formatNumber(sI2[i]), "\n");
			break;
		case 3:
			sI4 = "*";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), " ", sI4, " ", func_formatNumber(sI2[i]), "\n");
			break;
		case 4:
			sI4 = ":";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), " ", sI4, " ", func_formatNumber(sI2[i]), "\n");
			break;
		case 5:
			sI4 = "\\";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), " ", sI4, " ", func_formatNumber(sI2[i]), "\n");
			break;
		case 6:
			sI4 = "®";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI2[i]), "", sI4, "", func_formatNumber(sI1[i]), "\n");
			break;
		case 7:
			sI4 = "^";
			sTemp = sTemp->Concat(sTemp, func_formatNumber(sI1[i]), "", sI4, "", func_formatNumber(sI2[i]), "\n");
			break;
		}
	}
		sTemp = sTemp->Concat(sTemp, "\n\n");

q = 0;
	for (i = 1; i <= counter1; i ++) {
		sI10 = "0";
		n = sI5[i];
		sI8 = sI1[i];
		sI9 = sI2[i];
		q ++;
			//if ((sI2[i]->Equals("0")) && (sI5[i + 1] == 2)) {
			//	sI2[i + 1] = "0";
			//}
			//else
			if ((sI2[i]->Equals(sI1[i + 1])) && (sI5[i] == 2)) {
				sI2[i] = "0";
				
				//if (func_checkNeg(sI1[i + 1]) == false)
				//	sI1[i + 1] = sI1[i + 1]->Concat("-", sI1[i + 1]);
				//else
				//	sI1[i + 1] = sI1[i + 1]->Substring(1);
			}
			else if ((sI2[i - 1]->Equals(sI1[i])) && (sI5[i - 1] == 2)) {
				sI2[i - 1] = "0";
				
				//if (func_checkNeg(sI1[i]) == false)
				//	sI1[i] = sI1[i]->Concat("-", sI1[i]);
				//else
				//	sI1[i] = sI1[i]->Substring(1);
			}
			else if ((sI5[i - 1] == 2) && (sI1[i - 1]->Equals("0")) && (sI2[i - 1]->Equals("0"))) {
				if (func_checkNeg(sI8) == false)
					sI8 = sI8->Concat("-", sI8);
			}
		switch(n) {
			case 1:
				sI10 = func_procAdd(sI8, sI9, false);
				break;
			case 2:	
				sI10 = func_procSub(sI8, sI9, false);
				if ((sI8->Equals("0")) && (sI9->Equals("0"))) {
					sI10 = "0";
					if (func_checkNeg(sI1[i + 1]))
						sI1[i + 1] = sI1[i + 1]->Concat("-", sI1[i + 1]);
				}
				break;
			case 3:
				sI10 = func_procMul(sI8, sI9, false);
				break;
			case 4:
				if (sI9->Equals("0"))
					sI10 = "***";
				else					
					sI10 = func_procDiv(sI8, sI9, false, sI8->Length + sI9->Length + 100, true);				
				break;
			case 5:
				if (sI9->Equals("0")) {
					sI10 = sI8;
				}
				else {		
					sI10 = func_procDiv(sI8, sI9, false, sI8->Length + sI9->Length + 100, true);
					sI11 = sI10->Substring(0, func_decLength(sI10));
					sI12 = func_procMul(sI11, sI9, false);
					sI10 = func_procSub(sI8, sI12, false);
					sPool6 = sI11;
					sPool7 = sI10;
					bRemainder = true;
				}
				break;
			case 6:
				if (sI8->Equals("0"))
					sI10 = "0";
				else
					sI10 = func_calcNROOT(sI8, sI9, false);
				break;
			case 7:
				if (sI8->Equals("0"))
					sI10 = "0";
				else
					sI10 = func_calcNPOWER(sI9, sI8, false);
				break;
			default:
				sI10 = "0";
				break;
			}
		if (i <= counter1) {		
			if (sI5[i - 1] == 5) {
					if (sI10->Equals("-0"))
						sI10 = sI9;
					sPool6 = sI10;
					sPool7 = sI3;
					sI10 = func_procDiv(sPool7, sPool6, false, sPool7->Length + sPool6->Length + 37, true);
					sI11 = sI10->Substring(0, func_decLength(sI10));
					sI12 = func_procMul(sI11, sPool6, false);
					sI10 = func_procSub(sPool7, sI12, false);
					sI3 = sI10;
					sPool6 = sI11;
					sPool7 = sI10;
					bRemainder = true;
			}
			else if ((sI5[i - 1] == 2) && (func_checkNeg(sI10) == false)) {
				sI3 = func_procSub(sI3, sI10, false);
			}
			else if ((sI5[i - 1] == sI5[i]) && (sI5[i - 1] == 3)) {
				if (sI10->Equals("0") == false)
					sI3 = func_procMul(sI3, sI10, false);
			}
			else if ((sI5[i - 1] == sI5[i]) && (sI5[i - 1] == 4)) {
				if (sI10->Equals("0") == false)
					sI3 = func_procDiv(sI3, sI10, false, sI3->Length + sI10->Length + 37, true);
			}			
			else
				sI3 = func_procAdd(sI3, sI10, false);
		}
		//if ((sI3->Equals("0")) && (sI10->Equals("0") == false))
		//	sI3 = sI10;
		if ((func_checkNeg(sI3) == false) && (sI5[i] == 2) && (q > 2))
			sI3 = sI3->Concat("-", sI3);
		if ((sI3->StartsWith("-*")) && (sI10->Equals("0")))
			sI3 = "0";

		sTemp = sTemp->Concat(sTemp, "sI3 = ", sI3, " sI10 = ", sI10, "\n");

	}
	}
	if (sI3->StartsWith("*") == false) {
		if ((bRemainder) && (q < 2)) {
			sI3 = "";
			sI3 = sI3->Concat(func_formatNumber(sPool6), " (", func_numDigit(sPool6), "-digit) (Remainder = ", func_formatNumber(sPool7), " (", func_numDigit(sPool7), "-digit)) ");
			sRezult = sI3;
		}
		else  {
			sRezult = func_formatNumber(sI3);
			sI3 = sI3->Concat(sRezult, " (", func_numDigit(sI3), "-digit) ");
		}
	}
	else {
		sI3 = sI10;
		sRezult = func_formatNumber(sI3);
		sI3 = sI3->Concat(sRezult, " (", func_numDigit(sI3), "-digit) ");
	}
	rtRezult->Text = sRezult;
	//sPool4 = sPool4->Concat(sPool4, "\n", sTemp );    // ***stetoscope
	if (sPool4->Length > 80)
		sPool4 = sPool4->Concat(sPool4, "\n");
	//sPool4 = sPool4->Trim();
	if ((sPool4->EndsWith("+")) || (sPool4->EndsWith("-")) || (sPool4->EndsWith("*")) || (sPool4->EndsWith(":")) || (sPool4->EndsWith("\\")))
		sPool4 = sPool4->Substring(0, sPool4->Length - 1);
	else if ((sPool4->Contains("+") == false) && (sPool4->Contains("-") == false) && (sPool4->Contains("*") == false) && (sPool4->Contains(":") == false) && (sPool4->Contains("\\") == false)) {
		if ((sPool4->Contains("®")) || (sPool4->Contains("^"))) {
			sPool4 = sPool4->Concat(sPool4, " = ");
		}
		else { 
			sI3 = sPool4->Concat(sPool4->Substring(0, sPool4->Length - 1), " only.");
			sPool4 = "No calculation for number input of ";
		}
	}
	else if (sI10->Contains(":0")) {
		sPool4 = sPool4->Concat(sPool4, " is ");
		sI3 = "unable to determine due to division by zero within the calculated numbers.";
	}
	else {
		sPool4 = sPool4->Concat(sPool4, " = ");
	}
	if (sI3->Length == 0) {
	}
	else {
		if ((sI3->StartsWith("-")) && (sI3->Length + sPool4->Length > 40) && (sPool4->Length <= 70))
			sI3 = sI3->Concat("\n", sI3);
		textBox1->Text = sI3;
		sPool1 = sI3;
		sPool2 = sI3;
		sPool3 = sI3;
		//rtDisplay1->Text = sI3;
		//rtDisplay1->Text = rtDisplay1->Text->Substring(0);	//0, rtDisplay1->Text->Length - 1);
	}
}

String ^func_reverseExpr(String ^sI1, bool rightToLeft) {
	String ^sPool4;
	String ^sI4;
	String ^sI8;
	Int32 i, j, n;
	bool bneg8;
	bool bloop;
	n = sI1->Length;
	if (n < 1)
		return "";
	sPool4 = "";
	for (i = 0; i < n; i++) {
		sI4 = sI1->Substring(i, 1);
		if (((sI4->CompareTo("0") >= 0) && (sI4->CompareTo("9") <= 0)) || (sI4->Equals("N")) || (sI4->Equals("."))) {
			bloop = true;
			j = i;
			sI8 = "";
			while (bloop) { 
				sI4 = sI1->Substring(j, 1);
				if (((sI4->CompareTo("0") >= 0) && (sI4->CompareTo("9") <= 0)) || (sI4->Equals("."))) {
					sI8 = sI8->Concat(sI8, sI4);
					j ++;
				}
				else if (sI4->Equals("N")) {
					sI8 = sI8->Concat("-", sI8 );
					j ++;
				}
				else
					bloop = false;
				if (j > n - 1)
					bloop = false;
			}
			i = j - 1;
			bneg8 = false;
			if (func_checkNeg(sI8)) {
				bneg8 = true;
				if (rightToLeft) {
					sI8 = sI8->Substring(1);
				}
			}
			if (rightToLeft) {
				if (bneg8)
					sPool4 = sPool4->Concat(func_formatNumber(sI8), "-", sPool4);		
				else
					sPool4 = sPool4->Concat(func_formatNumber(sI8), sPool4);		
			}
			else
				sPool4 = sPool4->Concat(sPool4, func_formatNumber(sI8));
		}
		else {
			if (rightToLeft)
				sPool4 = sPool4->Concat(" ",sI4, " ", sPool4);
			else
				sPool4 = sPool4->Concat(sPool4," ",sI4, " ");
		}
	}
	return sPool4;
}

void func_insertNumbers(String ^sI1, bool bOp) {
	Int32 i, j;
	String ^sTemp;
	String ^sOperator;
	sOperator = "+-*:V^\\";

	if ((sPool1->EndsWith("=")) || (sPool1->EndsWith("®")) || (sPool1->EndsWith("^")) || (sPool1->EndsWith("+")) || (sPool1->EndsWith("-")) || (sPool1->EndsWith("*")) || (sPool1->EndsWith(":")) || (sPool1->EndsWith("N")))
		sPool2 = "";
	if (sI1->Length > 0) {
		if (sPool1->Equals(sPool3) == false) {
			sPool1 = "";
			sPool2 = "";
		}
		if (sI1->Equals("=") == false)
			bReset = false;
	
		if (bOp == false) {
			lblDisplay->Text = "";
			nIndex ++;
			bOperator = false;
			if (sI1->Equals(".")) {
				if (sPool1->Equals("")) {
					sPool1 = sPool1->Concat(sPool1, "0");
					sPool2 = sPool1;
					sPool5 = sPool2;
				}
				if (sPool5->EndsWith(".") == false) {
					sPool1 = sPool1->Concat(sPool1, sI1);
					sPool2 = sPool2->Concat(sPool2, sI1);
				}
				else if ((sPool1->StartsWith("0")) && (sPool1->Length == 1)) {
					sPool1 = sPool1->Concat(sPool1, ".");
					sPool2 = sPool1;
					sPool5 = sPool2;
				}
			}
			else if (sI1->Equals("N") == false) {
				sPool1 = sPool1->Concat(sPool1, sI1);
				sPool2 = sPool2->Concat(sPool2, sI1);
			}
			else if (sI1->Equals("N")) {

				j = 0;
				i = j;
				sTemp = "";
				if (rtDisplay1->Text->Length > 0) {
					if (rtDisplay1->Text->Substring(0, 1)->Equals("-"))
						sTemp = func_unformatNumber(rtDisplay1->Text->Substring(1));
					else
						sTemp = func_unformatNumber(rtDisplay1->Text);
				}
				j = textBox1->Text->LastIndexOf(sTemp);
				j --;
				if (sPool1->Equals("")) {
					sPool1 = "N";
					textBox1->Text = sPool1;
				}
				else if (sPool1->Equals("N")) {
					sPool1 = "";
					textBox1->Text = sPool1;
				}
				else if (((j == -2) || (j == 0)) && (textBox1->Text->StartsWith("N"))) {
					sPool1 = textBox1->Text;
					sPool1 = sPool1->Substring(1);
					if (sPool2->Length > 1) {
						sPool2 = sPool2->Substring(1);
						sPool5 = sPool2;
					}
					textBox1->Text = sPool1;
				}
				else if (j > 0) {
					if (textBox1->Text->Substring(j, 1)->Equals("N")) {
						sTemp = textBox1->Text->Substring(0, j);
						sPool1 = textBox1->Text->Substring(j + 1);
						sPool1 = sPool1->Concat(sTemp, sPool1);
						sPool5 = sPool5->Substring(1);
						sPool2 = sPool5;
					}
					else {
						sPool1 = sPool1->Insert(j + 1, sI1);
						textBox1->Text = sPool1;
						sPool5 = sPool5->Concat("-", sPool5);
						sPool2 = sPool5;
					}	
				}
				else if (j == -1) {
					sPool1 = sPool1->Concat("N", sPool2);
					textBox1->Text = sPool1;
					sPool2 = sPool2->Concat("-", sPool2);
					sPool5 = sPool2;
				}
				if (sPool1->Length == 1)
					sPool1 = "";
				else if (sPool1->EndsWith("N"))
					sPool1 = sPool1->Substring(0, sPool1->Length - 1);
				}	
				textBox1->Text = sPool1;
				sPool5 = sPool2;
				sPool6 = sPool2;
		}
		else {
			if ((sPool1->Length > 0)) {
				sTemp = sPool1->Substring(sPool1->Length - 1, 1);
				if ((sTemp->Equals(sI1) == false) && (sOperator->Contains(sTemp))) {
					sPool1 = sPool1->Substring(0, sPool1->Length - 1);
					sPool1 = sPool1->Concat(sPool1, sI1);
					sPool3 = sPool1;
					sPool2 = sPool6;
					sPool5 = sPool2;
					rtDisplay1->Text = sPool6;	
					bReset = true;
					if (rtDisplay1->Text->Length < 10000)
						rtDisplay1->ScrollToCaret();
					pbDummy->Focus();
					
					return;
				}
			}
			if (sPool1->EndsWith("+")) {
				bOperator = true;
			}
			else if (sPool1->EndsWith("-")) {
				bOperator = true;
			} 
			else if (sPool1->EndsWith("*")) {
				bOperator = true;
			}
			else if (sPool1->EndsWith(":")) {
				bOperator = true;
			}
			else if (sPool1->EndsWith("\\")) {
				bOperator = true;
			}
			else if (sPool1->EndsWith("®")) {
				bOperator = true;
			}
			else if (sPool1->EndsWith("^")) {
				bOperator = true;
			}
			else {
				rtDigits->Text = "Processing";				
				sPool1 = sPool1->Concat(sPool1, sI1);
			}
		}
	}
	sPool3 = sPool1;
	sPool5 = sPool2;

	rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
	rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
	bReset = true;
	if (rtDisplay1->Text->Length < 10000)
		rtDisplay1->ScrollToCaret();
	pbDummy->Focus();
}

private: System::Void pb1_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("1", true);
		 }
private: System::Void pb2_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("2", true);
		 }
private: System::Void pb3_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("3", true);
		 }
private: System::Void pb4_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("4", true);
		 }
private: System::Void pb5_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("5", true);
		 }
private: System::Void pb6_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("6", true);
		 }
private: System::Void pb7_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("7", true);
		 }
private: System::Void pb8_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("8", true);
		 }
private: System::Void pb9_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("9", true);
		 }
private: System::Void pb0_Click(System::Object^  sender, System::EventArgs^  e) {
		func_enterKey("0", true);
		 }
private: System::Void pbDot_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sPool1->Equals(""))
				 sPool1 = sPool1->Concat(sPool1, "0");
		if (sPool5->EndsWith(".") == false)
			func_enterKey(".", true);
		}
private: System::Void pbPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "+";
		bOperator = true;
		func_insertNumbers("+", true);
		textBox1->Text = sPool1;
		sPool2 = "";
if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
		if (rtDisplay1->Text->Length < 10000) {
		rtRegex->ScrollToCaret();	
		rtDisplay1->ScrollToCaret();
		}
		pbDummy->Focus();
		 }
private: System::Void pbMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "-";
		bOperator = true;
		func_insertNumbers("-", true);
		textBox1->Text = sPool1;
		sPool2 = "";
if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
		if (rtDisplay1->Text->Length < 10000) {
		rtRegex->ScrollToCaret();
		rtDisplay1->ScrollToCaret();
		}
		pbDummy->Focus();
		 }
private: System::Void pbMul_Click(System::Object^  sender, System::EventArgs^  e) {
			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "*";
		bOperator = true;
		func_insertNumbers("*", true);
		textBox1->Text = sPool1;
		sPool2 = "";
if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
		if (rtDisplay1->Text->Length < 10000) {
			rtRegex->ScrollToCaret();
			rtDisplay1->ScrollToCaret();
		}
		 pbDummy->Focus();
		 }
private: System::Void pbDiv_Click(System::Object^  sender, System::EventArgs^  e) {
			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = ":";
		bOperator = true;
		func_insertNumbers(":", true);
		textBox1->Text = sPool1;
		sPool2 = "";
		if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
		if (rtDisplay1->Text->Length < 10000) {
			rtRegex->ScrollToCaret();
			rtDisplay1->ScrollToCaret();
		}
		 pbDummy->Focus();
		 }

void func_enterKey(String ^sI1, bool bdisplayed) {
	bOperator = false;
	if (sPool1->Equals(sPool3) == false) {
		sPool1 = "";
	}
	func_setTrim(false);
	bReset = false;
	func_insertNumbers(sI1, false);
	if (bdisplayed) {
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->Text = func_formatNumber(sPool2);
	}
}

void func_KeyPressed(System::Windows::Forms::KeyPressEventArgs^  e) {
			String ^sTemp;
		
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == '.') || (e->KeyChar == '=')) {
			sTemp = e->KeyChar.ToString();
			if (sTemp->Equals("=") == false) {
				if (bOperator) {
					sPool2 = "";
				}
				func_activateLayout(false);
				func_enterKey(sTemp, false);
			}
			else if ((sTemp->Equals("=")) && (sPool1->Contains("®") == false) && (sPool1->Contains("^") == false)) { 
				lblDisplay->Text = "=";
				rtDigits->Text = "Processing";
				bOperator = false;
				pbEq_Click(this, e);
				sPool3 = "";
			}
		}
		else {
			bReset = false;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;
			sTemp = e->KeyChar.ToString();
			switch(e->KeyChar) {
			case '+':
					lblDisplay->Text = "+";
					bOperator = true;
					func_insertNumbers(e->KeyChar.ToString(), true);
					textBox1->Text = sPool1;
					break;
			case '-':
					lblDisplay->Text = "-";
					bOperator = true;
					func_insertNumbers(e->KeyChar.ToString(), true); 
					textBox1->Text = sPool1;
					break;
			case '*':
					lblDisplay->Text = "*";
					bOperator = true;
					func_insertNumbers(e->KeyChar.ToString(), true);
					textBox1->Text = sPool1;
					break;
			case '/':
					lblDisplay->Text = ":";	
					bOperator = true;
					func_insertNumbers(":", true);
					textBox1->Text = sPool1;
					break;
			case ':':
					lblDisplay->Text = ":";	
					bOperator = true;
					func_insertNumbers(e->KeyChar.ToString(), true);
					textBox1->Text = sPool1;
					break;
			case '\\':
					lblDisplay->Text = "\\";
					bOperator = true;
					func_insertNumbers(e->KeyChar.ToString(), true);
					textBox1->Text = sPool1;
					break;
			default:		
					bOperator = false;
					if (rtDisplay1->Text->Length > 0)	
						rtDisplay1->Text = rtDisplay1->Text->Substring(0, rtDisplay1->Text->Length - 1); 
					bReset = true;
					break;
			}
		
		}
		if (nonNumberEntered) {
						bReset = true;
						e->Handled = true;
		 
		 }
		else if ((sPool2->Equals("")) && (sPool1->Length == 1)) {
				sPool1 = "";
				textBox1->Text = sPool1;
		}
		else 
			textBox1->Text = sPool1;		
		//func_activateLayout(true);
		rtDisplay1->Text = func_formatNumber(sPool2);
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		func_activateLayout(true);

		//pbDummy->Focus();
}
private: System::Void rtDisplay1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 func_KeyPressed(e);
		 }

void func_pasteToDisplay() {
			String ^sPool8;
			if (lblDisplay->Text->Equals("") == false) {
				sPool2 = "";
				bOperator = true;
			}
			rtDigits->Text = "Pasting";
			if ( Clipboard::GetDataObject()->GetDataPresent( DataFormats::Text ) == true )	{
				rtDisplay1->ReadOnly = false;
				if (rtDisplay1->Text->Equals("0"))
					rtDisplay1->Text = "";
				rtDisplay1->Paste();
				rtDisplay1->ResetFont();		
				rtDisplay1->ReadOnly = true;
			}
			if (rtDisplay1->Text->Length > 0) {
			rtDigits->Text = "Resetting";
			rtDigits->Text = "Copying";
			//rtDisplay1->Text = rtBuffer->Text;
			rtDigits->Text = "Validating";
			//if (rtDisplay1->Text->Length > 10000)
			func_setFormat(false);
			rtDigits->Text = "Parsing";
			sPool2 = rtDisplay1->Text;
			sPool8 = sPool2;
			if (func_checkNeg(sPool8)) {
				if (sPool1->StartsWith("N") == false) {
					sPool8 = sPool8->Substring(1);
					sPool8 = sPool8->Concat("N", sPool8);
				}
			}
			sPool5 = sPool2;
			sPool1 = sPool1->Concat(sPool1, sPool8);
			sPool3 = sPool1;
			textBox1->Text = sPool1;
			rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
			rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
			rtRegex->Text = sPool1;
			}
}


void func_setRegexAligned() {

		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
}

String ^func_fetchPrevNumber() {
	String ^sTemp;
	Int32 n;
	bool bloop;
	sTemp = sPool1;
	n = 0;
	//if ((sPool1->EndsWith("=")) || (sPool1->EndsWith("®")) || (sPool1->EndsWith("^")) || (sPool1->EndsWith("+")) || (sPool1->EndsWith("-")) || (sPool1->EndsWith("*")) || (sPool1->EndsWith(":")) || (sPool1->EndsWith("N"))) {
		bloop = true;
		while (bloop) {
			n = sTemp->Length;
			if (n > 0) { 
			sTemp = sTemp->Substring(0, sTemp->Length - 1);
			if (sTemp->EndsWith("=") == false) {
				if (sTemp->EndsWith("®") == false) {
					if (sTemp->EndsWith("^") == false) {
						if (sTemp->EndsWith("+") == false) {
							if (sTemp->EndsWith("-") == false) {
								if (sTemp->EndsWith("*") == false) {
									if (sTemp->EndsWith(":") == false) {
									}
									else {
										bloop = false;
									}
								}
								else {
									bloop = false;
								}
							}
							else {
								bloop = false;
							}
						}
						else {
							bloop = false;
						}
					}
					else {
						bloop = false;
					}
				}
				else {
					bloop = false;
				}
			}
			else {
				bloop = false;
			}
		}
			else {
				bloop = false;
			}
		//}
	}
	if (n > 0) {
		sPool5 = "";
		return sPool1->Substring(n - 1, sPool1->Length - n + 1);
	}
	else {
 		return "";
	}
}


String ^func_fetchLastNumber() {
	String ^sTemp;
	Int32 n;
	bool bloop;
	sTemp = sPool1;
	n = 0;
		bloop = true;
		while (bloop) {
			n = sTemp->Length;
			if (n > 0) { 
			sTemp = sTemp->Substring(0, sTemp->Length - 1);
			if (sTemp->EndsWith("=") == false) {
				if (sTemp->EndsWith("®") == false) {
					if (sTemp->EndsWith("^") == false) {
						if (sTemp->EndsWith("+") == false) {
							if (sTemp->EndsWith("-") == false) {
								if (sTemp->EndsWith("*") == false) {
									if (sTemp->EndsWith(":") == false) {
									}
									else {
										bloop = false;
									}
								}
								else {
									bloop = false;
								}
							}
							else {
								bloop = false;
							}
						}
						else {
							bloop = false;
						}
					}
					else {
						bloop = false;
					}
				}
				else {
					bloop = false;
				}
			}
			else {
				bloop = false;
			}
		}
			else {
				bloop = false;
			}
	}
	if (n > 0) {
		sPool5 = "";
		return sPool1->Substring(n - 1, sPool1->Length - n + 1);
	}
	else {
 		return "";
	}
}

void func_KeyDown(System::Windows::Forms::KeyEventArgs^  e) {
		System::Windows::Forms::KeyEventArgs^  f;
		String ^sI10;
		Int32 n;
		func_activateLayout(false);
		nonNumberEntered = true;
		if (e->KeyCode == Keys::Enter) {
				nonNumberEntered = false;
				bOperator = false;
				pbEq_Click(this, e);
				sPool3 = "";
			}
		else if ( e->KeyCode == Keys::Back ) {
			nonNumberEntered = true;
			bOperator = false;
			if (nIndex > 0)
				nIndex --;
			sPool2 = sPool5;
			if (sPool2->Length > 1) {
				sPool2 = sPool2->Substring(0, sPool2->Length - 1);
			}
			else 
				sPool2 = "";
			if (sPool1->Length > 1) {
				sPool1 = sPool1->Substring(0, sPool1->Length - 1);
			}
			else 
				sPool1 = "";
			sPool5 = sPool2;
			if (sPool1->Equals("")) {
				sPool2 = "";
				sPool3 = "";
				sPool5 = "";
			}
			sPool5 = func_fetchPrevNumber();
			sPool2 = sPool5;
			if (sPool1->EndsWith(rtDisplay1->Text)) {
				n = sPool1->LastIndexOf(sPool2) + sPool2->Length;
				if (sPool1->Length > 1) {
					sPool1 = sPool1->Substring(0, n);
				}
				else
					sPool1 = "";
				if (sPool3->Length > 1) {
					sPool3 = sPool3->Substring(0, n);
				}	
				else
					sPool3 = "";
				if (sPool4->Length > 1) {
					sPool4 = sPool4->Substring(0, n);
				}
				else
					sPool4 = "";
				sPool2 = func_formatNumber(sPool2);
				sPool5 = sPool2;
			}
			else if ((rtDisplay1->Text->Length == 1) && (rtDisplay1->Text->Equals("0"))){
				if (sPool1->Length > 1) {
					sPool1 = sPool1->Substring(0, sPool1->Length - 1);
				}
				else
					sPool1 = "";
				if (sPool3->Length > 1) {
					sPool3 = sPool3->Substring(0, sPool3->Length - 1);
				}	
				else
					sPool3 = "";
				if (sPool4->Length > 1) {
					sPool4 = sPool4->Substring(0, sPool4->Length - 1);
				}
				else
					sPool4 = "";
			}
			if (sPool1->Equals("")) {
				sPool2 = "";
				sPool3 = "";
				sPool5 = "";
			}
			else if ((sPool1->Contains("=") == false) && (sPool1->Contains("V") == false) && (sPool1->Contains("^") == false) && (sPool1->Contains("+") == false) && (sPool1->Contains("-") == false) && (sPool1->Contains("*") == false) && (sPool1->Contains(":") == false) && (sPool1->Contains("N") == false)) {
				sPool3 = sPool1;
					rtRegex->Text = sPool1;
					rtDisplay1->Text = sPool1;
					sPool5 = sPool1;
					sPool2 = sPool1;
			}
			else {
				sPool2 = func_fetchPrevNumber();
			}
			textBox1->Text = sPool1;
			rtRegex->Text = sPool1;
			rtDisplay1->Text = sPool2;
			//sPool5 = sPool2;
			sPool5 = "";
			func_setRegexAligned();
			rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
			rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
      }
		else {
			if ( e->KeyCode == Keys::Right ) {
				nonNumberEntered = true;
			}
			else if ( e->KeyCode == Keys::Left ) {
				nonNumberEntered = true;
			}
			else if ( e->KeyCode == Keys::C ) {
				if (Control::ModifierKeys == Keys::Control) {
					rtRezult->SelectAll();
					rtRezult->Copy();
					rtRezult->DeselectAll();
				}
				else {
					lblDisplay->Text = "C";
					nonNumberEntered = true;
					rtDisplay1_KeyUp(this, f);
					pbClear_Click(this, e);
				}
			}
			else if ( e->KeyCode == Keys::N ) {
				nonNumberEntered = true;
				lblDisplay->Text = "+/-";
				bOperator = false;
				func_insertNumbers("N", false);
			}
			else if ( e->KeyCode == Keys::R ) {
				nonNumberEntered = true;
				lblDisplay->Text = "\\";
				bOperator = true;				
				func_insertNumbers("\\", true);
				sPool2 = "";
			}
			else if ((Control::ModifierKeys == Keys::Control) && ( e->KeyCode == Keys::V )) {
				func_pasteToDisplay();
			}
			else if (e->KeyCode == Keys::V) {
				sI10 = textBox1->Text;
if ((sI10->Contains("^") == false) && (sI10->Contains("-") == false) && (sI10->Contains("+") == false) && (sI10->Contains("*") == false) && (sI10->Contains(":") == false) && (sI10->Contains("\\") == false)) {
		if (intNROOT < 1) {
			intNROOT ++;

			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "®";
		bOperator = true;
		func_insertNumbers("®", true);
		textBox1->Text = sPool1;
		sPool2 = "";


		if (sPool1->Length < 1)
			 rtRegex->Text = "";
		func_setRegexAligned();
		if (rtDisplay1->Text->Length < 10000) {
		rtRegex->ScrollToCaret();	
		rtDisplay1->ScrollToCaret();
		}
		 pbDummy->Focus();
		 sRezult = rtRegex->Text;
		}
		else {
			//;
			if (sPool1->EndsWith("®") == false) {
				func_execCalc();
				intNROOT = 0;
			}
		}
}
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
			}
			else if ((Control::ModifierKeys == Keys::Shift) && ( e->KeyCode == Keys::D6 )) {
				sI10 = textBox1->Text;
if ((sI10->Contains("®") == false) && (sI10->Contains("-") == false) && (sI10->Contains("+") == false) && (sI10->Contains("*") == false) && (sI10->Contains(":") == false) && (sI10->Contains("\\") == false)) {
		if (intNPOWER < 1) {
			
			intNPOWER ++;

			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "^";
		bOperator = true;
		func_insertNumbers("^", true);
		textBox1->Text = sPool1;
		sPool2 = "";


		if (sPool1->Length < 1)
			 rtRegex->Text = "";
			func_setRegexAligned();
			if (rtDisplay1->Text->Length < 10000) {
			rtRegex->ScrollToCaret();		
			rtDisplay1->ScrollToCaret();
			}
		 pbDummy->Focus();
		 sRezult = rtRegex->Text;
		}
		
		else {
			//;
			if (sPool1->EndsWith("^") == false) {
				func_execCalc();
				intNPOWER = 0;
			}
		}
}
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
			}	
			else if ( e->KeyCode >= Keys::D0 && e->KeyCode <= Keys::D9 ) {
				nonNumberEntered = false;
				sPool3 = sPool1;
				//rtDisplay1->Text = sPool2;
				rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
				rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
			}
		    else if ( e->KeyCode >= Keys::NumPad0 && e->KeyCode <= Keys::NumPad9 ) {
				nonNumberEntered = false;
				sPool3 = sPool1;
				//rtDisplay1->Text = sPool2;
				rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
				rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
			}
		}
		//func_activateLayout(true);
		//if ((rtDisplay1->Text->Equals("0")) && (rtRegex->Text->Equals("") == false) && (rtRegex->Text->StartsWith("-")) && (rtRegex->Text->EndsWith("-") == false) && (rtRegex->Text->EndsWith("+") == false) && (rtRegex->Text->EndsWith("*") == false) && (rtRegex->Text->EndsWith(":") == false) && (rtRegex->Text->EndsWith("\\") == false) && (rtRegex->Text->EndsWith("V") == false) && (rtRegex->Text->EndsWith("®") == false) && (rtRegex->Text->EndsWith("=") == false)) {
		//	rtDisplay1->Text = rtRegex->Text;
		//}
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		
		//pbDummy->Focus();		
}
private: System::Void rtDisplay1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		func_KeyDown(e);
		}
private: System::Void rtDisplay1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::KeyEventArgs^  f;
			 rtDisplay1_KeyUp(this, f);
			 if (rtDisplay1->Text->Length < 10000)
				 rtDisplay1->ScrollToCaret();
		 }

void func_KeyUp(System::Windows::Forms::KeyEventArgs^  e) {
		 int nMode;
			//func_activateLayout(fals);
		 if (bReset) {
			bReset = false;
			if (rtDisplay1->Text->Length < 10000) {
				nMode = func_getNMode();
				rtDisplay1->Text = func_formatNumber(sPool2);
			}	
			else
				rtDisplay1->Text = sPool2;
			if (func_checkNeg(rtDisplay1->Text))
				rtDisplay1->Text = rtDisplay1->Text->Concat(rtDisplay1->Text->Substring(1), "-");
			if (sPool2->Equals("")) {
				if (rtDisplay1->Text->Length < 10000)
					rtDisplay1->Text = func_formatNumber(sPool5);
				if (func_checkNeg(rtDisplay1->Text)) {
					rtDisplay1->Text = rtDisplay1->Text->Concat(rtDisplay1->Text->Substring(1), "-");
				}
			}
		}
		else {
			if (rtDigits->Text->StartsWith("Calc") == false) {
				rtDigits->Text = String::Format("{0,1:G}", func_numDigit(rtDisplay1->Text))->Trim();
				rtDigits->Text = rtDigits->Text->Concat(rtDigits->Text, "-Digit");
			}
		}
		 if (sPool1->Length < 1)
			 rtRegex->Text = "";

		func_setRegexAligned();

		if (rtDisplay1->Text->EndsWith(".")) {
			rtDisplay1->Text = rtDisplay1->Text->Concat(".", rtDisplay1->Text->Substring(0, rtDisplay1->Text->Length - 1));
		}
		
		if (rtRegex->Text->EndsWith(".")) {
			rtRegex->Text = rtRegex->Text->Concat(".", rtRegex->Text->Substring(0, rtRegex->Text->Length - 1));
		}
		

		rtRegex->ScrollToCaret();		
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		func_activateLayout(true);

}

private: System::Void rtDisplay1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyUp(e);
		 }
private: System::Void rtDisplay1_Validated(System::Object^  sender, System::EventArgs^  e) {
		 }

void func_execCalc() {
			System::Windows::Forms::KeyEventArgs^  f;
			String ^sTemp;
		 	struct _timeb t3;
			unsigned short millitm1;
			
			time_t t1;
			 Int32 n;
			 n = sPool1->Length - 1;
			 textBox1->Text = "";
			 if (n >= 0) {
				_ftime64_s(&t3);
				t1 = t3.time;
				millitm1 = t3.millitm;
				label5->Text = "";
				timer1->Stop();	
				sPool1 = sPool1->Concat(sPool1, "=");
				textBox1->Text = sPool1;
				func_calcParsing(sPool1);
				sTemp = "Result:\n";
				if (sPool4->StartsWith("Incomplete")) {
					sTemp = sPool4;
				}
				else{
					sTemp = sTemp->Concat(sTemp, sPool4->Trim(), " ", sPool1);
				}
				sPool3 = "";
				sPool2 = "";
				sPool1 = "";
				bReset = true;
				richTextBox1->Text = sTemp;
				sPool5 = "";
				sPool4 = "";
				rtDisplay1->Text = "0";
				rtDisplay1_KeyUp(this, f);
				func_elapsedTime(t1, millitm1);
			}
			 rtRegex->Text = "";
			 textBox1->Text = "";
			 Application::UseWaitCursor = false;
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
}

private: System::Void pbEq_Click(System::Object^  sender, System::EventArgs^  e) {
			System::Windows::Forms::KeyEventArgs^  f;
			String ^sTemp;
		 	struct _timeb t3;
			unsigned short millitm1;
			
			time_t t1;
			 Int32 n;
			 n = sPool1->Length - 1;
			 textBox1->Text = "";
			 if ((n >= 0)  && (sPool1->Contains("®") == false) && (sPool1->Contains("^") == false)) {
				_ftime64_s(&t3);
				t1 = t3.time;
				millitm1 = t3.millitm;
				label5->Text = "";
				timer1->Stop();	
				sPool1 = sPool1->Concat(sPool1, "=");
				textBox1->Text = sPool1;
				func_calcParsing(sPool1);
				sTemp = "Result:\n";
				if (sPool4->StartsWith("Incomplete")) {
					sTemp = sPool4;
				}
				else{
					sTemp = sTemp->Concat(sTemp, sPool4->Trim(), " ", sPool1);
				}
				sPool3 = "";
				sPool2 = "";
				sPool1 = "";
				bReset = true;
				richTextBox1->Text = sTemp;
				sPool5 = "";
				sPool4 = "";
				rtDisplay1->Text = "0";
				rtDisplay1_KeyUp(this, f);
				func_elapsedTime(t1, millitm1);
			}
			 rtRegex->Text = "";
			 textBox1->Text = "";
			 Application::UseWaitCursor = false;
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		 }
private: System::Void pbClear_Click(System::Object^  sender, System::EventArgs^  e) {
		lblDisplay->Text = "C";
		sPool1 = "";
		sPool2 = "";
		sPool3 = "";
		sPool4 = "";
		sPool5 = "";
		rtDigits->Text = "";
		rtRegex->Text = "";
		textBox1->Text = "";
		richTextBox1->Text= "";
		rtDisplay1->Text = "0";
		bReset = true;
		lblDisplay->Text = "";
		intNROOT = 0;
		intNPOWER = 0;
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
		 }
private: System::Void pbSign_Click(System::Object^  sender, System::EventArgs^  e) {
				lblDisplay->Text = "+/-";
				bOperator = false;
				func_insertNumbers("N", false);
				textBox1->Text = sPool1;
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 60) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		}
		else
			rtRegex->Text = "";
		rtRegex->ScrollToCaret();
				rtDisplay1->Text = sPool2;
				sPool5 = "";
		 }
private: System::Void pbClear_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbSign_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbDiv_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbMul_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
						 func_KeyPressed(e);
		 }
private: System::Void pb8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbMinus_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbPlus_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbEq_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbDot_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pb0_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 			 func_KeyPressed(e);
		 }
private: System::Void pbClear_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyDown(e);
		 }
private: System::Void pbSign_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyDown(e);
		 }
private: System::Void pbDiv_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyDown(e);
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		lblDisplay->Text = "\\";
		bOperator = true;
		func_insertNumbers("\\", false);
		textBox1->Text = sPool1;
		sPool2 = "";
if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";			
			if (rtDisplay1->Text->Length < 10000) {
				rtRegex->ScrollToCaret();	
				rtDisplay1->ScrollToCaret();
			}
		 pbDummy->Focus();
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		rtDisplay1->Text = "0";
		button9_Click(this, e);
		sPool1 = "";
		sPool2 = "";
		textBox1->Text = sPool1;
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	DoWorkEventArgs ^e1;
	struct _timeb t3;
	unsigned short millitm1;
	time_t t1;
		
	String ^sTemp;
	_ftime64_s(&t3);
	t1 = t3.time;
	millitm1 = t3.millitm;
	label5->Text = "";
	timer1->Stop();
	sTemp = func_proc10_DoWork(this, e1);
	if (sTemp->StartsWith("*"))
		richTextBox1->Text = sTemp->Substring(1);
	else
		richTextBox1->Text = sTemp;
	func_elapsedTime(t1, millitm1);
	rtDisplay1->Text = "0";
	rtRegex->Text = "";
		sPool1 = "";
		sPool2 = "";
		textBox1->Text = "";
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		rtDisplay1->Text = "0";
		button12_Click_1(this, e);
		sPool1 = "";
		sPool2 = "";
		textBox1->Text = sPool1;
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		if (intNROOT < 1) {
			intNROOT ++;

			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "®";
		bOperator = true;
		func_insertNumbers("®", true);
		textBox1->Text = sPool1;
		sPool2 = "";

		if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
		if (rtDisplay1->Text->Length < 10000) {
			rtDisplay1->ScrollToCaret();
			rtRegex->ScrollToCaret();		
		}
		 pbDummy->Focus();
		}	
		else {
			if (sPool1->EndsWith("®") == false) { 
				func_execCalc();
				intNROOT = 0;
			}
		}
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (intNPOWER < 1) {
			intNPOWER ++;

			bReset = false;
			nonNumberEntered = true;
			if (sPool1->Equals("")) {
				sPool5 = "";
				bOperator = false;
			}
			else if (sPool5->Equals(""))
				sPool5 = sPool2;

		lblDisplay->Text = "^";
		bOperator = true;
		func_insertNumbers("^", true);
		textBox1->Text = sPool1;
		sPool2 = "";


if (sPool1->Length < 1)
			 rtRegex->Text = "";
		sPool7 = textBox1->Text; 
		if (sPool7->Length > 46) {
			sPool7 = func_reverseExpr(sPool7, false);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::No;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else if (sPool7->Length > 0) {
			sPool7 = func_reverseExpr(sPool7, true);
			rtRegex->Text = sPool7;
			rtRegex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			pbDummy->Focus();
		}
		else
			rtRegex->Text = "";
			if (rtDisplay1->Text->Length < 10000) {
			rtRegex->ScrollToCaret();		
			rtDisplay1->ScrollToCaret();
			}
		 pbDummy->Focus();
		}
		else {
			if (sPool1->EndsWith("^") == false) {
				func_execCalc();
				intNPOWER = 0;
			}
		}
		if (rtDisplay1->Text->Length < 10000)
			rtDisplay1->ScrollToCaret();
		pbDummy->Focus();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
		 }
private: System::Void rtDisplay1_HScroll(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void rtRegex_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

void SaveFile()
   {
      // You should replace the bold file name in the 
      // sample below with a file name of your own choosing.
      richTextBox1->SaveFile(String::Concat
         (System::Environment::GetFolderPath
         (System::Environment::SpecialFolder::Personal),
         "\\ProCalc Result.rtf"), RichTextBoxStreamType::RichNoOleObjs);
   }

private: System::Void menuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 terminate();
		 }
private: System::Void menuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFile();
		 }
private: System::Void menuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->SelectAll();
			 richTextBox1->Copy();
			 richTextBox1->DeselectAll();
		 }
private: System::Void menuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
			 rtDisplay1->SelectAll();
			 rtDisplay1->Copy();
			 rtDisplay1->DeselectAll();
		 }
private: System::Void menuItem7_Click(System::Object^  sender, System::EventArgs^  e) {
			 rtRezult->SelectAll();
			 rtRezult->Copy();
			 rtRezult->DeselectAll();
		 }
private: System::Void menuItem9_Click(System::Object^  sender, System::EventArgs^  e) {
			 func_pasteToDisplay();
		 }
private: System::Void rtRegex_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			 pbDummy->Focus();
		 }
private: System::Void rtDigits_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			 pbDummy->Focus();
		 }
private: System::Void richTextBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			 pbDummy->Focus();
		 }
private: System::Void menuItem11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			 menuItem11->Checked = !menuItem11->Checked;
			 if (menuItem11->Checked)
				func_setFormat(true);
			 else
				func_setFormat(false);
		 }
private: System::Void menuItem12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
			 func_setFormat(false);
		 }
private: System::Void pbDummy_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (rtDisplay1->Text->Length < 10000)
				rtDisplay1->ScrollToCaret();
		 }
private: System::Void pbDummy_Leave(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rtDisplay1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pbDummy_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyDown(e);
		 }
private: System::Void pbDummy_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 func_KeyPressed(e);
		 }
private: System::Void pbDummy_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 func_KeyUp(e);
		 }


private: System::Void rtDisplay1_Enter_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pbDummy_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

String ^func_genNum1() {
			Int32 n;
			sDemo = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";
			for (nIndex = 1; nIndex <= 5; nIndex ++) {
				sDemo = sDemo->Concat(sDemo, sDemo);
			}
			n = sDemo->Length;
			return sDemo;

}

String ^func_genNum2() {
			Int32 i, j, n;
			sDemo = "001234567890";
			String ^sTemp;
			typedef std::mt19937 Myeng; 
			typedef std::bernoulli_distribution Mydist; 
		    Myeng eng; 
			Mydist dist(0.6); 
			Mydist::input_type engval = eng(); 
			Mydist::result_type distval = dist(eng);  
			distval = distval;  // to quiet "unused" warnings 
			engval = engval; 
			rtDigits->Text = "Generating random number for input";
			sDemo2 = "";    
			for (j = 1; j <= 100; j ++) {
				for (nIndex = 1; nIndex <= 5; nIndex ++) {
					for (i = 1; i <= 2000; i ++) {
						dist.reset();
						n = 0;
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						n = n + dist(eng);
						sTemp = sDemo->Substring(n, 1);
						sDemo2 = sDemo2->Concat(sDemo2, sTemp);
					}
				}
			}
			n = sDemo2->Length;
			return sDemo2;
}

void func_BigNumOperation(String ^sOp) {
			 String ^sTemp;
		 	struct _timeb t3;
			unsigned short millitm1;			
			time_t t1;
			 Int32 n;
			 rtDigits->Text = "Generating first random number for input";
			 rtDisplay1->Text = func_genNum2();
			 rtDigits->Text = "Generating second random number for input";
			 textBox1->Text = rtDisplay1->Text;
			 rtDisplay1->Text = func_genNum2();
			 rtDigits->Text = "Please wait while processing big numbers calculation";
			 textBox1->Text = textBox1->Text->Concat(textBox1->Text, sOp, rtDisplay1->Text);
			 rtRegex->Text = textBox1->Text;
			 sPool1 = textBox1->Text;
			 n = sPool1->Length - 1;
			 textBox1->Text = "";
				_ftime64_s(&t3);
				t1 = t3.time;
				millitm1 = t3.millitm;
				label5->Text = "";
				timer1->Stop();	
				sPool1 = sPool1->Concat(sPool1, "=");
				textBox1->Text = sPool1;
				func_calcParsing(sPool1);
				sTemp = "Result:\n";
				if (sPool4->StartsWith("Incomplete")) {
					sTemp = sPool4;
				}
				else{
					sTemp = sTemp->Concat(sTemp, sPool4->Trim(), " ", sPool1);
				}
				sPool3 = "";
				sPool2 = "";
				sPool1 = "";
				bReset = true;
				richTextBox1->Text = sTemp;
				sPool5 = "";
				sPool4 = "";
				rtRegex->Text = "";
				rtDisplay1->Text = "0";
				func_elapsedTime(t1, millitm1);

}

private: System::Void menuItem13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void menuItem14_Click_1(System::Object^  sender, System::EventArgs^  e) {
			func_BigNumOperation("+");
		 }
private: System::Void menuItem15_Click(System::Object^  sender, System::EventArgs^  e) {
			func_BigNumOperation("-");
		 }
private: System::Void menuItem16_Click(System::Object^  sender, System::EventArgs^  e) {
			func_BigNumOperation("*");
		 }
private: System::Void menuItem17_Click(System::Object^  sender, System::EventArgs^  e) {
			func_BigNumOperation(":");
		 }

};
}

//Alhamdulillah!