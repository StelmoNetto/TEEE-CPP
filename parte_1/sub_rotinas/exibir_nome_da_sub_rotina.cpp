#include<iostream>
#include<cstdlib>
using std::cin,std::cout, std::endl;

void escrevaNomeDoProcedimento()
{
  cout << "Meu nome é: " << __func__ << endl; //__func__ contém o nome
}

int main()
{
    escrevaNomeDoProcedimento(); //Chamada do procedimento
}
