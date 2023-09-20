#include<iostream>
using std::cin, std::cout, std::endl;

const int LEITOR_DE_CODIGO_DE_BARRA = 2;

[[noreturn]] void forcarSaidaDoPrograma() { std::exit(1); }

bool dispositivoEstaDisponivel()
{
 bool disponivel{ false };
 return disponivel;
}

bool recursoEstaLicenciado(int idDoRecurso)
{
  auto dispositivoNaoEstaDisponivel = !dispositivoEstaDisponivel();

  if (dispositivoNaoEstaDisponivel)
    forcarSaidaDoPrograma(); //retorno antecipado

  bool estaLicenciado{ idDoRecurso == LEITOR_DE_CODIGO_DE_BARRA };
  return estaLicenciado;
}

int main()
{
    recursoEstaLicenciado(LEITOR_DE_CODIGO_DE_BARRA);
}
