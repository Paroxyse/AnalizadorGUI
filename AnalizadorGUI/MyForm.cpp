#include "MyForm.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>



using namespace System;
using namespace System::Windows::Forms;

std::string mayus;
std::string minun;
std::string input;
std::string output;
std::vector<std::vector<int>> FT{};
int status = 0;







[STAThread]
//Si aparece un error es Intellisense siendo un payaso, el c�digo corre de forma normal
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AnalizadorGUI::MyForm form;
	Application::Run(% form);
}



//using namespace std;
//string LeerArc(string filetl) {
//    ifstream file;
//    file.open(filetl, ios::in);
//
//    if (file.fail())
//    {
//        cout << "El archivo " << filetl << " no existe" << endl;
//        return "";
//    }
//    string str;
//    char c;
//
//    while (file.get(c))
//    {
//        str.push_back(c);
//    }
//    file.close();
//
//    return str;
//}
//void loadSets() {
//    //C�digo que podr�a reemplazar por algo m�s flexible, pero dejar� ese cambio para el analizador completo
//    mayus = LeerArc("Mayus.txt");
//    minun = LeerArc("Minus.txt");
//    input = LeerArc("Entrada.txt");
//}
//int isLetter(char c)
//{
//    for (int i = 0; i < mayus.size(); i++)
//    {
//        if (c == mayus.at(i))
//        {
//            return 1;
//        }
//        if (c == minun.at(i))
//        {
//            return 2;
//        }
//    }
//    return 0;
//}
//int isSomethingelse(char c, string str) {
//    string s = LeerArc(str);
//    for (int i = 0; i < s.size(); i++) {
//        if (c == s.at(i))
//        {
//            return i + 5;
//        }
//    }
//    return -1;
//}
//int dataType(char c, string s)
//{
//    if (c >= '0' && c <= '9')
//    {
//        return 0;
//    }
//    int aux = isLetter(c);
//    if (aux >= 1 && aux <= 2)
//    {
//        //cout << aux;
//        return aux;
//    }
//    // code some return shenanigans to fix the e thing
//    // Arreglar lo de la e en versi�n completa
//    if (c == '\n')
//    {
//        return 3;
//    }
//    if (c == '\t' || c == ' ')
//    {
//        return 4;
//    }
//    aux = isSomethingelse(c, s);
//    if (aux != 0)
//    {
//        return aux;
//    }
//    return -1;
//}
//void cargarFT(string s)
//{
//    //Gracias a la maravillosa persona de SO que hizo esto posible
//    //Esta funcion llena un vector de enteros bidimensional con la informaci�n contenida en un archivo
//
//    std::ifstream sourceFileStream{ s };
//
//    if (sourceFileStream) {
//        std::string line{};
//        while (std::getline(sourceFileStream, line))
//        {
//            FT.push_back(std::vector<int>{});
//            int c{};
//            for (std::istringstream iss(line); iss >> c; FT.back().push_back(c))
//                ;
//        }
//
//        for (const auto& row : FT)
//        {
//            for (const auto& col : row) std::cout << col << ' ';
//            std::cout << '\n';
//        }
//    }
//    else std::cerr << "\nError: No se encontr� el archivo\n\n";
//}
//vector<int> cargarVint(string s)
//{
//    vector<int> aux{};
//    ifstream input(s);
//    if (input)
//    {
//        int valor;
//        while (input >> valor)
//        {
//            aux.push_back(valor);
//        }
//        return aux;
//    }
//    cout << "Archivo conteniendo una lista de enteros no encontrado";
//    return aux;
//}
//vector<string> cargarVstring(string s)
//{
//    vector<string> aux{};
//    ifstream input;
//    input.open(s);
//    if (input)
//    {
//        string cadena;
//        while (input >> cadena)
//        {
//            aux.push_back(cadena);
//        }
//    }
//    else
//    {
//        cout << "Archivo conteniendo una lista de strings no encontrado";
//    }
//    return aux;
//}
//int getItemIndex(int code, vector<int> v)
//{
//    if (v.size() == 0)
//    {
//        return -1;
//    }
//    for (int i = 0; i < v.size(); i++)
//    {
//        if (code == v[i])
//        {
//            return i;
//        }
//    }
//
//}
//void analizar(string inputString, string charset, string TFunc, string CodeList, string MessageList, bool InputMode)
//{
//
//    cargarFT(TFunc);
//    int state = 0;
//    int symb;
//    int i = 0;
//    string inString;
//    output = "";
//    inString = LeerArc(inputString);
//    while (i < inString.size())
//    {
//        symb = dataType(inString.at(i), charset);
//        cout << "\n";
//        if (symb == -1) {
//            state = 500;
//            cout << i << " " << symb << " " << state << " " << inString.at(i);
//        }
//        if (state < TFunc.size())
//        {
//
//
//            state = FT[state][symb];
//
//
//            cout << i << " " << symb << " " << state << " " << inString.at(i);
//
//            //Si este es el �ltimo caracter o si el siguiente estado desde el actual explota, corta el token aqu� y salta a un estado
//             //de final1
//            if (i == inString.size() - 1 && state < FT.size())
//            {
//                state = FT[state][FT[state].size() - 1];
//            }
//            //else if(FT[state][dataType(inString.at(i+1), charset)]>TFunc.size())
//            //{
//            //    
//            //    //state = FT[state][FT[state].size() - 1];
//            //}
//
//        }
//
//        if (state > TFunc.size())
//        {
//            //load code list
//            vector<int> cList = cargarVint(CodeList);
//            //load message list
//            vector<string> mList = cargarVstring(MessageList);
//            //Get index on the message list from the code list
//            int ItemIndex = getItemIndex(state, cList);
//            if (ItemIndex == -1)
//            {
//                ItemIndex = getItemIndex(600, cList);
//            }
//            output.append(mList.at(ItemIndex));
//            output.append("\n");
//
//            state = 0;
//        }
//
//
//
//
//
//        i++;
//    }
//    cout << "\n" << output;
//
//}
