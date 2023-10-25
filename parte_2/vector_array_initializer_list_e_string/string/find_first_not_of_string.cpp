#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str("procurando por caracteres nao-alfabetico...");
    size_t encontrado = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
    if (encontrado != string::npos)
    {
        cout << "O 1º caractere nao-alfabetico e: " << str[encontrado];
        cout << " na posicao " << encontrado << '\n';
    }
}
