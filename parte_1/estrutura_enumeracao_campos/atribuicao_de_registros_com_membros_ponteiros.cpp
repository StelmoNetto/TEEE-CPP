#include<iostream>
using std::cin, std::cout, std::endl;

struct Registro
{
    float* ptr{ nullptr };
    int membro{ 1 };
};

int main()
{
    Registro estrutura1{ new float{2} }, estrutura2;

    estrutura2 = estrutura1; //Ocorre: estrutura1.ptr = estrutura2.ptr; membros tem o mesmo endereço

    cout << "estrutura2.ptr = " << estrutura2.ptr << " == estrutura1.ptr = " << estrutura1.ptr << endl;
}
