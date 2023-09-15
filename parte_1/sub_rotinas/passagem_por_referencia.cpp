#include<iostream>
using std::cin, std::cout, std::endl;

void exibir(const float& parametro)
{
    cout << "Parâmetro = " << parametro << endl;
}

int main()
{
  double peso = 3.2;

  double& apelidoParaPeso = peso; //É um l-value ou referência para peso

  cout << "Peso = " << apelidoParaPeso << endl;

  exibir(peso);
}
