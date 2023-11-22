#pragma once

#include "base_com_membro_protegido.h"

using namespace Heranca;

class Derivada : public Base
{
 public:
 Derivada();

 Derivada(double valorInicial, int valorDoMembroBase);

 Derivada(const Derivada& obj);

 Derivada(Derivada&& obj) noexcept;

 virtual ~Derivada(); //Destrutor da classe derivada é chamado primeiro e implicitamente depois é  chamado o da classe base, se virtual.

 Derivada& operator =(const Derivada& objDir);

 Derivada& operator =(Derivada&& objDir) noexcept;

 virtual double* obterNovoMembro() const;

 virtual double processamento() const override;

 private:
 void swap(Derivada& a, Derivada& b) noexcept;

 double* novoMembroAlocado; //Membro ponteiro requer uso da Regra Dos Cinco: destrutor, construtor de cópia e movimento, operador de atribuição de cópia ou movimento
};
