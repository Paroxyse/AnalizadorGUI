#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <msclr\marshal_cppstd.h>
namespace AnalizadorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	String ^FilePath;
	
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Digital-7", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(362, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 33);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Errores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Digital-7", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(362, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 33);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Tokens";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Digital-7", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 33);
			this->label2->TabIndex = 19;
			this->label2->Text = L"archivo.txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Digital-7", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 33);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Archivo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 585);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 40);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(43, 585);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Analizar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 513);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 40);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 513);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(368, 343);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(280, 150);
			this->richTextBox3->TabIndex = 13;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(368, 124);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(280, 150);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(43, 124);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(273, 369);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 661);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"Analizador gamer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		//Convertir de string manejada a std
		std::string convertirMU(System::String ^s) 
		{
			std::string st = msclr::interop::marshal_as<std::string>(s); 
				return st;
		}
		//Convertir de string std a manejada
		System::String^ convertirUM(std::string s)
		{
			String^ st = gcnew String(s.c_str());
			return st;
		}
		//Cargar Archivo a una string
		std::string LeerArc(std::string filetl) {
			std::ifstream file;
			file.open(filetl, std::ios::in);

			if (file.fail())
			{
				//cout << "El archivo " << filetl << " no existe" << endl;
				return "";
			}
			std::string str;
			char c;

			while (file.get(c))
			{
				str.push_back(c);
			}
			file.close();

			return str;
		}
		
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		OpenFileDialog ofd;
		ofd.InitialDirectory="C:";
		ofd.Title="Abrir Archivo";
		ofd.ShowDialog();
		FilePath = ofd.FileName;
		label1->Text = FilePath;
		
		//Load Method
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*String ^test = "awa";
	std::string s;
	s = convertirMU(test);
	test = "";
	test = convertirUM(s);
	label1->Text = test;*/
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	//Métodos propios
	
	  


};
}
