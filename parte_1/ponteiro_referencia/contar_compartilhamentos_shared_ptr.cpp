#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{

    auto smartPointer1 = std::make_shared<int>(5);

    cout << "Contagem de ponteiros(smartPointer1) = " << smartPointer1.use_count() << endl; //1

    {
        std::shared_ptr<int> smartPointer2{ smartPointer1 }; //Apontam para mesma região

        cout << "Contagem de ponteiros(smartPointer2) = " << smartPointer2.use_count() << endl; //2
    }//O inteiro não é excluido da memória ao acabar esse escopo

    cout << "Contagem de ponteiros(smartPointer1) = " << smartPointer1.use_count() << endl; //1

    smartPointer1.reset();

    cout << "Contagem de ponteiros(smartPointer1) = " << smartPointer1.use_count() << endl; //0
}
