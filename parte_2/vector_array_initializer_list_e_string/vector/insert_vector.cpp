#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector<int> vetor(3, 100); //Vetor de 3 elementos iguais a 100
    vector<int>::iterator it; //Um iterador: "Aponta" para um elemento

    it = vetor.begin(); //Pega o iterador do 1º elemento do vetor
    it = vetor.insert(it, 200); //Insere no início do vetor

    for (it = vetor.begin(); it<vetor.end(); ++it)
        cout << "Valor: " << *it << endl;
}
