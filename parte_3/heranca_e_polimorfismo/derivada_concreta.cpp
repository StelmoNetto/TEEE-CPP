#include "derivada_concreta.h"

 Derivada::Derivada(double valorInicial, int valorDoMembroBase) : Base{ valorDoMembroBase }, novoMembro{ valorInicial } {}

 double Derivada::etapa1() const
 {
    return 1;
 }

 double Derivada::etapa2() const
 {
    return 2;
 }
