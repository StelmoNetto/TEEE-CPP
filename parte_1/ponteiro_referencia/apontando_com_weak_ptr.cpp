#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto sharedPtr { std::make_shared<int>() };
    std::weak_ptr<int> weakSimple { sharedPtr };

    cout << "Contagem de ponteiros = " << sharedPtr.use_count() << endl; // saída é 1.

    auto novoSharedPtr { weakSimple.lock() };

    cout << "Contagem de ponteiros = " << sharedPtr.use_count() << endl; // saída é 2.

    novoSharedPtr.reset();
    sharedPtr.reset();

    //std::weak_ptr<int> novoWeak{ sharedPtr }; //Sucesso

    //std::shared_ptr<int> novoShared{ weakSimple }; //Erro: recurso apontado por weakSimple não existe mais
}
