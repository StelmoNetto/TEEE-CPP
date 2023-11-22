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

 virtual  std::unique_ptr<BebidaQuente>  faca(float volume) const = 0;
};

class FabricaDeCafe : public FabricaDeBebidaQuente
{
public:
 virtual std::unique_ptr<Cha> faca(float volume) const override //Não poderia ser um unique_ptr<Cha> pois o tipo não é covariante a definição na base. São tipos diferentes
 {
   //Garante a desalocao em caso de falha do preparo
   auto bebida = std::make_unique<Cha>();

   bebida->preparo(volume);

   return bebida;
 } //Fim de faca
}; //Fim FabricaDeCafe

int main()
{
  FabricaDeCafe fabrica;

  std::unique_ptr<BebidaQuente> cafe{ fabrica.faca(200) };

  cafe->tipo();
}
