#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl, std::make_unique, std::unique_ptr;

int main()
{
    //Escopo
    {
        auto ponteiro = make_unique<int>();

        *ponteiro = 3;

        cout << "Valor do inteiro = " << *ponteiro << endl;
    }//O inteiro é deletado ao sair desse escopo

    //Alternativa insegura
    {
        unique_ptr<int> ponteiro{ new int };

        *ponteiro = 2;

        cout << "Valor do inteiro = " << *ponteiro << endl;
    }
}
