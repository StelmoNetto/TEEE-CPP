#include<iostream>
using std::cin, std::cout, std::endl;

void alteraPrimeiroElementoDoVetor(float (&vetor)[], float valor) //referência para vetor
{
    vetor[0] = valor;
}

float primeiroElementoDoVetor(const float (&vetor)[]) //referência const para vetor – significa que os elementos não podem ser alterados.
{
    return vetor[0];
}

void exibirComIntervalo() //Complete-a
{

}

int main()
{
    float ponto[]{ 1.3f, 2.1f };

    alteraPrimeiroElementoDoVetor(ponto, 3.f);

    cout << primeiroElementoDoVetor(ponto);
}
