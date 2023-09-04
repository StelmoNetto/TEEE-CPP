#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto smartPointer1 = std::make_shared<int>(5);

    //auto ponteiroBruto = smartPointer1.get(); //Mantém a área alocada

    {
        std::shared_ptr<int> smartPointer2{ smartPointer1 }; //Apontam para mesma região

        cout << "*smartPointer2 = " << *smartPointer2 << endl; //5
    }//O inteiro não é excluido da memória ao acabar esse escopo

    cout << "*smartPointer1 = " << *smartPointer1 << endl; //5

    smartPointer1.reset();

    auto ponteiroBruto = smartPointer1.get(); //Não existe a área alocada

    cout << "*ponteiroBruto = " << *ponteiroBruto << endl; //5
}
