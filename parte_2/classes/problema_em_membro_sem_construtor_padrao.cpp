#include<iostream>
using std::cin, std::cout, std::endl;

class Particula
{
public:
  Particula(int carga) :_carga{ carga }{}
  int obterCarga(){ return _carga; }
private:
  int _carga;
};

class Atomo // versão incorreta
{
public:
  Particula obterProton() { return proton; }
private:
  Particula proton; /*Construtor padrão indefinido. Não é um problema quando inicializado com um valor inicial: Particula proton{ 1 };*/
};



int main()
{
  Atomo helio, helio2{};
  cout << helio.obterProton().obterCarga() << endl;
  cout << helio2.obterProton().obterCarga() << endl;
}
