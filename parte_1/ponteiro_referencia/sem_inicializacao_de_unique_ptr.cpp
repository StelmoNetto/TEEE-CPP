#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl, std::make_unique, std::make_unique_for_overwrite, std::unique_ptr;

int main()
{
    auto var1 = make_unique<int>();
    cout << "Valor = " << *var1 << endl; //0

    auto var2 = make_unique_for_overwrite<int>();
    cout << "Valor = " << *var2 << endl; //-842150451

    auto numeroDeElementos{ 2U };
    auto vetor{ make_unique_for_overwrite<int[]>(numeroDeElementos) };
    cout << "vetor[0] = " << vetor[0] << endl; //-842150451
}
