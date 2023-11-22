#include "Venda.h"

#include <iostream>
#include <cstdlib>

Venda::Venda(double valorTotal)
{
 if (valorTotal < 0)
 {
  std::cout << "Error: valor nao pode ser negativo\n";
  std::exit(1);
 }
 valorDaVenda = valorTotal;
}

double Venda::fatura()const
{
 return valorDaVenda;
}

double Venda::economia(const Venda& outra) const
{
 return fatura() - outra.fatura();
}
