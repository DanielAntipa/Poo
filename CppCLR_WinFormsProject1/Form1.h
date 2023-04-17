#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ virgula;
	private: System::Windows::Forms::Button^ keyZero;
	protected:

	private: System::Windows::Forms::Button^ total;
	private: System::Windows::Forms::Button^ key3;
	private: System::Windows::Forms::Button^ key2;
	private: System::Windows::Forms::Button^ key1;
	private: System::Windows::Forms::Button^ key6;
	private: System::Windows::Forms::Button^ key5;
	private: System::Windows::Forms::Button^ key4;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ key9;
	private: System::Windows::Forms::Button^ key8;
	private: System::Windows::Forms::Button^ key7;
	private: System::Windows::Forms::TextBox^ display;
	private: System::Windows::Forms::TextBox^ afisare_calcul;

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
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->keyZero = (gcnew System::Windows::Forms::Button());
			this->total = (gcnew System::Windows::Forms::Button());
			this->key3 = (gcnew System::Windows::Forms::Button());
			this->key2 = (gcnew System::Windows::Forms::Button());
			this->key1 = (gcnew System::Windows::Forms::Button());
			this->key6 = (gcnew System::Windows::Forms::Button());
			this->key5 = (gcnew System::Windows::Forms::Button());
			this->key4 = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->key9 = (gcnew System::Windows::Forms::Button());
			this->key8 = (gcnew System::Windows::Forms::Button());
			this->key7 = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->afisare_calcul = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// virgula
			// 
			this->virgula->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->virgula->Location = System::Drawing::Point(272, 305);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(75, 55);
			this->virgula->TabIndex = 35;
			this->virgula->Text = L",";
			this->virgula->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->virgula->UseVisualStyleBackColor = false;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// keyZero
			// 
			this->keyZero->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->keyZero->Location = System::Drawing::Point(110, 305);
			this->keyZero->Name = L"keyZero";
			this->keyZero->Size = System::Drawing::Size(156, 55);
			this->keyZero->TabIndex = 34;
			this->keyZero->Text = L"0";
			this->keyZero->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->keyZero->UseVisualStyleBackColor = false;
			this->keyZero->Click += gcnew System::EventHandler(this, &Form1::keyZero_Click);
			// 
			// total
			// 
			this->total->BackColor = System::Drawing::Color::RoyalBlue;
			this->total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total->ForeColor = System::Drawing::Color::OldLace;
			this->total->Location = System::Drawing::Point(362, 366);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(75, 55);
			this->total->TabIndex = 33;
			this->total->Text = L"Total";
			this->total->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->total->UseVisualStyleBackColor = false;
			this->total->Click += gcnew System::EventHandler(this, &Form1::total_Click);
			// 
			// key3
			// 
			this->key3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key3->Location = System::Drawing::Point(272, 244);
			this->key3->Name = L"key3";
			this->key3->Size = System::Drawing::Size(75, 55);
			this->key3->TabIndex = 32;
			this->key3->Text = L"3";
			this->key3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key3->UseVisualStyleBackColor = false;
			this->key3->Click += gcnew System::EventHandler(this, &Form1::key3_Click);
			// 
			// key2
			// 
			this->key2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key2->Location = System::Drawing::Point(191, 244);
			this->key2->Name = L"key2";
			this->key2->Size = System::Drawing::Size(75, 55);
			this->key2->TabIndex = 31;
			this->key2->Text = L"2";
			this->key2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key2->UseVisualStyleBackColor = false;
			this->key2->Click += gcnew System::EventHandler(this, &Form1::key2_Click);
			// 
			// key1
			// 
			this->key1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key1->Location = System::Drawing::Point(110, 244);
			this->key1->Name = L"key1";
			this->key1->Size = System::Drawing::Size(75, 55);
			this->key1->TabIndex = 30;
			this->key1->Text = L"1";
			this->key1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key1->UseVisualStyleBackColor = false;
			this->key1->Click += gcnew System::EventHandler(this, &Form1::key1_Click);
			// 
			// key6
			// 
			this->key6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key6->Location = System::Drawing::Point(272, 183);
			this->key6->Name = L"key6";
			this->key6->Size = System::Drawing::Size(75, 55);
			this->key6->TabIndex = 29;
			this->key6->Text = L"6";
			this->key6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key6->UseVisualStyleBackColor = false;
			this->key6->Click += gcnew System::EventHandler(this, &Form1::key6_Click);
			// 
			// key5
			// 
			this->key5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key5->Location = System::Drawing::Point(191, 183);
			this->key5->Name = L"key5";
			this->key5->Size = System::Drawing::Size(75, 55);
			this->key5->TabIndex = 28;
			this->key5->Text = L"5";
			this->key5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key5->UseVisualStyleBackColor = false;
			this->key5->Click += gcnew System::EventHandler(this, &Form1::key5_Click);
			// 
			// key4
			// 
			this->key4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key4->Location = System::Drawing::Point(110, 183);
			this->key4->Name = L"key4";
			this->key4->Size = System::Drawing::Size(75, 55);
			this->key4->TabIndex = 27;
			this->key4->Text = L"4";
			this->key4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key4->UseVisualStyleBackColor = false;
			this->key4->Click += gcnew System::EventHandler(this, &Form1::key4_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::Coral;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(110, 366);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(237, 55);
			this->clear->TabIndex = 26;
			this->clear->Text = L"CLEAR";
			this->clear->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::Color::Coral;
			this->impartire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->impartire->Location = System::Drawing::Point(362, 122);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(75, 55);
			this->impartire->TabIndex = 25;
			this->impartire->Text = L"/";
			this->impartire->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::Color::Coral;
			this->inmultire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inmultire->Location = System::Drawing::Point(362, 183);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(75, 55);
			this->inmultire->TabIndex = 24;
			this->inmultire->Text = L"*";
			this->inmultire->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Coral;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(362, 244);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(75, 55);
			this->minus->TabIndex = 23;
			this->minus->Text = L"-";
			this->minus->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Coral;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(362, 305);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(75, 55);
			this->plus->TabIndex = 22;
			this->plus->Text = L"+";
			this->plus->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// key9
			// 
			this->key9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key9->Location = System::Drawing::Point(272, 122);
			this->key9->Name = L"key9";
			this->key9->Size = System::Drawing::Size(75, 55);
			this->key9->TabIndex = 21;
			this->key9->Text = L"9";
			this->key9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key9->UseVisualStyleBackColor = false;
			this->key9->Click += gcnew System::EventHandler(this, &Form1::key9_Click);
			// 
			// key8
			// 
			this->key8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key8->Location = System::Drawing::Point(191, 122);
			this->key8->Name = L"key8";
			this->key8->Size = System::Drawing::Size(75, 55);
			this->key8->TabIndex = 20;
			this->key8->Text = L"8";
			this->key8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key8->UseVisualStyleBackColor = false;
			this->key8->Click += gcnew System::EventHandler(this, &Form1::key8_Click);
			// 
			// key7
			// 
			this->key7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->key7->Location = System::Drawing::Point(110, 122);
			this->key7->Name = L"key7";
			this->key7->Size = System::Drawing::Size(75, 55);
			this->key7->TabIndex = 19;
			this->key7->Text = L"7";
			this->key7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->key7->UseVisualStyleBackColor = false;
			this->key7->Click += gcnew System::EventHandler(this, &Form1::key7_Click);
			// 
			// display
			// 
			this->display->Location = System::Drawing::Point(110, 30);
			this->display->Multiline = true;
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(327, 86);
			this->display->TabIndex = 18;
			// 
			// afisare_calcul
			// 
			this->afisare_calcul->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->afisare_calcul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->afisare_calcul->Location = System::Drawing::Point(112, 33);
			this->afisare_calcul->Margin = System::Windows::Forms::Padding(1);
			this->afisare_calcul->Multiline = true;
			this->afisare_calcul->Name = L"afisare_calcul";
			this->afisare_calcul->Size = System::Drawing::Size(323, 80);
			this->afisare_calcul->TabIndex = 36;
			this->afisare_calcul->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 451);
			this->Controls->Add(this->afisare_calcul);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->keyZero);
			this->Controls->Add(this->total);
			this->Controls->Add(this->key3);
			this->Controls->Add(this->key2);
			this->Controls->Add(this->key1);
			this->Controls->Add(this->key6);
			this->Controls->Add(this->key5);
			this->Controls->Add(this->key4);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->key9);
			this->Controls->Add(this->key8);
			this->Controls->Add(this->key7);
			this->Controls->Add(this->display);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void key7_Click(System::Object^ sender, System::EventArgs^ e) {
		display->Text += 7;
		afisare_calcul->Text += 7;
	}

