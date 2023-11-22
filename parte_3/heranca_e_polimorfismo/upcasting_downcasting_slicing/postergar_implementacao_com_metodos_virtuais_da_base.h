#pragma once

class Base
{
public:
 Base(int valorDoMembro) : membro{ valorDoMembro }{}

 virtual ~Base() = default; //Sempre virtual

 virtual double processamento() const { return etapa1() + etapa2(); }; //A tarefa tem que ser resolvida em etapas claras, mas essas etapas podem ser resolvidas de N formas (algorítmicas) - virtuais

protected:
 virtual double etapa1() const { return 1.0; } //Definição dos métodos virtuais. Um ou todos esses métodos são sobrescritos nas classes derivadas para definição das novas implementações para as etapas.

 virtual double etapa2() const { return 1.0; }

 int membro{};
};
