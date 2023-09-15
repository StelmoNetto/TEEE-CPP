#include<iostream>
using std::cin, std::cout, std::endl;

//Use apenas uma das assinaturas abaixo
float primeiroElementoDoVetor(const float v[2]){ return v[0]; }

//float primeiroElementoDoVetor(const float v[]){ return v[0]; } //2ª opção da assinatura acima

//float primeiroElementoDoVetor(const float* v){ return v[0]; } //3ª opção da assinatura acima

int main()
{
    float ponto[]{ 1.3f, 2.1f };

    cout << primeiroElementoDoVetor(ponto);
}
