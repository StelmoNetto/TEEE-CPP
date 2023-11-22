#pragma once

#include "Venda.h"
class VendaComDesconto : public Venda
{
public:
 VendaComDesconto(double valorTotal, double descontoPercentual);

 virtual double obterDesconto() const { return desconto; }

 virtual double fatura() const override;

private:
 VendaComDesconto();

 double desconto;
};
