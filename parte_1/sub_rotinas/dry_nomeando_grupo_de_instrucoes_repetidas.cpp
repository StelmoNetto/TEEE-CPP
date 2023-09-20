#include<iostream>
#include<span>
#include<cstdint>
using std::cin, std::cout, std::endl;

void lerVetor(std::span<float> vetor, const uint16_t idDoVetor)
{
    cout << "Entre com os " << vetor.size() << " do " << idDoVetor << "º vetor:\n";
    for(auto& e : vetor)
      cin >> e;
}

int main()
{
    const int NUMERO_DE_ELEMENTOS = 3;
    float vetorA[NUMERO_DE_ELEMENTOS], vetorB[NUMERO_DE_ELEMENTOS];
    uint8_t id{1};

    lerVetor(vetorA,id++);
    lerVetor(vetorB,id++);
}
