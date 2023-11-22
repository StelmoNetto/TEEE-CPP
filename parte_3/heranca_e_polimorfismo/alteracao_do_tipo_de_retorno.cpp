#include<memory>
#include<iostream>
using std::cout, std::endl;

class BebidaQuente
{
public:
 virtual ~BebidaQuente() = default;

 virtual void preparo(float volume) const = 0;

 virtual void tipo() = 0;
};

class Cha : public BebidaQuente
{
public:
 virtual ~Cha() = default;

 virtual void preparo(float volume) const override
 {
  cout << "Coloque " << volume;
  cout << " ml de agua quente sobre o saco de cha\n";
 }

 virtual void tipo() { cout << "saquinho.\n"; }
};

class FabricaDeBebidaQuente
{
public:
 virtual ~FabricaDeBebidaQuente() = default;

 virtual BebidaQuente* faca(float volume) const = 0;
};

class FabricaDeCafe : public FabricaDeBebidaQuente
{
public:
 virtual Cha* faca(float volume) const override //Substituição do retorno pelo tipo derivado – boa prática, se não muda nada
 {
   //Garante a desalocao em caso de falha do preparo
   auto bebida = std::make_unique<Cha>();

   bebida->preparo(volume);

   return bebida.release();
 } //Fim de faca
}; //Fim FabricaDeCafe

int main()
{
  FabricaDeCafe fabrica;
  std::unique_ptr<BebidaQuente> cafe{ fabrica.faca(200) };
  cafe->tipo();
}
