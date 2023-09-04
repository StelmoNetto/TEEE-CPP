#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto smartPointer1 = std::make_shared<int>(5);

    {
        std::shared_ptr<int> smartPointer2{ smartPointer1 }; //Apontam para mesma região

        cout << "Valor = " << *smartPointer2 << endl; //5
    }//O inteiro não é excluido da memória ao acabar esse escopo

    cout << "Valor = " << *smartPointer1 << endl; //5
}
