#pragma once

class Base //Classe abstrata, pois possui métodos virtuais puros
{
public:
 Base(int valorDoMembro) : membro{ valorDoMembro } {}

 virtual ~Base() = default;

 double processamento() const { return etapa1() + etapa2(); };

protected:
 virtual double etapa1() const = 0; //Método virtual puro

 virtual double etapa2() const = 0; //Método virtual puro

 int membro{};
};
