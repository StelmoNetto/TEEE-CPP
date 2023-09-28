#include<iostream>
using std::cin, std::cout, std::endl;

struct Registro
{
    float* ptr{ nullptr };
    int membro{ 1 };
};

void deletaIncorretamente(Registro copia)
{
    delete copia.ptr;
}

int main()
{
    Registro estrutura{ new float{2} };

    deletaIncorretamente(estrutura);

    delete estrutura.ptr; //Erro: já deletado
}
