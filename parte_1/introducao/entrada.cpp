
#include <iostream>

int main()
{
    float preco;
    int quantidade;

    //Sem usar o namespace std
    std::cout << "Entre com o preço\n";
    std::cin >> preco; //Uma variável
    std::cout << "Preço = " << preco << std::endl;

    std::cout << "Entre com o preço e a quantidade na mesma linha e separada por espaço\n";
    std::cin >> preco >> quantidade; //Duas variáveis
    std::cout << "Preço = " << preco << " Quantidade = " << quantidade;
}
