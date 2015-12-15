#pragma once
#include<string>
#include<strstream>
#include<stdlib.h>
#include "stdafx.h";
#include "Calculator.h"


namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tvNum1;
	protected: 
	private: System::Windows::Forms::TextBox^  tvNum2;
	private: System::Windows::Forms::TextBox^  tvResult;
	private: System::Windows::Forms::Button^  btnPlus;

	private: System::Windows::Forms::Button^  btnMinus;
	private: System::Windows::Forms::Button^  btnMultiple;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ToolStripMenuItem^  mainCalculatorToolStripMenuItem;


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
			this->tvNum1 = (gcnew System::Windows::Forms::TextBox());
			this->tvNum2 = (gcnew System::Windows::Forms::TextBox());
			this->tvResult = (gcnew System::Windows::Forms::TextBox());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnMultiple = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tvNum1
			// 
			this->tvNum1->Location = System::Drawing::Point(119, 42);
			this->tvNum1->Multiline = true;
			this->tvNum1->Name = L"tvNum1";
			this->tvNum1->Size = System::Drawing::Size(222, 31);
			this->tvNum1->TabIndex = 0;
			// 
			// tvNum2
			// 
			this->tvNum2->Location = System::Drawing::Point(119, 82);
			this->tvNum2->Multiline = true;
			this->tvNum2->Name = L"tvNum2";
			this->tvNum2->Size = System::Drawing::Size(222, 35);
			this->tvNum2->TabIndex = 1;
			// 
			// tvResult
			// 
			this->tvResult->Location = System::Drawing::Point(119, 174);
			this->tvResult->Multiline = true;
			this->tvResult->Name = L"tvResult";
			this->tvResult->Size = System::Drawing::Size(222, 33);
			this->tvResult->TabIndex = 2;
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(119, 123);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(45, 35);
			this->btnPlus->TabIndex = 3;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(177, 123);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(49, 35);
			this->btnMinus->TabIndex = 5;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// btnMultiple
			// 
			this->btnMultiple->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMultiple->Location = System::Drawing::Point(235, 123);
			this->btnMultiple->Name = L"btnMultiple";
			this->btnMultiple->Size = System::Drawing::Size(49, 35);
			this->btnMultiple->TabIndex = 6;
			this->btnMultiple->Text = L"*";
			this->btnMultiple->UseVisualStyleBackColor = true;
			this->btnMultiple->Click += gcnew System::EventHandler(this, &Form1::btnMultiple_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(292, 123);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(49, 35);
			this->btnDiv->TabIndex = 7;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(364, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->exitToolStripMenuItem1, 
				this->exitToolStripMenuItem2});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"File";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->mainCalculatorToolStripMenuItem});
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem1->Text = L"Open";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem1_Click);
			// 
			// mainCalculatorToolStripMenuItem
			// 
			this->mainCalculatorToolStripMenuItem->Name = L"mainCalculatorToolStripMenuItem";
			this->mainCalculatorToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->mainCalculatorToolStripMenuItem->Text = L"MainCalculator";
			this->mainCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mainCalculatorToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem2
			// 
			this->exitToolStripMenuItem2->Name = L"exitToolStripMenuItem2";
			this->exitToolStripMenuItem2->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem2->Text = L"Exit";
			this->exitToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"First Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"2nd Number";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 239);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMultiple);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->tvResult);
			this->Controls->Add(this->tvNum2);
			this->Controls->Add(this->tvNum1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Simple Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void btnPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*int ^ a;
             a = Convert::ToInt32(tvNum1->Text);
			 tvNum2->Text=Convert::ToString(a);*/
				       
				 /*  int a= Convert::ToInt32(this->tvNum1->Text->Trim());
                     int b= Convert::ToInt32(this->tvNum2->Text->Trim());
					 int sum=a+b;
                     this->tvResult->Text=sum.ToString();*/

						double num1=Convert :: ToDouble (this->tvNum1->Text->Trim());
						double num2=Convert :: ToDouble (this->tvNum2->Text->Trim());
						double sum=num1+num2;
						this->tvResult->Text=sum.ToString();
						MessageBox::Show("Addition is : "+tvResult->Text);
			 }
	
private: System::Void btnMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			            double num1=Convert :: ToDouble (this->tvNum1->Text->Trim());
						double num2=Convert :: ToDouble (this->tvNum2->Text->Trim());
						double sum=num1-num2;
						this->tvResult->Text=sum.ToString();
						MessageBox::Show("Subtract is : "+tvResult->Text);
		 }
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
					    double num1=Convert :: ToDouble (this->tvNum1->Text->Trim());
						double num2=Convert :: ToDouble (this->tvNum2->Text->Trim());
						double sum=num1/num2;
						this->tvResult->Text=sum.ToString();
						MessageBox::Show("Division is : "+tvResult->Text);
		 }
private: System::Void btnMultiple_Click(System::Object^  sender, System::EventArgs^  e) {
			            double num1=Convert :: ToDouble (this->tvNum1->Text->Trim());
						double num2=Convert :: ToDouble (this->tvNum2->Text->Trim());
						double sum=num1*num2;
						this->tvResult->Text=sum.ToString();
						MessageBox::Show("Multiple is : "+tvResult->Text);
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void exitToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void mainCalculatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Calculator^ f2 = gcnew Calculator();
             f2.ShowDialog();
			 this->Hide();
		 }
};
}

