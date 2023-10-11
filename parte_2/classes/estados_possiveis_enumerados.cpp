#include<iostream>
using std::cin, std::cout, std::endl;

class Particula {
 public:
 enum Carga{Proton = 1, Eletron = -1, Neutron = 0};

 Particula(Carga carga);
 Carga obterCarga() const;

 private:
 Carga _carga;
};

Particula::Particula(Carga carga)
{
    _carga = carga;
}

Particula::Carga Particula::obterCarga() const { return _carga; }

int main()
{
  Particula proton{ Particula::Eletron };
}