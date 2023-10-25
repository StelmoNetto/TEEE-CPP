#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str{"Existem duas agulhas neste palheiro com agulhas."};
    string str2{"agulha"};

    size_t encontrado = str.find(str2);
    if (encontrado != string::npos)
        cout << "1ª 'agulha' encontrado em: " << encontrado << '\n';

    encontrado = str.find("agulhas sao pequenas", encontrado + 1, 7);
    if (encontrado != string::npos)
        cout << "2ª 'agulha' encontrado em: " << encontrado << '\n';

    encontrado = str.find("palheiro");
    if (encontrado != string::npos)
        cout << "'palheiro' tambem encontrado em: " << encontrado << '\n';

    encontrado = str.find('.');
    if (encontrado != string::npos)
        cout << "Ponto encontrado em: " << encontrado << '\n';
}
