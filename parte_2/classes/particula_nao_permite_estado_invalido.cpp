#include<iostream>
#include<cstdlib>
using std::cin, std::cout, std::endl;

class Particula {
 public:
 const static Particula Proton, Eletron, Neutron;

 int obterCarga() const;

 private:
 Particula(int carga); //Não permite mais seu uso
 void abortaSeNaoParticulaFundamental(int carga) const; //Pode ser não membro também – inclusive estar em outro arquivo. Fere OCP

 int _carga;
};

const Particula Particula::Proton{ 1 };
const Particula Particula::Eletron{ -1 };
const Particula Particula::Neutron{ 0 };

Particula::Particula(int carga)
{
    abortaSeNaoParticulaFundamental(carga); //Encapsulado, pois pode mudar – encontrarem uma nova!
    _carga = carga;
}


int Particula::obterCarga() const { return _carga; }

void Particula::abortaSeNaoParticulaFundamental(int carga) const
{
    bool eParticulaFundamental{ carga >= -1 && carga <= 1};
    if(!eParticulaFundamental)
    {
        cout << "Nao e uma particula fundamental" << endl;
        exit(EXIT_FAILURE);
    }
}

int main()
{
  Particula particulaNaoFundamental{ -2 };
}
