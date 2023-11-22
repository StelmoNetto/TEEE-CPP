#include "VendaComDesconto.h"

VendaComDesconto::VendaComDesconto(double valorTotal, double descontoPercentual) : Venda{ valorTotal }, desconto{ descontoPercentual } {}

double VendaComDesconto::fatura() const
{
 return (1. - obterDesconto() / 100) * Venda::fatura(); //Reutilizando a versão de fatura da classe pai
}
