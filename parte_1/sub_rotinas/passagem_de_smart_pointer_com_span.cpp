#include<iostream>
#include<span>
#include<memory>
using std::cin, std::cout, std::endl;

int main()
{
  size_t n{ 3 };
  auto vetor = std::make_unique<int[]>(n);

  std::span vetorSpan{ vetor.get(), n }; //Acesso ao ponteiro via get()

  auto leituraDoVetor = [](std::span<int> vetor)
  {
    cout << "Forneça os " << vetor.size() <<" valores \n";
    for(auto& e : vetor)
      cin >> e;
  };

  leituraDoVetor(vetorSpan);
}
