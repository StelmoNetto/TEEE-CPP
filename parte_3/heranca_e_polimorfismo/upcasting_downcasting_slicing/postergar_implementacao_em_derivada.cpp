#include "postergar_implementacao_em_derivada.h"

Derivada::Derivada(double valor, int valDeMembro) : Base{ valDeMembro }, novoMembro{ valor } {}

double Derivada::etapa1() const { return membro * membro; }

double Derivada::etapa2() const { return membro * novoMembro; }
