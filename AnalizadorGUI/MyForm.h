#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
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
	private: System::Windows::Forms::Label^ labelFile;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ TBError;

	private: System::Windows::Forms::RichTextBox^ TBToken;
	private: System::Windows::Forms::RichTextBox^ TBFile;

	//Todos son menos la entrada son txt para que el usuario no pueda desgraciar las funciones, listas y conjuntos desde el sistema :)
	String ^CharsetName="symb.txt";
	String ^MayusName="Mayus.txt";
	String^ MinusName = "Minus.txt";
	String^ FTName = "TablaT.txt";
	String^ TPName = "TablaP.txt";
	String^ MPName = "MatrizP.txt";
	String^ CLName = "LC.txt";
	String^ MLName = "LM.txt";
	String^ Input = "Entrada.lya";

	private: System::Windows::Forms::RichTextBox^ TBProceso;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
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
			this->labelFile = (gcnew System::Windows::Forms::Label());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(362, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 43);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Errores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(362, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 43);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Tokens";
			// 
			// labelFile
			// 
			this->labelFile->AutoSize = true;
			this->labelFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFile->Location = System::Drawing::Point(542, 484);
			this->labelFile->Name = L"labelFile";
			this->labelFile->Size = System::Drawing::Size(191, 35);
			this->labelFile->TabIndex = 19;
			this->labelFile->Text = L"Entrada.lya";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 43);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Archivo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(43, 545);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 40);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(216, 545);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 40);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Analisis lexico";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(216, 477);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 40);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// TBError
			// 
			this->TBError->Location = System::Drawing::Point(368, 307);
			this->TBError->Name = L"TBError";
			this->TBError->ReadOnly = true;
			this->TBError->Size = System::Drawing::Size(280, 150);
			this->TBError->TabIndex = 13;
			this->TBError->Text = L"";
			// 
			// TBToken
			// 
			this->TBToken->Location = System::Drawing::Point(368, 88);
			this->TBToken->Name = L"TBToken";
			this->TBToken->ReadOnly = true;
			this->TBToken->Size = System::Drawing::Size(280, 150);
			this->TBToken->TabIndex = 12;
			this->TBToken->Text = L"";
			// 
			// TBFile
			// 
			this->TBFile->Location = System::Drawing::Point(43, 88);
			this->TBFile->Name = L"TBFile";
			this->TBFile->Size = System::Drawing::Size(273, 369);
			this->TBFile->TabIndex = 11;
			this->TBFile->Text = L"";
			// 
			// TBProceso
			// 
			this->TBProceso->Location = System::Drawing::Point(713, 88);
			this->TBProceso->Name = L"TBProceso";
			this->TBProceso->ReadOnly = true;
			this->TBProceso->Size = System::Drawing::Size(273, 369);
			this->TBProceso->TabIndex = 22;
			this->TBProceso->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(705, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(319, 35);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Proceso de analisis";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(368, 477);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 40);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Analisis sintactico";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 631);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBProceso);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TBError);
			this->Controls->Add(this->TBToken);
			this->Controls->Add(this->TBFile);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1060, 670);
			this->MinimumSize = System::Drawing::Size(1060, 670);
			this->Name = L"MyForm";
			this->Text = L"Analizador léxico";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
	//Revisa si un estado indica que es necesario regresar una iteración para analizar el caracter actual correctamente
	//Antes había spaghetti aquí, ahora hay código normal
	bool cursedState(int state)
	{
		std::vector<int> x = cargarVint("Returnstate.txt");
		for (int i=0;i<x.size();i++)
		{
		if (state== x[i])
		{
			return true;
		}
		}
		return false;
	}
	bool dtickCount(std::string s)
	{
		int count = 0;
		for (int i = 0; i < s.size(); i++) 
		{
			if (s.at(i) == '\"') 
			{
				count++;
			}
		}
		return count % 2;
	}
	//ez addition, ig
	int resDet(std::vector<std::string> v, std::string s)
	{
	for(int i=0;i<v.size();i++)
	{
	if(v.at(i)==s)
	{
		return i;
	}
	}
	return -1;
	}
	int predconv(int state)
	{
		int aux = state;
	if(state<500)
	{
		aux -= 101;
		
	}
	else
	{
		aux -= 450;
	}
	return aux;
	}
	std::vector<std::vector<int>> lul() 
	{
		//cargué esta cosa aquí porque pensaba que estaba causando un error, resultó no ser culpa de esto, pero no lo he cambiado xd
		std::vector<std::vector<int>> aux = { 
	{	1	,	131	,	101	,	129	,	2	,	130	}
,	{	149	,	101	,	123	,	1	}
,	{	-200	}
,	{	4	,	3	}
,	{	5	,	3	}
,	{	2	}
,	{	-200	}
,	{	14	,	123	}
,	{	20	,	123	}
,	{	23	,	123	}
,	{	24	,	123	}
,	{	25	,	123	}
,	{	27	,	123	}
,	{	29	,	123	}
,	{	6	,	123	}
,	{	146	,	123	}
,	{	-200	}
,	{	129	,	2	,	130	}
,	{	144	,	11	,	7	,	148	,	8	}
,	{	124	,	11	,	7	}
,	{	-200	}
,	{	133	}
,	{	134	}
,	{	135	}
,	{	136	}
,	{	137	}
,	{	121	,	102	,	10	,	122	}
,	{	124	,	102	,	10	}
,	{	-200	}
,	{	12	,	13	}
,	{	9	}
,	{	-200	}
,	{	101	}
,	{	15	,	109	,	30	}
,	{	16	,	17	}
,	{	18	}
,	{	-200	}
,	{	101	}
,	{	121	,	30	,	19	,	122	}
,	{	124	,	30	,	19	}
,	{	-200	}
,	{	21	,	22	}
,	{	138	,	119	,	30	,	120	,	2	}
,	{	139	,	2	}
,	{	-200	}
,	{	141	,	119	,	30	,	120	,	2	}
,	{	140	,	2	,	150	,	119	,	30	,	120	}
,	{	142	,	119	,	101	,	26	,	120	}
,	{	124	,	101	,	26	}
,	{	-200	}
,	{	143	,	119	,	30	,	28	,	120	}
,	{	124	,	30	,	28	}
,	{	-200	}
,	{	147	,	2	}
,	{	31	,	32	}
,	{	33	}
,	{	118	,	30	}
,	{	-200	}
,	{	34	,	35	}
,	{	36	}
,	{	117	,	33	}
,	{	-200	}
,	{	116	,	37	}
,	{	37	}
,	{	38	,	39	}
,	{	41	}
,	{	40	,	41	}
,	{	-200	}
,	{	110	}
,	{	115	}
,	{	111	}
,	{	112	}
,	{	113	}
,	{	114	}
,	{	43	,	42	}
,	{	105	,	41	}
,	{	106	,	41	}
,	{	-200	}
,	{	45	,	44	}
,	{	107	,	43	}
,	{	108	,	43	}
,	{	128	,	43	}
,	{	-200	}
,	{	15	}
,	{	102	}
,	{	103	}
,	{	104	}
,	{	125	}
,	{	126	}
,	{	119	,	30	,	120	}
			
		
		};
		
		return aux;
	}
	void syntaxerror(int err)
	{
		String^ s = "";
		switch (err)
		{
		case 102:
			s = "La gramática de este lenguaje no permite comentarios de línea";
			break;
		case 101:
			s = "Error sintáctico encontrado";
			break;
		case -100:
		case -1:
			s = "Se esperaba class o lib";
			break;
		case -2:
		case -3:
			s = "Se esperaba Id, ; , { , }, break, eval o el inicio de un estatuto";
			break;
		case -4:
			s = "Se esperaba Id, ; , }, break, eval o el inicio de un estatuto";
			break;
		case -5:
			s = "Se esperaba llave de apertura";
			break;
		case -6:
			s = "Se esperaba def";
			break;
		case -7:
			s = "Se esperaba una coma o un \"of\"";
			break;
		case -8:
			s = "Se esperaba un tipo de dato válido";
			break;
		case -9:
		case -18:
			s = "Se esperaba un corchete de apertura [";
			break;
		case -10:
		case -19:
			s = "Se esperaba una coma o un corchete de cierre ] ";
			break;
		case -11:
		case -12:
		case -14:
		case -15:
		case -16:
			s = "Se esperaba un identificador";
			break;
		case -13:
			s = "Se esperaba una coma, un corchete de apertura o un \"of\"";
				break;
		case -17:
			s = "Se esperaba un operador, paréntesis de cierre, corchetes o una coma";
			break;
		case -20:
		case -21:
			s = "Se esperaba un if";
			break;
		case -22:
			s = "Se esperaba un else o un punto y coma";
			break;
		case -23:
			s = "Se esperaba un while";
			break;
		case -24:
			s = "Se esperaba un do";
			break;
		case -25:
			s = "Se esperaba un input";
			break;
		case -26:
		case -28:
			s = "Se esperaba una coma o un paréntesis de cierre";
			break;
		case -27:
			s = "Se esperaba un output";
			break;
		case -29:
			s = "Se esperaba un loop";
			break;
		case -30:
		case -31:
		case -33:
		case -34:
		case -36:
			s = "Se esperaba una constante, un identificador, un ! o un paréntesis de apertura";
			break;
		case -32:
			s = "Se esperaba un ||, ), ] ; o una coma";
			break;
		case -35:
			s = "Se esperaba un &&,||, ), ] ; o una coma";
			break;
		case -37:
		case -38:
		case -41:
		case -43:
		case -45:
			s = "Se esperaba una constante, un identificador, o un paréntesis de apertura";
			break;
		case -39:
		
			s = "Se esperaba un operador relacional, &&,||, ), ] ; o una coma";
			break;
		case -40:
			s = "Se esperaba un operador relacional";
			break;
		case -42:
			s = "Se esperaba suma, resta, un operador relacional, &&,||, ), ] ; o una coma";
			break;
		case -44:
			s = "Se esperaba un operador, &&,||, ), ] ; o una coma";
			break;
	
		default:
			s = "No sé que se esperaba, pero no lo pusiste :)";
			break;
		}
		Windows::Forms::MessageBox::Show(s, "Error encontrado");
	}
	//Este método de 100 líneas se llevó un pedacito de mi alma cuando lo escribí
	void analizar(std::string inputString, std::string charset, std::string TFunc, std::string CodeList, std::string MessageList, bool synt)
	{
		std::vector<std::vector<int>> FT{};
		std::stack<int> st;
		std::vector<std::vector<int>> MP{};
		std::vector<std::vector<int>> TP{};
		FT = cargarFT(TFunc);
		//parte del sintáctico
		if(synt)
		{
			
			st.push(-50);
			st.push(0);

		
			MP = cargarFT(convertirMU(MPName));
			TP = lul();
		}
		// parte del sintáctico
		int state = 0;
		bool found;
		bool fileendfound = false;
		bool stempty = false;
		int symb;
		int i = 0;
		int rescode = 0;
		int topcode, debug;
		
		std::string inString;
		std::string outputerror = "";
		std::string outputtoken = "";
		std::string proceso = "";
		std::string buffer = "";
		std::vector<std::string> res = cargarVstring("Res.txt");
		inString = LeerArc(inputString);
		int xd=inString.size();
	
		
		while (i < inString.size())
		{
			
			symb = dataType(inString.at(i), charset);
			if (i==xd-1)
			{
				fileendfound = true;

			}
			if (symb == -1) {
				symb = FT[0].size()-1;
				//cout << i << " " << symb << " " << state << " " << inString.at(i);
			}
			if (state < FT.size())
			{
				if (state == 0)
				{
					buffer = "";
				}
				if (isLetter(inString.at(i))!=-1)
				{
					buffer += inString.at(i);
				}
				state = FT[state][symb];
			
				if (i == xd - 1 && state < FT.size())
				{			
					inString.append("\n");
					
				}			
			}
			if (state > FT.size())
			{
				found = false;
				//load code list
				std::vector<int> cList = cargarVint(CodeList);
				//load message list
				std::vector<std::string> mList = cargarVstring(MessageList);
				//Check reserved word list
				if (state == 100)
				{
					std::string debug;
					
					 rescode=0;
					rescode = resDet(res, buffer);
					if(rescode!=-1)
					{
						found = true;
						
					}
					if (!found)
					{
						state = 101;
					}

				}
				//Get index on the message list from the code list
				int ItemIndex = getItemIndex(state, cList);
				if (ItemIndex == -1)
				{
					ItemIndex = getItemIndex(600, cList);
				}
				
				if(state<500)
				{
					
					outputtoken.append(mList.at(ItemIndex));
					if(found)
					{
						outputtoken.append(" reconocida, codigo: " + std::to_string(rescode));
					}
				}
				else 
				{
					outputtoken.append("Error "+std::to_string(state));
				
					//outputtoken.append("\n");

					outputerror.append(std::to_string(state) + ": " + mList.at(ItemIndex) +" en: "+std::to_string(i) + "\n");
				}


				std::replace(outputerror.begin(), outputerror.end(), '_', ' ');
				std::replace(outputerror.begin(), outputerror.end(), '-', ' ');
				std::replace(outputtoken.begin(), outputtoken.end(), '_', ' ');
				std::replace(outputtoken.begin(), outputtoken.end(), '-', ' ');				
			}
			proceso.append(std::to_string(i) + "\t" + std::to_string(symb) + "\t" + std::to_string(state) + "\t" + inString.at(i));
					
			if (state > FT.size())
			{

				if (cursedState(state))
				{
					proceso = proceso.substr(0, proceso.size() - 1);
					proceso.append("<-cut");

					i--;
				}
				outputtoken.append("\n");
				// parte del sintáctico
				if(synt)
				{
					bool loop = true;
					if (state == 100) 
					{
						state += 31 + rescode;
					}

			
					while(loop && !stempty)
					{
						//valida para cuando la wea esté vacía pls
						if (!st.empty())
						{
							topcode = st.top();
							st.pop();
						}
						if (st.empty())
						{
							//No me vea feo profe, la gramática no incluye analizar varias clases en un solo archivo
							Windows::Forms::MessageBox::Show("Usted ha escrito después de un fin de un archivo válido, no se tomará en cuenta nada después de la llave de cierre", "Error parcial: Fin de archivo esperado");
							loop = false;
							stempty = true;
						}
						if (fileendfound)
						{
							if (topcode == -50)
							{
								Windows::Forms::MessageBox::Show("Archivo analizado exitosamente ", "Nice");
								loop = false;
							}
						}

				
						int prod;
						
					
						// si es una producción
						if(topcode <90 && topcode >=0)
						{
							
							
							prod = MP[topcode][predconv(state)];
							debug = predconv(state);
							//Windows::Forms::MessageBox::Show("test " + debug, "Error xd");
							if (prod < 0)
							{
								/*Windows::Forms::MessageBox::Show("Error en matriz predictiva", "Error xd");
								Windows::Forms::MessageBox::Show(""+prod+" "+topcode+" "+predconv(state), "Error xd");*/
								syntaxerror(prod);
								return;
							}
							//st.pop();
							//Windows::Forms::MessageBox::Show(prod + "", "xd");
							//Windows::Forms::MessageBox::Show(TP[prod].size() + "", "xd");
							for (int j = TP[prod].size() - 1; j >= 0; j--)
							{
								//Windows::Forms::MessageBox::Show(TP[prod][j]+"", "xd");
								st.push(TP[prod][j]);
							}
						}
						//si es un token
						if(topcode >= 100)
						{
							
							if (topcode==state)
							{
							
							loop = false;
							
							}
							if(topcode!=state)
							{
								Windows::Forms::MessageBox::Show("Error encontrando token", "Error xd");
								Windows::Forms::MessageBox::Show("" + prod + " " + topcode + " " + state, "Error xd");
								return;
							}
							
						}
						
						
			
						
						
				
						
					}
				}
				// parte del sintáctico
				state = 0;
				
			}
			proceso.append("\n");
			TBProceso->Text = convertirUM(proceso);
			TBError->Text = convertirUM(outputerror);
			TBToken->Text = convertirUM(outputtoken);
			
			i++;
		}
		//parte del sintáctico
		if (synt) 
		{
			
			while (!st.empty())
			{
				if(st.top() != -50) 
				{
					Windows::Forms::MessageBox::Show(st.top() + "", "No sé que pasó la vdd");
					return;
					
				}else
				{
					Windows::Forms::MessageBox::Show("Archivo analizado exitosamente ", "Análisis completo");
				}
				st.pop();
			}

		}
		//parte del sintáctico

	}
	//Limpia los cuadros de texto
	void limpiar(bool clearfile)
	{
		if (clearfile) 
		{
			TBFile->Text = "";
		}
		TBError->Text = "";		
		TBToken->Text = "";

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		limpiar(true);
		OpenFileDialog ofd;
		ofd.InitialDirectory="C:";
		ofd.Title="Abrir Archivo";
		ofd.Filter= "Lya Files (*.lya)|*.lya;";
	
		ofd.ShowDialog();
		if (ofd.FileName != "") 
		{
			Input = ofd.FileName;
			labelFile->Text = Input;
			TBFile->Text = convertirUM(LeerArc(convertirMU(Input)));
			return;
		}
		System::Windows::Forms::MessageBox::Show("Escoja archivo o  lo veo feo");
		TBFile->Text = convertirUM(LeerArc(convertirMU(Input)));
		//Load Method
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
	std::string storedstr = convertirMU(TBFile->Text);
	std::ofstream out(convertirMU(Input));
	out << storedstr;
	out.close();
	System::Windows::Forms::MessageBox::Show("Archivo Guardado","Bottom Text");
	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	limpiar(false);
	std::string inputString = convertirMU(Input);
	std::string charset = convertirMU(CharsetName);
	std::string TFunc = convertirMU(FTName);
	std::string CodeListFileName = convertirMU(CLName);
	std::string MessageListFileName = convertirMU(MLName);
	analizar(inputString,charset,TFunc,CodeListFileName,MessageListFileName,false);

	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	//Cierra el archivo actual y abre el default
	//owo
	limpiar(true);
	Input = "Entrada.lya";
	labelFile->Text = Input;
	//cargar entrada.txt a la textbox
	TBFile->Text = convertirUM(LeerArc(convertirMU(Input)));
	}
	  
	   
	  


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	TBFile->Text = convertirUM(LeerArc(convertirMU(Input)));
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	limpiar(false);
	std::string inputString = convertirMU(Input);
	std::string charset = convertirMU(CharsetName);
	std::string TFunc = convertirMU(FTName);
	std::string CodeListFileName = convertirMU(CLName);
	std::string MessageListFileName = convertirMU(MLName);
	analizar(inputString, charset, TFunc, CodeListFileName, MessageListFileName, true);

	}
};
}