private: System::Void key8_Click(System::Object^ sender, System::EventArgs^ e) {
		display->Text += 8;
		afisare_calcul->Text += 8;
}

private: System::Void key9_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 9;
	afisare_calcul->Text += 9;
}

private: System::Void key4_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 4;
	afisare_calcul->Text += 4;
}

private: System::Void key5_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 5;
	afisare_calcul->Text += 5;
}

private: System::Void key6_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 6;
	afisare_calcul->Text += 6;
}

private: System::Void key1_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 1;
	afisare_calcul->Text += 1;
}

private: System::Void key2_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 2;
	afisare_calcul->Text += 2;
}

private: System::Void key3_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 3;
	afisare_calcul->Text += 3;
}

private: System::Void keyZero_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += 0;
	afisare_calcul->Text += 0;
}

private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "." ;
	afisare_calcul->Text += ".";
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Clear();
	afisare_calcul->Clear();
}

private: double firstNum = 0;
private: double secondNum = 0;

private: String^ operation = "";



private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (display->Text != "") {
		firstNum = Double::Parse(display->Text);
		display->Text = "";
		operation = "+";
		display->Text = "";
		afisare_calcul->Text += " + ";
	}
}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (display->Text != "") {
		firstNum = Double::Parse(display->Text);
		display->Text = "";
		operation = "*";
		display->Text = "";
		afisare_calcul->Text += " * ";
	}
}


private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (display->Text != "") {
		firstNum = Double::Parse(display->Text);
		display->Text = "";
		operation = "-";
		display->Text = "";
		afisare_calcul->Text += " - ";
	}
}


private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (display->Text != "") {
		firstNum = Double::Parse(display->Text);
		display->Text = "";
		operation = "/";
		display->Text = "";
		afisare_calcul->Text += " / ";
	}
}



private: System::Void total_Click(System::Object^ sender, System::EventArgs^ e) {
	if (display->Text != "") {
		secondNum = Double::Parse(display->Text);
		
		if (operation == "*") {
			display->Text = (firstNum * secondNum).ToString();
			afisare_calcul->Text += " = " + (firstNum * secondNum).ToString();
		}
		if (operation == "+") {
			display->Text = (firstNum + secondNum).ToString();
			afisare_calcul->Text += " = " + (firstNum + secondNum).ToString();
		}
		if (operation == "-") {
			display->Text = (firstNum - secondNum).ToString();
			afisare_calcul->Text += " = " + (firstNum - secondNum).ToString();
		}
		if (operation == "/") {
			if (secondNum != 0) {
				display->Text = (firstNum / secondNum).ToString();
				afisare_calcul->Text += " = " + (firstNum / secondNum).ToString();
			}
			else {
				afisare_calcul->Text = "Error ! Imposibila impartirea la 0";
			}
		}

	}
}

};
}
