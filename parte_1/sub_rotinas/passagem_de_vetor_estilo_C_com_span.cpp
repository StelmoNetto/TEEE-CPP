#include<iostream>
#include<span>
using std::cin, std::cout, std::endl;

int main()
{
  int dados[]{ 1,2,4 };

  [](std::span<int> vetor) //Função lambda - aprenderemos mais tarde
  {
    for(auto e : vetor)
      cout << e << " ";
    cout << endl;
  }(dados);
}
