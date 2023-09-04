#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto ponteiro = std::make_unique<int>(2); //inteiro inicializado com 2
    cout << "Valor = " << *ponteiro << endl; //2

    int* ponteiroBrutoDoInt = ponteiro.release();
    cout << "Valor = " << *ponteiroBrutoDoInt << endl; //2
}
