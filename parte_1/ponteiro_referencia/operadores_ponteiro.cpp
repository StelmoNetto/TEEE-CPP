#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    auto contador = 5;

    int* enderecoDeContador{ &contador }; //O endereço de contador é atribuído ao ponteiro enderecoDeContador, que aponta para a variável contador.
    cout << "Endereço de 'contador' = " << enderecoDeContador << endl;

    int valorDeContador{ *enderecoDeContador }; //O conteúdo da variável apontada (contador) é atribuído a variável valorDeContador.
    cout << "valor de 'contador' = " << valorDeContador << endl;
}
