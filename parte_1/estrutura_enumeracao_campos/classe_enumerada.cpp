#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    enum class ESTADO{OK, NOK};
    enum class OPERACAO {OK, NOK};

    ESTADO emFuncionamento = ESTADO::OK; //Obrigatório o acesso via operador ::
    OPERACAO terminado = OPERACAO::OK;
}
