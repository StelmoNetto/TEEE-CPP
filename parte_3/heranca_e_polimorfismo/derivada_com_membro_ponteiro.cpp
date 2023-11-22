#include "derivada_com_membro_ponteiro.h"

#include <iostream>
#include <span>
using std::cout, std::endl;

Derivada::Derivada() : novoMembroAlocado{ nullptr } { cout << "Construtor padrao da classe derivada\n"; }

Derivada::Derivada(double valorInicial, int valorDoMembroBase) : Base{ valorDoMembroBase }
{
 cout << "Construtor da classe derivada\n";

 novoMembroAlocado = new double[valorDoMembroBase] {valorInicial};
}

Derivada::Derivada(const Derivada& obj) : Base{ obj } //Chamando o construtor de cópia
{
 cout << "Construtor de copia\n";

 auto n = obterMembro();

 novoMembroAlocado = new double[n];
 std::copy(obj.novoMembroAlocado, obj.novoMembroAlocado + n, novoMembroAlocado);
}

Derivada::Derivada(Derivada&& obj) noexcept : Derivada{}
{
 cout << "Construtor de movimento\n";

 Base::operator=(std::move(obj)); //Chamando a atribuição de movimento
 swap(*this, obj);
}

Derivada::~Derivada() { delete[] novoMembroAlocado; }

Derivada& Derivada::operator =(const Derivada& objDir)
{
 cout << "Atribuicao por copia\n";

 if (this != &objDir)
 {
  Base::operator=(objDir); //Chamando a atribuição de cópia

  Derivada temp{ objDir };
  swap(*this, temp);
 }
 return *this;
}

Derivada& Derivada::operator =(Derivada&& objDir) noexcept
{
 if (this != &objDir)
 {
  cout << "Atribuicao por movimento\n";

  Base::operator=(std::move(objDir)); //Chamando a atribuição de movimento

  Derivada temp{ std::move(objDir) };
  swap(*this, temp);
 }
 return *this;
}

double* Derivada::obterNovoMembro() const { return novoMembroAlocado; }

double Derivada::processamento() const
{
 double somatorio{ 0.0 };

 size_t n = static_cast<size_t>(obterMembro());
 std::span vetor{ novoMembroAlocado, n };

 for (auto e : vetor)
  somatorio += e;

 return somatorio * obterMembro();
}

void Derivada::swap(Derivada& a, Derivada& b) noexcept
{
 std::swap(a.novoMembroAlocado, b.novoMembroAlocado);
}
