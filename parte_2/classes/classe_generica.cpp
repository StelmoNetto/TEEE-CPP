#include<iostream>
using std::cin, std::cout, std::endl;

class NomeDaClasse //Definição de uma entidade do mundo real
{
    public: //Visibilidade (acesso) da função membro abaixo.
    void metodo(); //Operação: opera sobre os dado(s) do objeto chamador

    private: //Visibilidade (acesso) do dado membro abaixo. Ocultação
    int variavelMembro; //Dado(s)
};

void NomeDaClasse::metodo() //Definição do corpo do método
{
   //Instruções que operam sobre os dados e resolvem um problema
   cout << "opera sobre o(s) membro(s) deste objeto para resolver um problema\n" << variavelMembro;
}

int main()
{
   NomeDaClasse objetoInstanciado; //Instanciação do objeto

   objetoInstanciado.metodo(); //Objeto objetoInstanciado chamando o método metodo()
}
