#include <iostream>
#include <initializer_list>
#include <vector>
using std::vector, std::cout, std::endl;

class UmaClasse
{
public:
 UmaClasse(std::initializer_list<int> lista) : vetor{lista}
 {
    cout << "Tamanho = " << lista.size() << endl;
    //Usando a lista e não o vector
    cout << "Valores da lista:\n";
    for(auto it = lista.begin(); it < lista.end(); it++)
        cout << *it << " ";
    cout << endl;
 }
private:
 vector<int> vetor;
};

int main()
{
    UmaClasse objeto{ 1,2,3,4 };
    objeto = { 1,2,3 };
}
