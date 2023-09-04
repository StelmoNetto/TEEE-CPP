#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto sharedPtr { std::make_shared<int>() };
    std::weak_ptr<int> weakSimple { sharedPtr };

    cout << "Contagem de ponteiros = " << sharedPtr.use_count() << endl; // saída é 1.

    auto novoSharedPtr { weakSimple.lock() };
}
