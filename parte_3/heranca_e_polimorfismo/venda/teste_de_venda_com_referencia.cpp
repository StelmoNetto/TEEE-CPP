
#include "VendaComDesconto.h"

#include <iostream>
using std::cout, std::endl;

int main()
{
  auto valorDaVenda{ 100.0 };
  Venda venda{ valorDaVenda };
  cout << "Fatura = " << venda.fatura() << " Reais\n";
  cout << "Economia = " << venda.economia(venda) << " Reais\n";

  auto percentualDeDesconto{ 10.0 };
  VendaComDesconto segundaVenda{ venda.obterValorDaVenda(),percentualDeDesconto };
  Venda& vendaComDesconto = segundaVenda;
  cout << "Economia = " << venda.economia(vendaComDesconto) << " Reais\n";

  Venda&& segVendaComDesc = VendaComDesconto{ venda.obterValorDaVenda(),percentualDeDesconto };
  cout << "Economia = " << venda.economia(segVendaComDesc) << " Reais\n";
}
