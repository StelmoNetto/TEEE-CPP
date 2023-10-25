#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    char armazenamento[20]; //Ou char armazenamento[20]{};
    string str{ "Testando cadeia..." };

    size_t comprimento = str.copy(armazenamento, 6, 9);

    armazenamento[comprimento] = '\0';

    cout << "A string: " << armazenamento << " foi copiada de: "<< str.c_str()<<'\n';

    cout << "Comparando-as: " << (str == armazenamento) << "\n";
}
