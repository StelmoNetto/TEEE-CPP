#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    const int NUMERO_DE_ELEMENTOS = 3;
    float vetorA[NUMERO_DE_ELEMENTOS], vetorB[NUMERO_DE_ELEMENTOS];

    cout << "Entre com os " << NUMERO_DE_ELEMENTOS << " do 1º vetor:\n";
    for(auto& e : vetorA)
      cin >> e;

    //Identico às linhas acima
    cout << "Entre com os " << NUMERO_DE_ELEMENTOS << " do 2º vetor:\n";
    for(auto& e : vetorB)
      cin >> e;
}
