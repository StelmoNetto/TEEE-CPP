#include<iostream>
#include<functional>
using std::cin, std::cout, std::endl;

const size_t NUMERO_DE_EXEMPLOS = 3, NUMERO_DE_VARIAVEIS_INDEPENDENTES = 1;
using Matriz = double[NUMERO_DE_EXEMPLOS][NUMERO_DE_VARIAVEIS_INDEPENDENTES];
using Vetor = double[NUMERO_DE_EXEMPLOS];

auto produtoEscalar = [](const Vetor& vetor1, const Vetor& vetor2) { return 1.0; }; //Implemente

int main()
{
  Matriz xs{1.3,1.5,2.4};
  Vetor ys{ 0.2,0.21,0.5 };
  auto regressaoLinear = [](const Matriz& conjuntoDeDados,  const Vetor& variavelDependente) -> std::function<double(const Vetor&)>
  {
    Vetor pesos{}; //Um algoritmo determina os pesos para regressão linear
    return [pesos](const Vetor& exemplo) -> double
    {
      Vetor vetorExemplo{}; //Ajustar para o tamanho de pesos(β): x=vetorExemplo=[1, exemplo]
      return produtoEscalar(pesos, vetorExemplo);
    };
  };

  auto regressor = regressaoLinear(xs, ys);

  Vetor x{ 1.4 };
  double y{ regressor(x) };

  cout << "y = f(" << x[0] << ") = " << y << endl;
}
