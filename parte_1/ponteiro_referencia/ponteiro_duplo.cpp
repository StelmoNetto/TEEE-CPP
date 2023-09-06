#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int** handle { nullptr }; //Na pilha

    handle = new int*; //Na heap. Aponta para um ponteiro inteiro

    *handle = new int; //Na heap. Acessa o conteúdo (ponteiro) para qual aponta

    cout << **handle << endl;
}
