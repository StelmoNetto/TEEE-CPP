#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str{"Existem duas agulhas neste palheiro com agulhas."};
    string chave{"agulha"};

    size_t encontrado = str.rfind(chave);
    if (encontrado != string::npos)
        cout << "'agulha' encontrado em: " << encontrado << '\n';
}
