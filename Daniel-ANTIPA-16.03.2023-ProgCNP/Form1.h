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
	private: System::Windows::Forms::Button^ calculeaza_cnp;
	protected:
	private: System::Windows::Forms::Button^ stergere_cnp;
	private: System::Windows::Forms::TextBox^ input_cnp;

	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ afisaj_data;


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
			this->calculeaza_cnp = (gcnew System::Windows::Forms::Button());
			this->stergere_cnp = (gcnew System::Windows::Forms::Button());
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->afisaj_data = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calculeaza_cnp
			// 
			this->calculeaza_cnp->Location = System::Drawing::Point(143, 116);
			this->calculeaza_cnp->Name = L"calculeaza_cnp";
			this->calculeaza_cnp->Size = System::Drawing::Size(92, 23);
			this->calculeaza_cnp->TabIndex = 0;
			this->calculeaza_cnp->Text = L"Calculeaza CNP";
			this->calculeaza_cnp->UseVisualStyleBackColor = true;
			this->calculeaza_cnp->Click += gcnew System::EventHandler(this, &Form1::calculeaza_cnp_Click);
			// 
			// stergere_cnp
			// 
			this->stergere_cnp->Location = System::Drawing::Point(241, 116);
			this->stergere_cnp->Name = L"stergere_cnp";
			this->stergere_cnp->Size = System::Drawing::Size(75, 23);
			this->stergere_cnp->TabIndex = 1;
			this->stergere_cnp->Text = L"CLR";
			this->stergere_cnp->UseVisualStyleBackColor = true;
			this->stergere_cnp->Click += gcnew System::EventHandler(this, &Form1::stergere_cnp_Click);
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(143, 26);
			this->input_cnp->Multiline = true;
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(173, 72);
			this->input_cnp->TabIndex = 2;
			this->input_cnp->TextChanged += gcnew System::EventHandler(this, &Form1::cnp_TextChanged);
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(143, 155);
			this->afisaj_cnp->Multiline = true;
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(173, 72);
			this->afisaj_cnp->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(352, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Data:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// afisaj_data
			// 
			this->afisaj_data->Location = System::Drawing::Point(354, 74);
			this->afisaj_data->Name = L"afisaj_data";
			this->afisaj_data->Size = System::Drawing::Size(88, 23);
			this->afisaj_data->TabIndex = 5;
			this->afisaj_data->Text = L"Afiseaza data";
			this->afisaj_data->UseVisualStyleBackColor = true;
			this->afisaj_data->Click += gcnew System::EventHandler(this, &Form1::afisaj_data_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 361);
			this->Controls->Add(this->afisaj_data);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->input_cnp);
			this->Controls->Add(this->stergere_cnp);
			this->Controls->Add(this->calculeaza_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void afisaj_data_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	label1->Text = today.ToString("dd/MM/yyy");
}
private: System::Void stergere_cnp_Click(System::Object^ sender, System::EventArgs^ e) {
	input_cnp->Clear();
	afisaj_cnp->Clear();
}
private: System::Void cnp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void calculeaza_cnp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (input_cnp->Text->Length == 0) {
		MessageBox::Show("Introduceti CNP-ul", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	else {
		//citire CNP
		String^ cnp = input_cnp->Text;

		//extragere date din CNP
		int an = Int32::Parse(cnp->Substring(1, 2));
		int luna = Int32::Parse(cnp->Substring(3, 2));
		int zi = Int32::Parse(cnp->Substring(5, 2));

		//calcul varsta

		DateTime azi = DateTime::Now;

		int century = 0;
		if (Int32::Parse(cnp->Substring(0, 1)) <= 2) {
			century = 1900;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 4) {
			century = 1800;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 6) {
			century = 2000;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 8) {
			century = 1900;
		}

		int varsta = azi.Year - (century + an);

		//afisare date in afisaj_cnp;
		afisaj_cnp->Text = "Data naterii: " + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + "\r\n" + "Varsta: " + varsta.ToString();
	
	}
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
