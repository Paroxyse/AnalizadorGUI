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
	private: System::Windows::Forms::RichTextBox^ TBError;

	private: System::Windows::Forms::RichTextBox^ TBToken;
	private: System::Windows::Forms::RichTextBox^ TBFile;


	String ^CharsetName="symbnum.txt";
	String ^MayusName="Mayus.txt";
	String^ MinusName = "Minus.txt";
	String^ FTName = "TablaT0.txt";
	String^ CLName = "ListaCodigos0.txt";
	String^ MLName = "ListaMensajes0.txt";
	String^ Input = "Entrada.txt";
	private: System::Windows::Forms::RichTextBox^ TBProceso;

	private: System::Windows::Forms::Label^ label5;
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
			this->TBError = (gcnew System::Windows::Forms::RichTextBox());
			this->TBToken = (gcnew System::Windows::Forms::RichTextBox());
			this->TBFile = (gcnew System::Windows::Forms::RichTextBox());
			this->TBProceso = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->button4->Location = System::Drawing::Point(43, 581);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 40);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(366, 513);
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
			// TBError
			// 
			this->TBError->Location = System::Drawing::Point(368, 343);
			this->TBError->Name = L"TBError";
			this->TBError->Size = System::Drawing::Size(280, 150);
			this->TBError->TabIndex = 13;
			this->TBError->Text = L"";
			// 
			// TBToken
			// 
			this->TBToken->Location = System::Drawing::Point(368, 124);
			this->TBToken->Name = L"TBToken";
			this->TBToken->Size = System::Drawing::Size(280, 150);
			this->TBToken->TabIndex = 12;
			this->TBToken->Text = L"";
			// 
			// TBFile
			// 
			this->TBFile->Location = System::Drawing::Point(43, 124);
			this->TBFile->Name = L"TBFile";
			this->TBFile->Size = System::Drawing::Size(273, 369);
			this->TBFile->TabIndex = 11;
			this->TBFile->Text = L"";
			// 
			// TBProceso
			// 
			this->TBProceso->Location = System::Drawing::Point(713, 124);
			this->TBProceso->Name = L"TBProceso";
			this->TBProceso->Size = System::Drawing::Size(273, 369);
			this->TBProceso->TabIndex = 22;
			this->TBProceso->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Digital-7", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(717, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 33);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Proceso de analisis";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 661);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBProceso);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TBError);
			this->Controls->Add(this->TBToken);
			this->Controls->Add(this->TBFile);
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
	//Verifica si un caracter es número
	int isNumber(char c)
	{
		if (c >= '0' && c <= '9') 
		{
			return 0;
		}
		return -1;
	}
	//Carga archivos con el alfabeto y verifica si un caracter es letra
	int isLetter(char c) 
	{
		std::string mayus = "";
		std::string min = "";
		mayus = LeerArc(convertirMU(MayusName));
		min = LeerArc(convertirMU(MinusName));
		//Se podría poner todo dentro del mismo for, pero eso asume que el conjunto mayus y min son del mismo tamaño
		//Lo cual debería ser el caso, pero podría no serlo
		for (int i = 0; i < mayus.size(); i++)
		{
			if (c == mayus.at(i))
			{
				return 1;
			}
		}
		for (int i = 0; i < min.size(); i++)
		{
			if (c == min.at(i))
			{
				return 2;
			}
		}
		return -1;
	}
	//Se manda una cadena que contiene todos los caracteres que no son parte de un conjunto y se retorna si el caracter está contenido
	//en la cadena y en qué posición
	int isSomethingElse(char c, std::string charsetfile)
	{
		std::string s = LeerArc(charsetfile);
		for (int i = 0; i < s.size(); i++) {
			if (c == s.at(i))
			{
				return i + 3;
			}
		}
		return -1;
	}
	//Verifica con ayuda de los tres métodos anteriores el tipo de dato que tiene un caracter, si un caracter dentro de un conjunto
	//tiene un comportamiento especial, retorna el comportamiento especial, en lugar de el de el conjunto (E/e en constantes mat)
	int dataType(char c, std::string charsetfile)
	{
		int ret = -1;
		int aux;
		aux = isNumber(c);
		if(aux!=-1)
		{
			ret = aux;
		}
		aux = isLetter(c);
		if (aux != -1)
		{
			ret = aux;
		}
		aux = isSomethingElse(c, charsetfile);
		if (aux != -1)
		{
			ret = aux;
		}
		return ret;
	}
	//Carga y Retorna una función de transición
	std::vector<std::vector<int>> cargarFT(std::string filename)
	{
		std::vector<std::vector<int>> FT{};
		std::ifstream sourceFileStream{ filename };

		if (sourceFileStream) {
			std::string line{};
			while (std::getline(sourceFileStream, line))
			{
				FT.push_back(std::vector<int>{});
				int c{};
				for (std::istringstream iss(line); iss >> c; FT.back().push_back(c))
					;
			}

			for (const auto& row : FT)
			{
				for (const auto& col : row) std::cout << col << ' ';
				std::cout << '\n';
			}
		}
		else std::cerr << "\nError: No se encontró el archivo\n\n";
		return FT;
	}
	//Carga y retorna un vector de ints
	std::vector<int> cargarVint(std::string s)
	{
		std::vector<int> aux{};
		std::ifstream input(s);
		if (input)
		{
			int valor;
			while (input >> valor)
			{
				aux.push_back(valor);
			}
			return aux;
		}
		//cout << "Archivo conteniendo una lista de enteros no encontrado";
		return aux;
	}
	//Carga y retorna un vector de strings
	std::vector<std::string> cargarVstring(std::string s)
	{
		std::vector<std::string> aux{};
		std::ifstream input;
		input.open(s);
		if (input)
		{
			std::string cadena;
			while (input >> cadena)
			{
				aux.push_back(cadena);
			}
			return aux;
		}
		//Jaja, la consola no hace nada
			//cout << "Archivo conteniendo una lista de strings no encontrado";
		
		return aux;
	}
	//Analiza un vector de ints y retorna el primer índice donde encuentre un valor específico
	int getItemIndex(int code, std::vector<int> v)
	{
		if (v.size() == 0)
		{
			return -1;
		}
		for (int i = 0; i < v.size(); i++)
		{
			if (code == v[i])
			{
				return i;
			}
		}

	}
	//Este método hace la magia
	void analizar(std::string inputString, std::string charset, std::string TFunc, std::string CodeList, std::string MessageList)
	{
		std::vector<std::vector<int>> FT{};
		FT = cargarFT(TFunc);
		int state = 0;
		int symb;
		int i = 0;
		std::string inString;
		std::string outputerror = "";
		std::string outputtoken = "";
		std::string proceso = "";
		inString = LeerArc(inputString);
		while (i < inString.size())
		{
			symb = dataType(inString.at(i), charset);
			if (symb == -1) {
				state = 500;
				//cout << i << " " << symb << " " << state << " " << inString.at(i);
			}
			if (state < TFunc.size())
			{
				state = FT[state][symb];
				//cout << i << " " << symb << " " << state << " " << inString.at(i); <--Reemplazar con equivalente en textbox
				//Si este es el último caracter o si el siguiente estado desde el actual explota, corta el token aquí y salta a un estado
				 //de final
				if (i == inString.size() - 1 && state < FT.size())
				{
					state = FT[state][FT[state].size() - 1];
				}

			}

			if (state > TFunc.size())
			{
				//load code list
				std::vector<int> cList = cargarVint(CodeList);
				//load message list
				std::vector<std::string> mList = cargarVstring(MessageList);
				//Get index on the message list from the code list
				int ItemIndex = getItemIndex(state, cList);
				if (ItemIndex == -1)
				{
					ItemIndex = getItemIndex(600, cList);
				}

				if(state<500)
				{
					outputtoken.append(mList.at(ItemIndex)+"\n");
				}
				else 
				{
					outputerror.append(mList.at(ItemIndex)+"\n");
				}
				//Las dejo adentro del ciclo aunque reduzcan desempeño para que se vea cómo se realiza la acción progresivamente
				TBError->Text = convertirUM(outputerror);
				TBToken->Text = convertirUM(outputtoken);

				state = 0;
			}
			proceso.append(std::to_string(i) + "\t" + std::to_string(symb) + "\t" + std::to_string(state) + "\t" + inString.at(i)+"\n");
			TBProceso->Text = convertirUM(proceso);
			i++;
		}
		//Cambiar por cambio de texto en tboxes
		//cout << "\n" << output;

	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		OpenFileDialog ofd;
		ofd.InitialDirectory="C:";
		ofd.Title="Abrir Archivo";
		//ofd.Filter = "Image Files|*.jpg;*.jpeg;|All Files|*.*";
		ofd.ShowDialog();
		Input = ofd.FileName;
		
		
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	std::string inputString = convertirMU(Input);
	std::string charset = convertirMU(CharsetName);
	std::string TFunc = convertirMU(FTName);
	std::string CodeListFileName = convertirMU(CLName);
	std::string MessageListFileName = convertirMU(MLName);
	analizar(inputString,charset,TFunc,CodeListFileName,MessageListFileName);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
	//Métodos propios
	
	  


};
}
