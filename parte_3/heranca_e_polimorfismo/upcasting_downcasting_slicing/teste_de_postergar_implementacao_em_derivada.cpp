#include "postergar_implementacao_em_derivada.h"

#include <iostream>
#include <memory>
using std::cout;

int main()
{
  int membroDeBase = 2;
  double membroDeDerivada = 2.3;

  std::unique_ptr<Base> obj = std::make_unique<Derivada>(membroDeDerivada,membroDeBase); //É instanciado com alocação dinâmica da classe Derivada, mas é atribuído a um ponteiro do tipo base, que é utilizado para fazer chamadas a interface

  cout << "etapa1() + etapa2() = " << membroDeBase << "² + " << membroDeBase  << " * " << membroDeDerivada << " = " << obj->processamento()<<"\n"; //O método da classe base faz uso das implementações etapa1 e etapa2 de Derivada
}
