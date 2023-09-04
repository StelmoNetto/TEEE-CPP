#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl, std::make_unique, std::unique_ptr;

int main()
{
    auto ponteiro = make_unique<int>(2); //inteiro inicializado com 2
    cout << "Valor = " << *ponteiro << endl; //2

    int* ponteiroBrutoDoInt = ponteiro.get();
    cout << "Valor = " << *ponteiroBrutoDoInt << endl; //2
}
