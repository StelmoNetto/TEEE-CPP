#include "VendaComDesconto.h"

#include <iostream>
using std::cout, std::endl;

int main()
{
 auto valorDaVenda{ 100.0 };
 Venda* venda = new Venda{ valorDaVenda };

 auto percentualDeDesconto{ 10.0 };
 Venda* vendaComDesconto{ new VendaComDesconto{venda->obterValorDaVenda(),percentualDeDesconto} };

 cout << "Economia de " << venda->economia(*vendaComDesconto) << " Reais\n";

 delete venda;
 delete vendaComDesconto;
}
