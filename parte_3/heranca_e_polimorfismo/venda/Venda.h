#pragma once

class Venda
{
public:
 Venda() = delete;

 Venda(double valorTotal);

 virtual ~Venda() = default;

 double obterValorDaVenda() const { return valorDaVenda; }

 virtual double fatura()const;

 double economia(const Venda& outra) const;

private:
 double valorDaVenda;
};
